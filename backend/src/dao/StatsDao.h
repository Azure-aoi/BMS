#pragma once

#include "models/Models.h"

#include <QList>
#include <QString>

class StatsDao
{
public:
    static LibraryStats libraryStats(QString *error = nullptr);
    static QList<CategoryStat> categoryStats(QString *error = nullptr);
    static QList<PopularBook> popularBooks(int limit = 5, QString *error = nullptr);
};
