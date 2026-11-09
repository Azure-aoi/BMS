#pragma once

#include "models/Models.h"

#include <QDate>
#include <QList>
#include <QString>

class LogDao
{
public:
    static bool add(int adminId, const QString &action, const QString &detail,
                    QString *error = nullptr);
    static QList<OperationLog> list(const QDate &from, const QDate &to,
                                    const QString &keyword = QString(), QString *error = nullptr);
};
