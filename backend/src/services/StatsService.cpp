#include "services/StatsService.h"

#include "dao/StatsDao.h"

LibraryStats StatsService::libraryStats()
{
    return StatsDao::libraryStats();
}

QList<CategoryStat> StatsService::categoryStats()
{
    return StatsDao::categoryStats();
}

QList<PopularBook> StatsService::popularBooks(int limit)
{
    return StatsDao::popularBooks(limit);
}
