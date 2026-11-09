#include "services/BorrowService.h"

#include "core/Database.h"
#include "dao/BookDao.h"
#include "dao/BorrowDao.h"
#include "dao/ReservationDao.h"
#include "dao/UserDao.h"
#include "services/ConfigService.h"
#include "services/LogService.h"
#include "services/MessageService.h"

#include <QSqlError>

namespace {

ServiceResult rollbackWith(QSqlDatabase &db, const QString &message)
{
    db.rollback();
    return ServiceResult::failure(message);
}

} // namespace

ServiceResult BorrowService::borrowBook(int readerId, int bookId)
{
    QSqlDatabase db = Database::connection();
    if (!db.isOpen())
        return ServiceResult::failure(QStringLiteral("数据库未连接"));

    QString error;
    ReaderInfo reader;
    if (!UserDao::findReaderById(readerId, &reader, &error))
        return ServiceResult::failure(QStringLiteral("读取读者信息失败：%1").arg(error));
    if (reader.frozen)
        return ServiceResult::failure(QStringLiteral("账号已被冻结，无法借阅"));

    const int active = BorrowDao::activeCountForReader(readerId, &error);
    if (active >= reader.maxBorrow) {
        return ServiceResult::failure(
            QStringLiteral("您的借阅上限为 %1 册，当前已借 %2 册，请先归还部分图书")
                .arg(reader.maxBorrow)
                .arg(active));
    }

    Book book;
    if (!BookDao::findById(bookId, &book, &error))
        return ServiceResult::failure(QStringLiteral("图书不存在"));
    if (book.availableCopies <= 0) {
        return ServiceResult::failure(
            QStringLiteral("《%1》暂无可借馆藏，您可以选择预约").arg(book.title));
    }
    if (BorrowDao::hasActiveBorrow(readerId, bookId, &error)) {
        return ServiceResult::failure(
            QStringLiteral("您已借阅《%1》且尚未归还").arg(book.title));
    }

    if (!db.transaction())
        return ServiceResult::failure(QStringLiteral("无法启动数据库事务：%1").arg(db.lastError().text()));

    if (!BookDao::decreaseAvailable(bookId, &error))
        return rollbackWith(db, QStringLiteral("更新库存失败：%1").arg(error));

    const QDate dueDate = QDate::currentDate().addDays(ConfigService::borrowDays());
    int recordId = -1;
    if (!BorrowDao::insert(readerId, bookId, dueDate, &recordId, &error))
        return rollbackWith(db, QStringLiteral("借阅登记失败：%1").arg(error));

    if (!db.commit()) {
        const QString message = db.lastError().text();
        return rollbackWith(db, QStringLiteral("提交借阅失败：%1").arg(message));
    }

    MessageService::sendToReader(
        readerId, QStringLiteral("借阅成功"),
        QStringLiteral("您已成功借阅《%1》，应还日期为 %2。")
            .arg(book.title, dueDate.toString(QStringLiteral("yyyy-MM-dd"))));
    LogService::write(QStringLiteral("借阅图书"),
                      QStringLiteral("%1 借阅《%2》").arg(reader.name, book.title));

    return ServiceResult::success(
        QStringLiteral("借阅成功！应还日期：%1").arg(dueDate.toString(QStringLiteral("yyyy-MM-dd"))));
}

