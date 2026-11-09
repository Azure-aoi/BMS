#pragma once

#include "core/ServiceResult.h"
#include "models/Models.h"

#include <QList>
#include <QString>

class ReaderService
{
public:
    static ServiceResult registerReader(const RegisterRequest &request);
    static QList<ReaderInfo> listReaders(const QString &keyword = QString(), QString *error = nullptr);
    static ReaderInfo reader(int readerId);
    static ServiceResult updateProfile(const ReaderInfo &reader);
    static ServiceResult changePassword(int readerId,
                                        const QString &oldPassword,
                                        const QString &newPassword,
                                        const QString &confirmPassword);
    static ServiceResult setFrozen(int readerId, bool frozen);
    static ServiceResult removeReader(int readerId);
    static QList<ReaderCategory> categories();
};
