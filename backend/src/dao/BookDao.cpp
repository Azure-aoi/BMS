#include "dao/BookDao.h"

#include "dao/DbUtil.h"

#include <QStringList>

namespace {

const char *kBookSelect = R"SQL(
SELECT b.book_id, b.isbn, b.title, b.author, b.publisher, b.publish_date,
       b.category_id, c.name AS category_name, b.price, b.total_copies,
       b.available_copies, b.pages, b.keywords, b.summary, b.cover_path, b.created_at
FROM book b
LEFT JOIN book_category c ON c.category_id = b.category_id
)SQL";

void fillBook(const QSqlQuery &query, Book &book)
{
    book.id = query.value(QStringLiteral("book_id")).toInt();
    book.isbn = query.value(QStringLiteral("isbn")).toString();
    book.title = query.value(QStringLiteral("title")).toString();
    book.author = query.value(QStringLiteral("author")).toString();
    book.publisher = query.value(QStringLiteral("publisher")).toString();
    book.publishDate = query.value(QStringLiteral("publish_date")).toDate();
    book.categoryId = query.value(QStringLiteral("category_id")).toInt();
    book.categoryName = query.value(QStringLiteral("category_name")).toString();
    book.price = query.value(QStringLiteral("price")).toDouble();
    book.totalCopies = query.value(QStringLiteral("total_copies")).toInt();
    book.availableCopies = query.value(QStringLiteral("available_copies")).toInt();
    book.pages = query.value(QStringLiteral("pages")).toInt();
    book.keywords = query.value(QStringLiteral("keywords")).toString();
    book.summary = query.value(QStringLiteral("summary")).toString();
    book.coverPath = query.value(QStringLiteral("cover_path")).toString();
    book.createdAt = query.value(QStringLiteral("created_at")).toDateTime();
}

QString likePattern(const QString &keyword)
{
    return QStringLiteral("%") + keyword.trimmed() + QStringLiteral("%");
}

} // namespace

BookPage BookDao::search(const BookQuery &request, QString *error)
{
    BookPage page;
    QString where;
    QStringList filters;

    if (!request.keyword.trimmed().isEmpty()) {
        filters << QStringLiteral(
            "(b.title LIKE ? OR b.author LIKE ? OR b.isbn LIKE ? OR b.keywords LIKE ?)");
    }
    if (request.categoryId > 0)
        filters << QStringLiteral("b.category_id = ?");
    if (!filters.isEmpty())
        where = QStringLiteral(" WHERE ") + filters.join(QStringLiteral(" AND "));

    {
        QSqlQuery countQuery = DbUtil::query();
        countQuery.prepare(QStringLiteral("SELECT COUNT(*) FROM book b") + where);
        if (!request.keyword.trimmed().isEmpty()) {
            const QString pattern = likePattern(request.keyword);
            for (int i = 0; i < 4; ++i)
                countQuery.addBindValue(pattern);
        }
        if (request.categoryId > 0)
            countQuery.addBindValue(request.categoryId);
        if (!countQuery.exec()) {
            DbUtil::setError(error, countQuery);
            return page;
        }
        if (countQuery.next())
            page.total = countQuery.value(0).toInt();
    }

    const int pageSize = qMax(1, request.pageSize);
    const int pageNumber = qMax(1, request.page);
    const int offset = (pageNumber - 1) * pageSize;

    QSqlQuery query = DbUtil::query();
    query.prepare(QString::fromLatin1(kBookSelect) + where
                  + QStringLiteral(" ORDER BY b.title LIMIT %1 OFFSET %2")
                        .arg(pageSize)
                        .arg(offset));
    if (!request.keyword.trimmed().isEmpty()) {
        const QString pattern = likePattern(request.keyword);
        for (int i = 0; i < 4; ++i)
            query.addBindValue(pattern);
    }
    if (request.categoryId > 0)
        query.addBindValue(request.categoryId);

    if (!query.exec()) {
        DbUtil::setError(error, query);
        return page;
    }
    while (query.next()) {
        Book book;
        fillBook(query, book);
        page.items.append(book);
    }
    return page;
}

bool BookDao::findById(int bookId, Book *out, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QString::fromLatin1(kBookSelect) + QStringLiteral(" WHERE b.book_id = ?"));
    query.addBindValue(bookId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    if (!query.next())
        return false;
    if (out)
        fillBook(query, *out);
    return true;
}

bool BookDao::findByIsbn(const QString &isbn, Book *out, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QString::fromLatin1(kBookSelect) + QStringLiteral(" WHERE b.isbn = ?"));
    query.addBindValue(isbn);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    if (!query.next())
        return false;
    if (out)
        fillBook(query, *out);
    return true;
}

