#pragma once

#include "models/Models.h"

#include <QList>

class StatsService
{
public:
    static LibraryStats libraryStats();
    static QList<CategoryStat> categoryStats();
    static QList<PopularBook> popularBooks(int limit = 5);
};
