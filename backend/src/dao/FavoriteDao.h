#pragma once

#include "models/Models.h"

#include <QList>
#include <QString>

class FavoriteDao
{
public:
    static bool add(int readerId, int bookId, QString *error = nullptr);
    static bool remove(int readerId, int bookId, QString *error = nullptr);
    static bool exists(int readerId, int bookId, QString *error = nullptr);
    static QList<FavoriteBook> list(int readerId, QString *error = nullptr);
};
