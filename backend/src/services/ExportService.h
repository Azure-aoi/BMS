#pragma once

#include "core/ServiceResult.h"
#include "models/Models.h"

#include <QList>
#include <QString>

class ExportService
{
public:
    static ServiceResult exportBorrowRecords(const QList<BorrowRecord> &records,
                                             const QString &filePath);
};
