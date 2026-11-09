#pragma once

#include "models/Models.h"

class SessionManager
{
public:
    static SessionUser current();
    static void setReader(const ReaderInfo &reader);
    static void setAdmin(const AdminInfo &admin);
    static void clear();

    static bool isAdmin();
    static bool isReader();
    static int userId();
    static int maxBorrow();

private:
    static SessionUser s_user;
};
