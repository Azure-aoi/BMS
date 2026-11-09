#pragma once

#include "models/Models.h"

#include <QList>
#include <QString>

class BorrowDao
{
public:
    static bool insert(int readerId, int bookId, const QDate &dueDate,
                       int *newId = nullptr, QString *error = nullptr);
    static bool findById(int recordId, BorrowRecord *out, QString *error = nullptr);
    static QList<BorrowRecord> listForReader(int readerId, const QString &scope,
                                             QString *error = nullptr);
    static QList<BorrowRecord> listAll(const QString &scope, const QString &keyword,
                                       QString *error = nullptr);
    static QList<BorrowRecord> listOverdue(QString *error = nullptr);

    static bool renew(int recordId, const QDate &newDueDate, QString *error = nullptr);
    static bool markReturned(int recordId, QString *error = nullptr);

    static int activeCountForReader(int readerId, QString *error = nullptr);
    static int overdueCountForReader(int readerId, QString *error = nullptr);
    static bool hasActiveBorrow(int readerId, int bookId, QString *error = nullptr);
    static int countActive(QString *error = nullptr);
    static int countOverdue(QString *error = nullptr);
};
