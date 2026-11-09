#include "dao/FavoriteDao.h"

#include "dao/DbUtil.h"

bool FavoriteDao::add(int readerId, int bookId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "INSERT IGNORE INTO favorite (reader_id, book_id, created_at) VALUES (?, ?, NOW())"));
    query.addBindValue(readerId);
    query.addBindValue(bookId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return true;
}

bool FavoriteDao::remove(int readerId, int bookId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral("DELETE FROM favorite WHERE reader_id = ? AND book_id = ?"));
    query.addBindValue(readerId);
    query.addBindValue(bookId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return true;
}

bool FavoriteDao::exists(int readerId, int bookId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral("SELECT 1 FROM favorite WHERE reader_id = ? AND book_id = ?"));
    query.addBindValue(readerId);
    query.addBindValue(bookId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return query.next();
}

QList<FavoriteBook> FavoriteDao::list(int readerId, QString *error)
{
    QList<FavoriteBook> result;
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "SELECT b.book_id, b.title, b.author, c.name, b.available_copies, b.total_copies, "
        "f.created_at FROM favorite f "
        "JOIN book b ON b.book_id = f.book_id "
        "LEFT JOIN book_category c ON c.category_id = b.category_id "
        "WHERE f.reader_id = ? ORDER BY f.created_at DESC"));
    query.addBindValue(readerId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return result;
    }
    while (query.next()) {
        FavoriteBook book;
        book.bookId = query.value(0).toInt();
        book.title = query.value(1).toString();
        book.author = query.value(2).toString();
        book.categoryName = query.value(3).toString();
        book.availableCopies = query.value(4).toInt();
        book.totalCopies = query.value(5).toInt();
        book.createdAt = query.value(6).toDateTime();
        result.append(book);
    }
    return result;
}
