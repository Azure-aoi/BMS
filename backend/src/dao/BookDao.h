#pragma once

#include "models/Models.h"

#include <QList>
#include <QString>

class BookDao
{
public:
    static BookPage search(const BookQuery &query, QString *error = nullptr);
    static bool findById(int bookId, Book *out, QString *error = nullptr);
    static bool findByIsbn(const QString &isbn, Book *out, QString *error = nullptr);
    static bool insert(const Book &book, int *newId = nullptr, QString *error = nullptr);
    static bool update(const Book &book, QString *error = nullptr);
    static bool remove(int bookId, QString *error = nullptr);

    static bool decreaseAvailable(int bookId, QString *error = nullptr);
    static bool increaseAvailable(int bookId, QString *error = nullptr);
    static int activeBorrowCount(int bookId, QString *error = nullptr);
    static int totalTitles(QString *error = nullptr);
    static int totalCopies(QString *error = nullptr);

    static QList<BookCategory> categories(QString *error = nullptr);
    static bool categoryName(int categoryId, QString *name, QString *error = nullptr);
};
