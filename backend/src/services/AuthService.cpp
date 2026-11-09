#include "services/AuthService.h"

#include "core/SecurityUtil.h"
#include "core/SessionManager.h"
#include "dao/UserDao.h"

LoginResult AuthService::login(const QString &account, const QString &password, bool isAdmin)
{
    LoginResult result;
    if (account.trimmed().isEmpty() || password.isEmpty()) {
        result.code = LoginResult::Failed;
        result.message = QStringLiteral("账号和密码不能为空");
        return result;
    }

    QString error;
    if (isAdmin) {
        AdminInfo admin;
        QString passwordHash;
        if (!UserDao::findAdminByUsername(account.trimmed(), &admin, &passwordHash, &error)) {
            if (!error.isEmpty()) {
                result.code = LoginResult::Error;
                result.message = QStringLiteral("数据库访问失败：%1").arg(error);
            } else {
                result.code = LoginResult::Failed;
                result.message = QStringLiteral("账号或密码错误");
            }
            return result;
        }
        if (!SecurityUtil::verifyPassword(password, passwordHash)) {
            result.code = LoginResult::Failed;
            result.message = QStringLiteral("账号或密码错误");
            return result;
        }
        SessionManager::setAdmin(admin);
        result.code = LoginResult::Success;
        result.message = QStringLiteral("登录成功");
        return result;
    }

    ReaderInfo reader;
    QString storedHash;
    if (!UserDao::findReaderByStudentNo(account.trimmed(), &reader, &storedHash, &error)) {
        if (!error.isEmpty()) {
            result.code = LoginResult::Error;
            result.message = QStringLiteral("数据库访问失败：%1").arg(error);
        } else {
            result.code = LoginResult::Failed;
            result.message = QStringLiteral("学号或密码错误");
        }
        return result;
    }

    if (!SecurityUtil::verifyPassword(password, storedHash)) {
        result.code = LoginResult::Failed;
        result.message = QStringLiteral("学号或密码错误");
        return result;
    }
    if (reader.frozen) {
        result.code = LoginResult::Frozen;
        result.message = QStringLiteral("账号已被冻结，请联系图书馆管理员");
        return result;
    }

    SessionManager::setReader(reader);
    result.code = LoginResult::Success;
    result.message = QStringLiteral("登录成功");
    return result;
}
