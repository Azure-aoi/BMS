#pragma once

#include <QString>

class SecurityUtil
{
public:
    static QString hashPassword(const QString &rawPassword);
    static bool verifyPassword(const QString &rawPassword, const QString &storedHash);
};
