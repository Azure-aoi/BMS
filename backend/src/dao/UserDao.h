#pragma once

#include "models/Models.h"

#include <QList>
#include <QString>

class UserDao
{
public:
    // ---- 管理员 ----
    static bool findAdminByUsername(const QString &username, AdminInfo *out,
                                    QString *passwordHash = nullptr, QString *error = nullptr);

    // ---- 读者 ----
    static bool readerExists(const QString &studentNo, QString *error = nullptr);
    static bool findReaderByStudentNo(const QString &studentNo, ReaderInfo *out,
                                      QString *passwordHash = nullptr, QString *error = nullptr);
    static bool findReaderById(int readerId, ReaderInfo *out, QString *error = nullptr);
    static QList<ReaderInfo> listReaders(const QString &keyword = QString(), QString *error = nullptr);
    static bool insertReader(const ReaderInfo &reader, const QString &passwordHash,
                             int *newId = nullptr, QString *error = nullptr);
    static bool updateReaderProfile(const ReaderInfo &reader, QString *error = nullptr);
    static bool updateReaderPassword(int readerId, const QString &passwordHash, QString *error = nullptr);
    static bool setReaderFrozen(int readerId, bool frozen, QString *error = nullptr);
    static bool removeReader(int readerId, QString *error = nullptr);

    static QList<ReaderCategory> readerCategories(QString *error = nullptr);
    static bool readerCategory(int categoryId, QString *name, int *maxBorrow, QString *error = nullptr);
    static int readerCount(QString *error = nullptr);
};
