#pragma once

#include "models/Models.h"

#include <QDate>
#include <QList>
#include <QString>

class LogService
{
public:
    static void write(const QString &action, const QString &detail);
    static QList<OperationLog> list(const QDate &from, const QDate &to,
                                    const QString &keyword = QString());
};
