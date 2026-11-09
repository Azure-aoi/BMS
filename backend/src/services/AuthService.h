#pragma once

#include "models/Models.h"

#include <QString>

class AuthService
{
public:
    static LoginResult login(const QString &account, const QString &password, bool isAdmin);
};