ServiceResult BorrowService::returnBook(int recordId)
{
    QSqlDatabase db = Database::connection();
    if (!db.isOpen())
        return ServiceResult::failure(QStringLiteral("数据库未连接"));

    QString error;
    BorrowRecord record;
    if (!BorrowDao::findById(recordId, &record, &error))
        return ServiceResult::failure(QStringLiteral("借阅记录不存在"));
    if (record.isReturned())
        return ServiceResult::failure(QStringLiteral("该记录已归还"));

    if (!db.transaction())
        return ServiceResult::failure(QStringLiteral("无法启动数据库事务：%1").arg(db.lastError().text()));

    if (!BorrowDao::markReturned(recordId, &error))
        return rollbackWith(db, QStringLiteral("归还登记失败：%1").arg(error));
    if (!BookDao::increaseAvailable(record.bookId, &error))
        return rollbackWith(db, QStringLiteral("更新库存失败：%1").arg(error));
    if (!db.commit()) {
        const QString message = db.lastError().text();
        return rollbackWith(db, QStringLiteral("提交归还失败：%1").arg(message));
    }

    const int overdueDays = record.dueDate < QDate::currentDate()
                                ? static_cast<int>(record.dueDate.daysTo(QDate::currentDate()))
                                : 0;
    const double fine = overdueDays * ConfigService::finePerDay();

    QString content = QStringLiteral("您已归还《%1》。").arg(record.bookTitle);
    if (overdueDays > 0) {
        content += QStringLiteral("该书逾期 %1 天，产生罚金 %2 元，请到服务台处理。")
                       .arg(overdueDays)
                       .arg(fine, 0, 'f', 2);
    }
    MessageService::sendToReader(record.readerId, QStringLiteral("归还成功"), content);
    LogService::write(QStringLiteral("归还图书"),
                      QStringLiteral("%1 归还《%2》").arg(record.readerName, record.bookTitle));

    int reservationId = -1;
    int reservedReaderId = -1;
    if (ReservationDao::firstPendingForBook(record.bookId, &reservationId, &reservedReaderId)) {
        ReservationDao::setStatus(reservationId, QStringLiteral("ready"));
        MessageService::sendToReader(
            reservedReaderId, QStringLiteral("预约图书可借阅"),
            QStringLiteral("您预约的《%1》已归还，请在 %2 天内到馆借阅。")
                .arg(record.bookTitle)
                .arg(ConfigService::reservationHoldDays()));
    }

    return ServiceResult::success(
        overdueDays > 0
            ? QStringLiteral("归还成功，逾期 %1 天，罚金 %2 元").arg(overdueDays).arg(fine, 0, 'f', 2)
            : QStringLiteral("归还成功"));
}

ServiceResult BorrowService::renewBook(int recordId)
{
    QString error;
    BorrowRecord record;
    if (!BorrowDao::findById(recordId, &record, &error))
        return ServiceResult::failure(QStringLiteral("借阅记录不存在"));
    if (record.isReturned())
        return ServiceResult::failure(QStringLiteral("该记录已归还，无法续借"));
    if (record.isOverdue())
        return ServiceResult::failure(QStringLiteral("图书已逾期，请先归还后再借阅"));

    const int maxRenew = ConfigService::maxRenewCount();
    if (record.renewCount >= maxRenew) {
        return ServiceResult::failure(
            QStringLiteral("已达到最大续借次数（%1 次）").arg(maxRenew));
    }

    const QDate newDueDate = record.dueDate.addDays(ConfigService::borrowDays());
    if (!BorrowDao::renew(recordId, newDueDate, &error))
        return ServiceResult::failure(QStringLiteral("续借失败：%1").arg(error));

    MessageService::sendToReader(
        record.readerId, QStringLiteral("续借成功"),
        QStringLiteral("《%1》已续借，新的应还日期为 %2。")
            .arg(record.bookTitle, newDueDate.toString(QStringLiteral("yyyy-MM-dd"))));
    LogService::write(QStringLiteral("续借图书"),
                      QStringLiteral("%1 续借《%2》").arg(record.readerName, record.bookTitle));

    return ServiceResult::success(
        QStringLiteral("续借成功，新的应还日期：%1")
            .arg(newDueDate.toString(QStringLiteral("yyyy-MM-dd"))));
}

QList<BorrowRecord> BorrowService::currentBorrows(int readerId)
{
    return BorrowDao::listForReader(readerId, QStringLiteral("current"));
}

QList<BorrowRecord> BorrowService::historyBorrows(int readerId)
{
    return BorrowDao::listForReader(readerId, QStringLiteral("history"));
}

QList<BorrowRecord> BorrowService::overdueBorrows(int readerId)
{
    return BorrowDao::listForReader(readerId, QStringLiteral("overdue"));
}

QList<BorrowRecord> BorrowService::allRecords(const QString &scope, const QString &keyword)
{
    return BorrowDao::listAll(scope, keyword);
}

QList<BorrowRecord> BorrowService::overdueList()
{
    return BorrowDao::listOverdue();
}

double BorrowService::estimatedFine(const BorrowRecord &record)
{
    return record.overdueDays * ConfigService::finePerDay();
}
