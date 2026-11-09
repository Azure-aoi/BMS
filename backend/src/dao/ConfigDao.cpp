#include "dao/ConfigDao.h"

#include "dao/DbUtil.h"

QString ConfigDao::value(const QString &key, const QString &defaultValue, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral("SELECT config_value FROM system_config WHERE config_key = ?"));
    query.addBindValue(key);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return defaultValue;
    }
    if (!query.next())
        return defaultValue;
    return query.value(0).toString();
}

int ConfigDao::intValue(const QString &key, int defaultValue, QString *error)
{
    bool ok = false;
    const int value = ConfigDao::value(key, QString(), error).toInt(&ok);
    return ok ? value : defaultValue;
}

double ConfigDao::doubleValue(const QString &key, double defaultValue, QString *error)
{
    bool ok = false;
    const double value = ConfigDao::value(key, QString(), error).toDouble(&ok);
    return ok ? value : defaultValue;
}

bool ConfigDao::setValue(const QString &key, const QString &value, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "INSERT INTO system_config (config_key, config_value) VALUES (?, ?) "
        "ON DUPLICATE KEY UPDATE config_value = VALUES(config_value)"));
    query.addBindValue(key);
    query.addBindValue(value);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return true;
}

QMap<QString, QString> ConfigDao::all(QString *error)
{
    QMap<QString, QString> result;
    QSqlQuery query = DbUtil::query();
    if (!query.exec(QStringLiteral("SELECT config_key, config_value FROM system_config"))) {
        DbUtil::setError(error, query);
        return result;
    }
    while (query.next())
        result.insert(query.value(0).toString(), query.value(1).toString());
    return result;
}
