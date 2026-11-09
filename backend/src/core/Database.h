#pragma once

#include <QSqlDatabase>
#include <QString>

class Database
{
public:
    static bool initialize(QString *error = nullptr);
    static QSqlDatabase connection();
    static QString lastError();
    static void shutdown();

private:
    static QString s_lastError;
};
