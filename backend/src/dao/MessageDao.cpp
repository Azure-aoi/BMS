#include "dao/MessageDao.h"

#include "dao/DbUtil.h"

bool MessageDao::add(const QString &recipientType, int recipientId,
                     const QString &title, const QString &content, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "INSERT INTO message (recipient_type, recipient_id, title, content, is_read, created_at) "
        "VALUES (?, ?, ?, ?, 0, NOW())"));
    query.addBindValue(recipientType);
    query.addBindValue(recipientId);
    query.addBindValue(title);
    query.addBindValue(content);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return true;
}

QList<Message> MessageDao::list(const QString &recipientType, int recipientId,
                                int limit, QString *error)
{
    QList<Message> result;
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "SELECT message_id, title, content, is_read, created_at FROM message "
        "WHERE recipient_type = ? AND recipient_id = ? "
        "ORDER BY created_at DESC LIMIT %1").arg(qMax(1, limit)));
    query.addBindValue(recipientType);
    query.addBindValue(recipientId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return result;
    }
    while (query.next()) {
        Message message;
        message.id = query.value(0).toInt();
        message.title = query.value(1).toString();
        message.content = query.value(2).toString();
        message.read = query.value(3).toInt() != 0;
        message.createdAt = query.value(4).toDateTime();
        result.append(message);
    }
    return result;
}

int MessageDao::unreadCount(const QString &recipientType, int recipientId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "SELECT COUNT(*) FROM message WHERE recipient_type = ? AND recipient_id = ? AND is_read = 0"));
    query.addBindValue(recipientType);
    query.addBindValue(recipientId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return 0;
    }
    return query.next() ? query.value(0).toInt() : 0;
}

bool MessageDao::markRead(int messageId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral("UPDATE message SET is_read = 1 WHERE message_id = ?"));
    query.addBindValue(messageId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return true;
}

bool MessageDao::markAllRead(const QString &recipientType, int recipientId, QString *error)
{
    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral(
        "UPDATE message SET is_read = 1 WHERE recipient_type = ? AND recipient_id = ? AND is_read = 0"));
    query.addBindValue(recipientType);
    query.addBindValue(recipientId);
    if (!query.exec()) {
        DbUtil::setError(error, query);
        return false;
    }
    return true;
}