bool BookDao::insert(const Book &book, int *newId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "INSERT INTO book (isbn, title, author, publisher, publish_date, category_id, price, "
        "total_copies, available_copies, pages, keywords, summary, cover_path) "
        "VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)"));
    query.addBindValue(book.isbn);
    query.addBindValue(book.title);
    query.addBindValue(book.author);
    query.addBindValue(book.publisher);
    query.addBindValue(book.publishDate.isValid() ? QVariant(book.publishDate) : QVariant());
    query.addBindValue(book.categoryId > 0 ? QVariant(book.categoryId) : QVariant());
    query.addBindValue(book.price);
    query.addBindValue(book.totalCopies);
    query.addBindValue(book.availableCopies);
    query.addBindValue(book.pages > 0 ? QVariant(book.pages) : QVariant());
    query.addBindValue(book.keywords);
    query.addBindValue(book.summary);
    query.addBindValue(book.coverPath);
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

bool BookDao::update(const Book &book, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "UPDATE book SET isbn = ?, title = ?, author = ?, publisher = ?, publish_date = ?, "
        "category_id = ?, price = ?, total_copies = ?, available_copies = ?, pages = ?, "
        "keywords = ?, summary = ?, cover_path = ? WHERE book_id = ?"));
    query.addBindValue(book.isbn);
    query.addBindValue(book.title);
    query.addBindValue(book.author);
    query.addBindValue(book.publisher);
    query.addBindValue(book.publishDate.isValid() ? QVariant(book.publishDate) : QVariant());
    query.addBindValue(book.categoryId > 0 ? QVariant(book.categoryId) : QVariant());
    query.addBindValue(book.price);
    query.addBindValue(book.totalCopies);
    query.addBindValue(book.availableCopies);
    query.addBindValue(book.pages > 0 ? QVariant(book.pages) : QVariant());
    query.addBindValue(book.keywords);
    query.addBindValue(book.summary);
    query.addBindValue(book.coverPath);
    query.addBindValue(book.id);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return query.numRowsAffected() >= 0;
}

bool BookDao::remove(int bookId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral("DELETE FROM book WHERE book_id = ?"));
    query.addBindValue(bookId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return query.numRowsAffected() > 0;
}

bool BookDao::decreaseAvailable(int bookId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "UPDATE book SET available_copies = available_copies - 1 "
        "WHERE book_id = ? AND available_copies > 0"));
    query.addBindValue(bookId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return query.numRowsAffected() > 0;
}

bool BookDao::increaseAvailable(int bookId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "UPDATE book SET available_copies = available_copies + 1 "
        "WHERE book_id = ? AND available_copies < total_copies"));
    query.addBindValue(bookId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return query.numRowsAffected() > 0;
}

int BookDao::activeBorrowCount(int bookId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "SELECT COUNT(*) FROM borrow_record WHERE book_id = ? AND status = 'borrowed'"));
    query.addBindValue(bookId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return 0;
    }
    return query.next() ? query.value(0).toInt() : 0;
}

int BookDao::totalTitles(QString *error)
{
    QSqlQuery query = DbUtil::query();
    if (!query.exec(QStringLiteral("SELECT COUNT(*) FROM book"))) {
        DbUtil::setError(error, query);
        return 0;
    }
    return query.next() ? query.value(0).toInt() : 0;
}

int BookDao::totalCopies(QString *error)
{
    QSqlQuery query = DbUtil::query();
    if (!query.exec(QStringLiteral("SELECT COALESCE(SUM(total_copies), 0) FROM book"))) {
        DbUtil::setError(error, query);
        return 0;
    }
    return query.next() ? query.value(0).toInt() : 0;
}

QList<BookCategory> BookDao::categories(QString *error)
{
    QList<BookCategory> result;
    QSqlQuery query = DbUtil::query();
    if (!query.exec(QStringLiteral(
            "SELECT category_id, name, keywords FROM book_category ORDER BY category_id"))) {
        DbUtil::setError(error, query);
        return result;
    }
    while (query.next()) {
        BookCategory category;
        category.id = query.value(0).toInt();
        category.name = query.value(1).toString();
        category.keywords = query.value(2).toString();
        result.append(category);
    }
    return result;
}

bool BookDao::categoryName(int categoryId, QString *name, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral("SELECT name FROM book_category WHERE category_id = ?"));
    query.addBindValue(categoryId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    if (!query.next())
        return false;
    if (name)
        *name = query.value(0).toString();
    return true;
}
