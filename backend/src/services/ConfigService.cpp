#include "services/ConfigService.h"

#include "dao/ConfigDao.h"
#include "services/LogService.h"

QString ConfigService::libraryName()
{
    return ConfigDao::value(QStringLiteral("LIBRARY_NAME"), QStringLiteral("中山大学图书馆"));
}

int ConfigService::borrowDays()
{
    return ConfigDao::intValue(QStringLiteral("BORROW_DAYS"), 30);
}

int ConfigService::maxRenewCount()
{
    return ConfigDao::intValue(QStringLiteral("MAX_RENEW_COUNT"), 1);
}

int ConfigService::reservationHoldDays()
{
    return ConfigDao::intValue(QStringLiteral("RESERVATION_HOLD_DAYS"), 3);
}

double ConfigService::finePerDay()
{
    return ConfigDao::doubleValue(QStringLiteral("FINE_PER_DAY"), 0.5);
}

QMap<QString, QString> ConfigService::all()
{
    return ConfigDao::all();
}

ServiceResult ConfigService::save(const QMap<QString, QString> &values)
{
    QString error;
    for (auto it = values.cbegin(); it != values.cend(); ++it) {
        if (!ConfigDao::setValue(it.key(), it.value(), &error))
            return ServiceResult::failure(QStringLiteral("保存 %1 失败：%2").arg(it.key(), error));
    }
    LogService::write(QStringLiteral("修改系统设置"), QStringLiteral("更新借阅规则与基础配置"));
    return ServiceResult::success(QStringLiteral("系统设置已保存"));
}
