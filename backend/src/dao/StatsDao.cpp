#include "dao/StatsDao.h"

#include "dao/DbUtil.h"

LibraryStats StatsDao::libraryStats(QString *error)
{
    LibraryStats stats;
    QSqlQuery query = DbUtil::query();
    const QString sql = QStringLiteral(
        "SELECT "
        "(SELECT COUNT(*) FROM book), "
        "(SELECT COALESCE(SUM(total_copies), 0) FROM book), "
        "(SELECT COUNT(*) FROM reader), "
        "(SELECT COUNT(*) FROM borrow_record WHERE status = 'borrowed'), "
        "(SELECT COUNT(*) FROM borrow_record WHERE status = 'borrowed' AND due_date < CURDATE()), "
        "(SELECT COUNT(*) FROM reservation WHERE status IN ('pending', 'ready'))");
    if (!query.exec(sql)) {
        DbUtil::setError(error, query);
        return stats;
    }
    if (query.next()) {
        stats.bookTitles = query.value(0).toInt();
        stats.totalCopies = query.value(1).toInt();
        stats.readerCount = query.value(2).toInt();
        stats.activeBorrows = query.value(3).toInt();
        stats.overdueCount = query.value(4).toInt();
        stats.reservationCount = query.value(5).toInt();
    }
    return stats;
}

QList<CategoryStat> StatsDao::categoryStats(QString *error)
{
    QList<CategoryStat> result;
    QSqlQuery query = DbUtil::query();
    const QString sql = QStringLiteral(
        "SELECT c.name, COUNT(DISTINCT b.book_id), COALESCE(SUM(b.total_copies), 0) "
        "FROM book_category c LEFT JOIN book b ON b.category_id = c.category_id "
        "GROUP BY c.category_id, c.name ORDER BY c.category_id");
    if (!query.exec(sql)) {
        DbUtil::setError(error, query);
        return result;
    }
    while (query.next()) {
        CategoryStat stat;
        stat.name = query.value(0).toString();
        stat.titles = query.value(1).toInt();
        stat.copies = query.value(2).toInt();
        result.append(stat);
    }
    return result;
}

QList<PopularBook> StatsDao::popularBooks(int limit, QString *error)
{
    QList<PopularBook> result;
    QSqlQuery query = DbUtil::query();
    const QString sql = QStringLiteral(
        "SELECT b.title, b.author, COUNT(*) AS borrow_count "
        "FROM borrow_record r JOIN book b ON b.book_id = r.book_id "
        "GROUP BY b.book_id, b.title, b.author "
        "ORDER BY borrow_count DESC, b.title ASC LIMIT %1").arg(qMax(1, limit));
    if (!query.exec(sql)) {
        DbUtil::setError(error, query);
        return result;
    }
    while (query.next()) {
        PopularBook book;
        book.title = query.value(0).toString();
        book.author = query.value(1).toString();
        book.borrowCount = query.value(2).toInt();
        result.append(book);
    }
    return result;
}
