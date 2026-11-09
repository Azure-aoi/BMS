#include "services/MessageService.h"

#include "dao/MessageDao.h"

QList<Message> MessageService::forReader(int readerId)
{
    return MessageDao::list(QStringLiteral("reader"), readerId);
}

QList<Message> MessageService::forAdmin(int adminId)
{
    return MessageDao::list(QStringLiteral("admin"), adminId);
}

int MessageService::unreadForReader(int readerId)
{
    return MessageDao::unreadCount(QStringLiteral("reader"), readerId);
}

int MessageService::unreadForAdmin(int adminId)
{
    return MessageDao::unreadCount(QStringLiteral("admin"), adminId);
}

bool MessageService::sendToReader(int readerId, const QString &title, const QString &content)
{
    return MessageDao::add(QStringLiteral("reader"), readerId, title, content);
}

bool MessageService::sendToAdmin(int adminId, const QString &title, const QString &content)
{
    return MessageDao::add(QStringLiteral("admin"), adminId, title, content);
}

ServiceResult MessageService::sendOverdueReminder(const BorrowRecord &record)
{
    const QString content =
        QStringLiteral("您借阅的《%1》已逾期 %2 天，应还日期为 %3，请尽快归还，逾期每天将产生罚金。")
            .arg(record.bookTitle)
            .arg(record.overdueDays)
            .arg(record.dueDate.toString(QStringLiteral("yyyy-MM-dd")));
    if (!sendToReader(record.readerId, QStringLiteral("图书逾期催还通知"), content))
        return ServiceResult::failure(QStringLiteral("发送催还通知失败"));
    return ServiceResult::success(QStringLiteral("已向 %1 发送催还通知").arg(record.readerName));
}

void MessageService::markRead(int messageId)
{
    MessageDao::markRead(messageId);
}

void MessageService::markAllReadForReader(int readerId)
{
    MessageDao::markAllRead(QStringLiteral("reader"), readerId);
}

void MessageService::markAllReadForAdmin(int adminId)
{
    MessageDao::markAllRead(QStringLiteral("admin"), adminId);
}
