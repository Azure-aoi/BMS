#include "core/SessionManager.h"

SessionUser SessionManager::s_user;

SessionUser SessionManager::current()
{
    return s_user;
}

void SessionManager::setReader(const ReaderInfo &reader)
{
    s_user = {};
    s_user.role = SessionUser::Role::Reader;
    s_user.id = reader.id;
    s_user.account = reader.studentNo;
    s_user.name = reader.name;
    s_user.categoryName = reader.categoryName;
    s_user.maxBorrow = reader.maxBorrow;
}

void SessionManager::setAdmin(const AdminInfo &admin)
{
    s_user = {};
    s_user.role = SessionUser::Role::Admin;
    s_user.id = admin.id;
    s_user.account = admin.username;
    s_user.name = admin.displayName;
}

void SessionManager::clear()
{
    s_user = {};
}

bool SessionManager::isAdmin()
{
    return s_user.role == SessionUser::Role::Admin;
}

bool SessionManager::isReader()
{
    return s_user.role == SessionUser::Role::Reader;
}

int SessionManager::userId()
{
    return s_user.id;
}

int SessionManager::maxBorrow()
{
    return s_user.maxBorrow;
}
