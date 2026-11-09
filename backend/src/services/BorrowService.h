#pragma once

#include "core/ServiceResult.h"
#include "models/Models.h"

#include <QList>
#include <QString>

class BorrowService
{
public:
    static ServiceResult borrowBook(int readerId, int bookId);
    static ServiceResult returnBook(int recordId);
    static ServiceResult renewBook(int recordId);

    static QList<BorrowRecord> currentBorrows(int readerId);
    static QList<BorrowRecord> historyBorrows(int readerId);
    static QList<BorrowRecord> overdueBorrows(int readerId);
    static QList<BorrowRecord> allRecords(const QString &scope = QString(),
                                          const QString &keyword = QString());
    static QList<BorrowRecord> overdueList();

    static double estimatedFine(const BorrowRecord &record);
};
