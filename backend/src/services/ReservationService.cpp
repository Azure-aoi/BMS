#include "services/ReservationService.h"

#include "dao/BookDao.h"
#include "dao/ReservationDao.h"
#include "services/ConfigService.h"
#include "services/LogService.h"
#include "services/MessageService.h"

ServiceResult ReservationService::reserveBook(int readerId, int bookId)
{
    QString error;
    Book book;
    if (!BookDao::findById(bookId, &book, &error))
        return ServiceResult::failure(QStringLiteral("图书不存在"));
    if (book.availableCopies > 0)
        return ServiceResult::failure(
            QStringLiteral("《%1》当前有 %2 册可借，无需预约").arg(book.title).arg(book.availableCopies));

    if (ReservationDao::hasActive(readerId, bookId, &error))
        return ServiceResult::failure(QStringLiteral("您已预约《%1》，请勿重复操作").arg(book.title));

    if (!ReservationDao::create(readerId, bookId, QString(), &error))
        return ServiceResult::failure(QStringLiteral("预约失败：%1").arg(error));

    MessageService::sendToReader(
        readerId, QStringLiteral("预约登记成功"),
        QStringLiteral("您已成功预约《%1》。图书归还后将为您保留 %2 天，请留意站内消息。")
            .arg(book.title)
            .arg(ConfigService::reservationHoldDays()));
    LogService::write(QStringLiteral("预约图书"), QStringLiteral("预约《%1》").arg(book.title));

    return ServiceResult::success(QStringLiteral("预约成功，图书归还后将通知您"));
}

ServiceResult ReservationService::cancelReservation(int reservationId, int readerId)
{
    QString error;
    if (!ReservationDao::cancel(reservationId, readerId, &error))
        return ServiceResult::failure(QStringLiteral("取消失败，预约可能已处理或不存在"));

    LogService::write(QStringLiteral("取消预约"),
                      QStringLiteral("取消预约记录 #%1").arg(reservationId));
    return ServiceResult::success(QStringLiteral("预约已取消"));
}

QList<Reservation> ReservationService::forReader(int readerId)
{
    return ReservationDao::listForReader(readerId);
}
