#include "core/Database.h"

#include "core/AppConfig.h"

#include <QSqlError>
#include <QSqlQuery>
#include <QStringList>

QString Database::s_lastError;

bool Database::initialize(QString *error)
{
    const auto setError = [error](const QString &text) {
        s_lastError = text;
        if (error)
            *error = text;
        return false;
    };

    if (QSqlDatabase::contains(QString::fromLatin1(AppConfig::DbConnectionName))) {
        QSqlDatabase existing = QSqlDatabase::database(QString::fromLatin1(AppConfig::DbConnectionName), false);
        if (existing.isOpen())
            return true;
    }

    if (!QSqlDatabase::isDriverAvailable(QStringLiteral("QODBC"))) {
        return setError(QStringLiteral("当前 Qt 未提供 QODBC 驱动，可用驱动：%1")
                            .arg(QSqlDatabase::drivers().join(QStringLiteral(", "))));
    }

    const QString connectionString =
        QStringLiteral("DRIVER={%1};SERVER=%2;PORT=%3;DATABASE=%4;UID=%5;PWD=%6;"
                       "OPTION=3;charset=utf8mb4;")
            .arg(QString::fromLatin1(AppConfig::DbDriver),
                 QString::fromLatin1(AppConfig::DbHost),
                 QString::number(AppConfig::DbPort),
                 QString::fromLatin1(AppConfig::DbName),
                 QString::fromLatin1(AppConfig::DbUser),
                 QString::fromLatin1(AppConfig::DbPassword));

    {
        QSqlDatabase db = QSqlDatabase::addDatabase(QStringLiteral("QODBC"),
                                                    QString::fromLatin1(AppConfig::DbConnectionName));
        db.setDatabaseName(connectionString);
        if (!db.open()) {
            const QString detail = db.lastError().text();
            db.close();
            QSqlDatabase::removeDatabase(QString::fromLatin1(AppConfig::DbConnectionName));
            return setError(detail);
        }

        QSqlQuery probe(db);
        if (!probe.exec(QStringLiteral("SELECT 1"))) {
            const QString detail = probe.lastError().text();
            probe.finish();
            db.close();
            QSqlDatabase::removeDatabase(QString::fromLatin1(AppConfig::DbConnectionName));
            return setError(detail);
        }
    }

    return true;
}

QSqlDatabase Database::connection()
{
    return QSqlDatabase::database(QString::fromLatin1(AppConfig::DbConnectionName), false);
}

QString Database::lastError()
{
    return s_lastError;
}

void Database::shutdown()
{
    const QString name = QString::fromLatin1(AppConfig::DbConnectionName);
    if (!QSqlDatabase::contains(name))
        return;
    {
        QSqlDatabase db = QSqlDatabase::database(name, false);
        if (db.isOpen())
            db.close();
    }
    QSqlDatabase::removeDatabase(name);
}
