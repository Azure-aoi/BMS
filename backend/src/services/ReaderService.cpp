#include "services/ReaderService.h"

#include "core/SecurityUtil.h"
#include "core/SessionManager.h"
#include "dao/BorrowDao.h"
#include "dao/DbUtil.h"
#include "dao/MessageDao.h"
#include "dao/UserDao.h"
#include "services/LogService.h"

QString readerFullName(const ReaderInfo &reader)
{
    return QStringLiteral("%1（%2）").arg(reader.name, reader.studentNo);
}

ServiceResult ReaderService::registerReader(const RegisterRequest &request)
{
    if (request.studentNo.trimmed().isEmpty())
        return ServiceResult::failure(QStringLiteral("学号/工号不能为空"));
    if (request.name.trimmed().isEmpty())
        return ServiceResult::failure(QStringLiteral("姓名不能为空"));
    if (request.password.size() < 6)
        return ServiceResult::failure(QStringLiteral("密码至少需要 6 位"));

    QString error;
    if (UserDao::readerExists(request.studentNo.trimmed(), &error))
        return ServiceResult::failure(QStringLiteral("该学号/工号已注册"));
    if (!error.isEmpty())
        return ServiceResult::failure(QStringLiteral("数据库访问失败：%1").arg(error));

    QString categoryName;
    int maxBorrow = 0;
    if (!UserDao::readerCategory(request.categoryId, &categoryName, &maxBorrow, &error))
        return ServiceResult::failure(QStringLiteral("读者类别无效"));

    ReaderInfo reader;
    reader.studentNo = request.studentNo.trimmed();
    reader.name = request.name.trimmed();
    reader.gender = request.gender;
    reader.categoryId = request.categoryId;
    reader.department = request.department.trimmed();
    reader.phone = request.phone.trimmed();
    reader.email = request.email.trimmed();
    reader.address = request.address.trimmed();

    int newId = -1;
    if (!UserDao::insertReader(reader, SecurityUtil::hashPassword(request.password), &newId, &error))
        return ServiceResult::failure(QStringLiteral("注册失败：%1").arg(error));

    MessageDao::add(QStringLiteral("reader"), newId, QStringLiteral("欢迎使用图书馆系统"),
                    QStringLiteral("您好，%1！您的借阅账号已开通，最多可同时借阅 %2 册图书。")
                        .arg(reader.name)
                        .arg(maxBorrow));
    LogService::write(QStringLiteral("注册读者"), QStringLiteral("新增读者 %1").arg(readerFullName(reader)));
    return ServiceResult::success(QStringLiteral("注册成功，请使用学号和密码登录"));
}

QList<ReaderInfo> ReaderService::listReaders(const QString &keyword, QString *error)
{
    return UserDao::listReaders(keyword, error);
}

ReaderInfo ReaderService::reader(int readerId)
{
    ReaderInfo info;
    UserDao::findReaderById(readerId, &info);
    return info;
}

ServiceResult ReaderService::updateProfile(const ReaderInfo &reader)
{
    if (reader.name.trimmed().isEmpty())
        return ServiceResult::failure(QStringLiteral("姓名不能为空"));

    QString categoryName;
    int maxBorrow = 0;
    if (!UserDao::readerCategory(reader.categoryId, &categoryName, &maxBorrow))
        return ServiceResult::failure(QStringLiteral("读者类别无效"));

    QString error;
    ReaderInfo current;
    if (!UserDao::findReaderById(reader.id, &current, &error))
        return ServiceResult::failure(QStringLiteral("读者不存在"));

    if (current.activeBorrows > maxBorrow)
        return ServiceResult::failure(
            QStringLiteral("该读者当前在借 %1 册，超过新类别的上限 %2 册")
                .arg(current.activeBorrows)
                .arg(maxBorrow));

    if (!UserDao::updateReaderProfile(reader, &error))
        return ServiceResult::failure(QStringLiteral("保存失败：%1").arg(error));

    LogService::write(QStringLiteral("修改读者资料"), readerFullName(reader));
    return ServiceResult::success(QStringLiteral("资料已保存"));
}

ServiceResult ReaderService::changePassword(int readerId,
                                            const QString &oldPassword,
                                            const QString &newPassword,
                                            const QString &confirmPassword)
{
    if (newPassword.size() < 6)
        return ServiceResult::failure(QStringLiteral("新密码至少需要 6 位"));
    if (newPassword != confirmPassword)
        return ServiceResult::failure(QStringLiteral("两次输入的新密码不一致"));

    QString error;
    ReaderInfo reader;
    if (!UserDao::findReaderById(readerId, &reader, &error))
        return ServiceResult::failure(QStringLiteral("读者不存在"));

    QSqlQuery query = DbUtil::query();
    query.prepare(QStringLiteral("SELECT password_hash FROM reader WHERE reader_id = ?"));
    query.addBindValue(readerId);
    if (!query.exec() || !query.next())
        return ServiceResult::failure(QStringLiteral("读取密码失败"));
    if (!SecurityUtil::verifyPassword(oldPassword, query.value(0).toString()))
        return ServiceResult::failure(QStringLiteral("原密码错误"));

    if (!UserDao::updateReaderPassword(readerId, SecurityUtil::hashPassword(newPassword), &error))
        return ServiceResult::failure(QStringLiteral("修改失败：%1").arg(error));

    MessageDao::add(QStringLiteral("reader"), readerId, QStringLiteral("密码已修改"),
                    QStringLiteral("您的借阅账号密码已修改，如非本人操作请联系管理员。"));
    return ServiceResult::success(QStringLiteral("密码修改成功"));
}

ServiceResult ReaderService::setFrozen(int readerId, bool frozen)
{
    QString error;
    ReaderInfo reader;
    if (!UserDao::findReaderById(readerId, &reader, &error))
        return ServiceResult::failure(QStringLiteral("读者不存在"));

    if (!UserDao::setReaderFrozen(readerId, frozen, &error))
        return ServiceResult::failure(QStringLiteral("操作失败：%1").arg(error));

    LogService::write(frozen ? QStringLiteral("冻结读者") : QStringLiteral("解冻读者"),
                      readerFullName(reader));
    return ServiceResult::success(frozen ? QStringLiteral("账号已冻结") : QStringLiteral("账号已解冻"));
}

ServiceResult ReaderService::removeReader(int readerId)
{
    QString error;
    ReaderInfo reader;
    if (!UserDao::findReaderById(readerId, &reader, &error))
        return ServiceResult::failure(QStringLiteral("读者不存在"));

    const int active = BorrowDao::activeCountForReader(readerId, &error);
    if (active > 0)
        return ServiceResult::failure(
            QStringLiteral("该读者还有 %1 册图书未归还，无法注销").arg(active));

    if (!UserDao::removeReader(readerId, &error))
        return ServiceResult::failure(QStringLiteral("注销失败：%1").arg(error));

    LogService::write(QStringLiteral("注销读者"), readerFullName(reader));
    return ServiceResult::success(QStringLiteral("读者账号已注销"));
}

QList<ReaderCategory> ReaderService::categories()
{
    return UserDao::readerCategories();
}
