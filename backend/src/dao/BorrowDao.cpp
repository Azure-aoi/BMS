#include "dao/BorrowDao.h"

#include "dao/DbUtil.h"

namespace {

const char *kBorrowSelect = R"SQL(
SELECT r.record_id, r.reader_id, r.book_id, rd.student_no, rd.name AS reader_name,
       b.title AS book_title, b.author AS book_author,
       r.borrow_date, r.due_date, r.return_date, r.renew_count, r.status,
       CASE WHEN r.status = 'borrowed' AND r.due_date < CURDATE()
            THEN DATEDIFF(CURDATE(), r.due_date) ELSE 0 END AS overdue_days
FROM borrow_record r
JOIN reader rd ON rd.reader_id = r.reader_id
JOIN book b ON b.book_id = r.book_id
)SQL";

void fillRecord(const QSqlQuery &query, BorrowRecord &record)
{
    record.id = query.value(QStringLiteral("record_id")).toInt();
    record.readerId = query.value(QStringLiteral("reader_id")).toInt();
    record.bookId = query.value(QStringLiteral("book_id")).toInt();
    record.readerNo = query.value(QStringLiteral("student_no")).toString();
    record.readerName = query.value(QStringLiteral("reader_name")).toString();
    record.bookTitle = query.value(QStringLiteral("book_title")).toString();
    record.bookAuthor = query.value(QStringLiteral("book_author")).toString();
    record.borrowDate = query.value(QStringLiteral("borrow_date")).toDateTime();
    record.dueDate = query.value(QStringLiteral("due_date")).toDate();
    record.returnDate = query.value(QStringLiteral("return_date")).toDateTime();
    record.renewCount = query.value(QStringLiteral("renew_count")).toInt();
    record.status = query.value(QStringLiteral("status")).toString();
    record.overdueDays = query.value(QStringLiteral("overdue_days")).toInt();
}

QList<BorrowRecord> runList(QSqlQuery &query, QString *error)
{
    QList<BorrowRecord> result;
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return result;
    }
    while (query.next()) {
        BorrowRecord record;
        fillRecord(query, record);
        result.append(record);
    }
    return result;
}

} // namespace

bool BorrowDao::insert(int readerId, int bookId, const QDate &dueDate,
                       int *newId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "INSERT INTO borrow_record (reader_id, book_id, borrow_date, due_date, status) "
        "VALUES (?, ?, NOW(), ?, 'borrowed')"));
    query.addBindValue(readerId);
    query.addBindValue(bookId);
    query.addBindValue(dueDate);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    if (newId) {
        QSqlQuery idQuery = DbUtil::query();
        if (idQuery.exec(QStringLiteral("SELECT LAST_INSERT_ID()")) && idQuery.next())
            *newId = idQuery.value(0).toInt();
        else
            *newId = -1;
    }
    return true;
}

bool BorrowDao::findById(int recordId, BorrowRecord *out, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QString::fromLatin1(kBorrowSelect) + QStringLiteral(" WHERE r.record_id = ?"));
    query.addBindValue(recordId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    if (!query.next())
        return false;
    if (out)
        fillRecord(query, *out);
    return true;
}

QList<BorrowRecord> BorrowDao::listForReader(int readerId, const QString &scope, QString *error)
{
    QString where = QStringLiteral(" WHERE r.reader_id = ?");
    QString order = QStringLiteral(" ORDER BY r.borrow_date DESC");

    if (scope == QStringLiteral("current")) {
        where += QStringLiteral(" AND r.status = 'borrowed'");
        order = QStringLiteral(" ORDER BY r.due_date ASC");
    } else if (scope == QStringLiteral("overdue")) {
        where += QStringLiteral(" AND r.status = 'borrowed' AND r.due_date < CURDATE()");
        order = QStringLiteral(" ORDER BY r.due_date ASC");
    } else if (scope == QStringLiteral("history")) {
        where += QStringLiteral(" AND r.status = 'returned'");
        order = QStringLiteral(" ORDER BY r.return_date DESC");
    }

    QSqlQuery query = DbUtil::query();
    query.prepare(QString::fromLatin1(kBorrowSelect) + where + order);
    query.addBindValue(readerId);
    return runList(query, error);
}

