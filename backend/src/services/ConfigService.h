#pragma once

#include "core/ServiceResult.h"

#include <QMap>
#include <QString>

class ConfigService
{
public:
    static QString libraryName();
    static int borrowDays();
    static int maxRenewCount();
    static int reservationHoldDays();
    static double finePerDay();

    static QMap<QString, QString> all();
    static ServiceResult save(const QMap<QString, QString> &values);
};
