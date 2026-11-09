#include "core/SecurityUtil.h"

#include <QCryptographicHash>

QString SecurityUtil::hashPassword(const QString &rawPassword)
{
    return QString::fromLatin1(
        QCryptographicHash::hash(rawPassword.toUtf8(), QCryptographicHash::Sha256).toHex());
}

bool SecurityUtil::verifyPassword(const QString &rawPassword, const QString &storedHash)
{
    return hashPassword(rawPassword).compare(storedHash, Qt::CaseInsensitive) == 0;
}
