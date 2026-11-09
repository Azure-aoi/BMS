#pragma once

#include "core/ServiceResult.h"
#include "models/Models.h"

#include <QList>
#include <QString>

class MessageService
{
public:
    static QList<Message> forReader(int readerId);
    static QList<Message> forAdmin(int adminId);
    static int unreadForReader(int readerId);
    static int unreadForAdmin(int adminId);
    static bool sendToReader(int readerId, const QString &title, const QString &content);
    static bool sendToAdmin(int adminId, const QString &title, const QString &content);
    static ServiceResult sendOverdueReminder(const BorrowRecord &record);
    static void markRead(int messageId);
    static void markAllReadForReader(int readerId);
    static void markAllReadForAdmin(int adminId);
};
