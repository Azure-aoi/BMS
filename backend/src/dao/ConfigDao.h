#pragma once

#include <QMap>
#include <QString>

class ConfigDao
{
public:
    static QString value(const QString &key, const QString &defaultValue = QString(),
                         QString *error = nullptr);
    static int intValue(const QString &key, int defaultValue, QString *error = nullptr);
    static double doubleValue(const QString &key, double defaultValue, QString *error = nullptr);
    static bool setValue(const QString &key, const QString &value, QString *error = nullptr);
    static QMap<QString, QString> all(QString *error = nullptr);
};
