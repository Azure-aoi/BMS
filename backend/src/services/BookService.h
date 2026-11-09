#pragma once

#include "core/ServiceResult.h"
#include "models/Models.h"

#include <QList>
#include <QString>

class BookService
{
public:
    static BookPage search(const BookQuery &query, QString *error = nullptr);
    static Book book(int bookId);
    static ServiceResult addBook(Book &book);
    static ServiceResult updateBook(Book &book);
    static ServiceResult deleteBook(int bookId);
    static QList<BookCategory> categories();

    static bool isFavorite(int readerId, int bookId);
    static ServiceResult toggleFavorite(int readerId, int bookId, bool *nowFavorite = nullptr);
    static QList<FavoriteBook> favorites(int readerId);
};
