#include "services/LogService.h"

#include "core/SessionManager.h"
#include "dao/LogDao.h"

void LogService::write(const QString &action, const QString &detail)
{
    const SessionUser user = SessionManager::current();
    const int adminId = user.isAdmin() ? user.id : -1;
    LogDao::add(adminId, action, detail);
}

QList<OperationLog> LogService::list(const QDate &from, const QDate &to, const QString &keyword)
{
    return LogDao::list(from, to, keyword);
}
