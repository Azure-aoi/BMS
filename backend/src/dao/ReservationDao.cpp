#include "dao/ReservationDao.h"

#include "dao/DbUtil.h"

bool ReservationDao::create(int readerId, int bookId, const QString &note, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "INSERT INTO reservation (reader_id, book_id, reserve_date, status, note) "
        "VALUES (?, ?, NOW(), 'pending', ?)"));
    query.addBindValue(readerId);
    query.addBindValue(bookId);
    query.addBindValue(note);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return true;
}

bool ReservationDao::cancel(int reservationId, int readerId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "UPDATE reservation SET status = 'cancelled' "
        "WHERE reservation_id = ? AND reader_id = ? AND status IN ('pending', 'ready')"));
    query.addBindValue(reservationId);
    query.addBindValue(readerId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return query.numRowsAffected() > 0;
}

QList<Reservation> ReservationDao::listForReader(int readerId, QString *error)
{
    QList<Reservation> result;
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "SELECT s.reservation_id, s.reader_id, s.book_id, b.title, b.author, "
        "s.reserve_date, s.status, s.note "
        "FROM reservation s JOIN book b ON b.book_id = s.book_id "
        "WHERE s.reader_id = ? ORDER BY s.reserve_date DESC"));
    query.addBindValue(readerId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return result;
    }
    while (query.next()) {
        Reservation reservation;
        reservation.id = query.value(0).toInt();
        reservation.readerId = query.value(1).toInt();
        reservation.bookId = query.value(2).toInt();
        reservation.bookTitle = query.value(3).toString();
        reservation.bookAuthor = query.value(4).toString();
        reservation.reserveDate = query.value(5).toDateTime();
        reservation.status = query.value(6).toString();
        reservation.note = query.value(7).toString();
        result.append(reservation);
    }
    return result;
}

bool ReservationDao::hasActive(int readerId, int bookId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "SELECT 1 FROM reservation WHERE reader_id = ? AND book_id = ? "
        "AND status IN ('pending', 'ready')"));
    query.addBindValue(readerId);
    query.addBindValue(bookId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return query.next();
}

bool ReservationDao::firstPendingForBook(int bookId, int *reservationId, int *readerId,
                                         QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "SELECT reservation_id, reader_id FROM reservation "
        "WHERE book_id = ? AND status = 'pending' ORDER BY reserve_date ASC LIMIT 1"));
    query.addBindValue(bookId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    if (!query.next())
        return false;
    if (reservationId)
        *reservationId = query.value(0).toInt();
    if (readerId)
        *readerId = query.value(1).toInt();
    return true;
}

bool ReservationDao::setStatus(int reservationId, const QString &status, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral("UPDATE reservation SET status = ? WHERE reservation_id = ?"));
    query.addBindValue(status);
    query.addBindValue(reservationId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return query.numRowsAffected() >= 0;
}

int ReservationDao::countActive(QString *error)
{
    QSqlQuery query = DbUtil::query();
    if (!query.exec(QStringLiteral(
            "SELECT COUNT(*) FROM reservation WHERE status IN ('pending', 'ready')"))) {
        DbUtil::setError(error, query);
        return 0;
    }
    return query.next() ? query.value(0).toInt() : 0;
}
