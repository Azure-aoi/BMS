#pragma once

#include "core/Database.h"

#include <QSqlError>
#include <QSqlQuery>
#include <QString>

namespace DbUtil {

inline QSqlQuery query()
{
    return QSqlQuery(Database::connection());
}

inline void setError(QString *error, const QSqlQuery &query)
{
    if (error)
        *error = query.lastError().text();
}

inline void setError(QString *error, const QString &text)
{
    if (error)
        *error = text;
}

} // namespace DbUtil
