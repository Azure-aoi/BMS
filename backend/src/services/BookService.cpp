#include "services/BookService.h"

#include "core/SessionManager.h"
#include "dao/BookDao.h"
#include "dao/FavoriteDao.h"
#include "services/LogService.h"

bool validateBook(const Book &book, QString *message)
{
    if (book.title.trimmed().isEmpty()) {
        *message = QStringLiteral("书名不能为空");
        return false;
    }
    if (book.author.trimmed().isEmpty()) {
        *message = QStringLiteral("作者不能为空");
        return false;
    }
    if (book.isbn.trimmed().isEmpty()) {
        *message = QStringLiteral("ISBN 不能为空");
        return false;
    }
    if (book.categoryId <= 0) {
        *message = QStringLiteral("请选择图书分类");
        return false;
    }
    if (book.totalCopies <= 0) {
        *message = QStringLiteral("馆藏数量必须大于 0");
        return false;
    }
    return true;
}

BookPage BookService::search(const BookQuery &query, QString *error)
{
    return BookDao::search(query, error);
}

Book BookService::book(int bookId)
{
    Book result;
    BookDao::findById(bookId, &result);
    return result;
}

ServiceResult BookService::addBook(Book &book)
{
    QString message;
    if (!validateBook(book, &message))
        return ServiceResult::failure(message);

    QString error;
    Book existing;
    if (BookDao::findByIsbn(book.isbn.trimmed(), &existing, &error))
        return ServiceResult::failure(QStringLiteral("ISBN 已存在：《%1》").arg(existing.title));
    if (!error.isEmpty())
        return ServiceResult::failure(QStringLiteral("数据库访问失败：%1").arg(error));

    book.isbn = book.isbn.trimmed();
    book.title = book.title.trimmed();
    book.author = book.author.trimmed();
    book.availableCopies = book.totalCopies;

    int newId = -1;
    if (!BookDao::insert(book, &newId, &error))
        return ServiceResult::failure(QStringLiteral("添加失败：%1").arg(error));
    book.id = newId;

    LogService::write(QStringLiteral("添加图书"),
                      QStringLiteral("《%1》 馆藏 %2 册").arg(book.title).arg(book.totalCopies));
    return ServiceResult::success(QStringLiteral("图书已添加"));
}

ServiceResult BookService::updateBook(Book &book)
{
    QString message;
    if (!validateBook(book, &message))
        return ServiceResult::failure(message);

    QString error;
    Book current;
    if (!BookDao::findById(book.id, &current, &error))
        return ServiceResult::failure(QStringLiteral("图书不存在"));

    Book sameIsbn;
    if (BookDao::findByIsbn(book.isbn.trimmed(), &sameIsbn, &error) && sameIsbn.id != book.id)
        return ServiceResult::failure(QStringLiteral("ISBN 已被《%1》使用").arg(sameIsbn.title));

    const int borrowed = current.totalCopies - current.availableCopies;
    if (book.totalCopies < borrowed)
        return ServiceResult::failure(
            QStringLiteral("当前有 %1 册在借，馆藏数量不能小于 %1").arg(borrowed));

    book.isbn = book.isbn.trimmed();
    book.title = book.title.trimmed();
    book.author = book.author.trimmed();
    book.availableCopies = book.totalCopies - borrowed;

    if (!BookDao::update(book, &error))
        return ServiceResult::failure(QStringLiteral("保存失败：%1").arg(error));

    LogService::write(QStringLiteral("修改图书"),
                      QStringLiteral("《%1》 馆藏 %2 册").arg(book.title).arg(book.totalCopies));
    return ServiceResult::success(QStringLiteral("图书信息已更新"));
}

ServiceResult BookService::deleteBook(int bookId)
{
    QString error;
    Book current;
    if (!BookDao::findById(bookId, &current, &error))
        return ServiceResult::failure(QStringLiteral("图书不存在"));

    const int active = BookDao::activeBorrowCount(bookId, &error);
    if (active > 0)
        return ServiceResult::failure(
            QStringLiteral("《%1》仍有 %2 册未归还，无法删除").arg(current.title).arg(active));

    if (!BookDao::remove(bookId, &error))
        return ServiceResult::failure(QStringLiteral("删除失败：%1").arg(error));

    LogService::write(QStringLiteral("删除图书"), QStringLiteral("《%1》").arg(current.title));
    return ServiceResult::success(QStringLiteral("图书已删除"));
}

QList<BookCategory> BookService::categories()
{
    return BookDao::categories();
}

bool BookService::isFavorite(int readerId, int bookId)
{
    return FavoriteDao::exists(readerId, bookId);
}

ServiceResult BookService::toggleFavorite(int readerId, int bookId, bool *nowFavorite)
{
    const bool exists = FavoriteDao::exists(readerId, bookId);
    QString error;
    if (exists) {
        if (!FavoriteDao::remove(readerId, bookId, &error))
            return ServiceResult::failure(QStringLiteral("操作失败：%1").arg(error));
        if (nowFavorite)
            *nowFavorite = false;
        return ServiceResult::success(QStringLiteral("已取消收藏"));
    }
    if (!FavoriteDao::add(readerId, bookId, &error))
        return ServiceResult::failure(QStringLiteral("操作失败：%1").arg(error));
    if (nowFavorite)
        *nowFavorite = true;
    return ServiceResult::success(QStringLiteral("已加入收藏"));
}

QList<FavoriteBook> BookService::favorites(int readerId)
{
    return FavoriteDao::list(readerId);
}