QList<BorrowRecord> BorrowDao::listAll(const QString &scope, const QString &keyword, QString *error)
{
    QString where = QStringLiteral(" WHERE 1 = 1");
    if (scope == QStringLiteral("current"))
        where += QStringLiteral(" AND r.status = 'borrowed'");
    else if (scope == QStringLiteral("overdue"))
        where += QStringLiteral(" AND r.status = 'borrowed' AND r.due_date < CURDATE()");
    else if (scope == QStringLiteral("returned"))
        where += QStringLiteral(" AND r.status = 'returned'");

    if (!keyword.trimmed().isEmpty())
        where += QStringLiteral(" AND (b.title LIKE ? OR rd.name LIKE ? OR rd.student_no LIKE ?)");

    QSqlQuery query = DbUtil::query();
    query.prepare(QString::fromLatin1(kBorrowSelect) + where
                  + QStringLiteral(" ORDER BY r.borrow_date DESC"));
    if (!keyword.trimmed().isEmpty()) {
        const QString pattern = QStringLiteral("%") + keyword.trimmed() + QStringLiteral("%");
        for (int i = 0; i < 3; ++i)
            query.addBindValue(pattern);
    }
    return runList(query, error);
}

QList<BorrowRecord> BorrowDao::listOverdue(QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QString::fromLatin1(kBorrowSelect)
                  + QStringLiteral(" WHERE r.status = 'borrowed' AND r.due_date < CURDATE()"
                                   " ORDER BY r.due_date ASC"));
    return runList(query, error);
}

bool BorrowDao::renew(int recordId, const QDate &newDueDate, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "UPDATE borrow_record SET due_date = ?, renew_count = renew_count + 1 "
        "WHERE record_id = ? AND status = 'borrowed'"));
    query.addBindValue(newDueDate);
    query.addBindValue(recordId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return query.numRowsAffected() > 0;
}

bool BorrowDao::markReturned(int recordId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "UPDATE borrow_record SET return_date = NOW(), status = 'returned' "
        "WHERE record_id = ? AND status = 'borrowed'"));
    query.addBindValue(recordId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return query.numRowsAffected() > 0;
}

int BorrowDao::activeCountForReader(int readerId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "SELECT COUNT(*) FROM borrow_record WHERE reader_id = ? AND status = 'borrowed'"));
    query.addBindValue(readerId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return 0;
    }
    return query.next() ? query.value(0).toInt() : 0;
}

int BorrowDao::overdueCountForReader(int readerId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "SELECT COUNT(*) FROM borrow_record WHERE reader_id = ? AND status = 'borrowed' "
        "AND due_date < CURDATE()"));
    query.addBindValue(readerId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return 0;
    }
    return query.next() ? query.value(0).toInt() : 0;
}

bool BorrowDao::hasActiveBorrow(int readerId, int bookId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "SELECT 1 FROM borrow_record WHERE reader_id = ? AND book_id = ? AND status = 'borrowed'"));
    query.addBindValue(readerId);
    query.addBindValue(bookId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return query.next();
}

int BorrowDao::countActive(QString *error)
{
    QSqlQuery query = DbUtil::query();
    if (!query.exec(QStringLiteral(
            "SELECT COUNT(*) FROM borrow_record WHERE status = 'borrowed'"))) {
        DbUtil::setError(error, query);
        return 0;
    }
    return query.next() ? query.value(0).toInt() : 0;
}

int BorrowDao::countOverdue(QString *error)
{
    QSqlQuery query = DbUtil::query();
    if (!query.exec(QStringLiteral(
            "SELECT COUNT(*) FROM borrow_record WHERE status = 'borrowed' AND due_date < CURDATE()"))) {
        DbUtil::setError(error, query);
        return 0;
    }
    return query.next() ? query.value(0).toInt() : 0;
}
