#include "dao/LogDao.h"

#include "dao/DbUtil.h"

bool LogDao::add(int adminId, const QString &action, const QString &detail, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "INSERT INTO operation_log (admin_id, action, detail, created_at) VALUES (?, ?, ?, NOW())"));
    query.addBindValue(adminId > 0 ? QVariant(adminId) : QVariant());
    query.addBindValue(action);
    query.addBindValue(detail);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return true;
}

QList<OperationLog> LogDao::list(const QDate &from, const QDate &to,
                                 const QString &keyword, QString *error)
{
    QList<OperationLog> result;
    QSqlQuery query = DbUtil::query();
    QString sql = QStringLiteral(
        "SELECT l.log_id, COALESCE(a.display_name, '系统') AS admin_name, "
        "l.action, l.detail, l.created_at "
        "FROM operation_log l LEFT JOIN admin a ON a.admin_id = l.admin_id "
        "WHERE l.created_at >= ? AND l.created_at < DATE_ADD(?, INTERVAL 1 DAY)");
    if (!keyword.trimmed().isEmpty())
        sql += QStringLiteral(" AND (l.action LIKE ? OR l.detail LIKE ?)");
    sql += QStringLiteral(" ORDER BY l.created_at DESC LIMIT 500");

    query.prepare(sql);
    query.addBindValue(from.toString(QStringLiteral("yyyy-MM-dd")));
    query.addBindValue(to.toString(QStringLiteral("yyyy-MM-dd")));
    if (!keyword.trimmed().isEmpty()) {
        const QString pattern = QStringLiteral("%") + keyword.trimmed() + QStringLiteral("%");
        query.addBindValue(pattern);
        query.addBindValue(pattern);
    }
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return result;
    }
    while (query.next()) {
        OperationLog log;
        log.id = query.value(0).toInt();
        log.adminName = query.value(1).toString();
        log.action = query.value(2).toString();
        log.detail = query.value(3).toString();
        log.createdAt = query.value(4).toDateTime();
        result.append(log);
    }
    return result;
}
