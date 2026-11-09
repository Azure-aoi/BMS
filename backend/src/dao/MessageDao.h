#pragma once

#include "models/Models.h"

#include <QList>
#include <QString>

class MessageDao
{
public:
    static bool add(const QString &recipientType, int recipientId,
                    const QString &title, const QString &content, QString *error = nullptr);
    static QList<Message> list(const QString &recipientType, int recipientId,
                               int limit = 100, QString *error = nullptr);
    static int unreadCount(const QString &recipientType, int recipientId, QString *error = nullptr);
    static bool markRead(int messageId, QString *error = nullptr);
    static bool markAllRead(const QString &recipientType, int recipientId, QString *error = nullptr);
};
