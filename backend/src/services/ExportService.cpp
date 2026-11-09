#include "services/ExportService.h"

#include "services/ConfigService.h"

#include <QFile>
#include <QTextStream>

namespace {

QString csvField(const QString &value)
{
    QString escaped = value;
    escaped.replace(QLatin1Char('"'), QStringLiteral("\"\""));
    return QStringLiteral("\"%1\"").arg(escaped);
}

} // namespace

ServiceResult ExportService::exportBorrowRecords(const QList<BorrowRecord> &records,
                                                 const QString &filePath)
{
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate))
        return ServiceResult::failure(QStringLiteral("无法写入文件：%1").arg(file.errorString()));

    file.write("\xEF\xBB\xBF");
    QTextStream out(&file);
    out << csvField(QStringLiteral("读者学号")) << ','
        << csvField(QStringLiteral("读者姓名")) << ','
        << csvField(QStringLiteral("书名")) << ','
        << csvField(QStringLiteral("作者")) << ','
        << csvField(QStringLiteral("借出日期")) << ','
        << csvField(QStringLiteral("应还日期")) << ','
        << csvField(QStringLiteral("归还日期")) << ','
        << csvField(QStringLiteral("续借次数")) << ','
        << csvField(QStringLiteral("状态")) << ','
        << csvField(QStringLiteral("逾期天数")) << ','
        << csvField(QStringLiteral("预估罚金（元）")) << '\n';

    for (const BorrowRecord &record : records) {
        const double fine = record.overdueDays * ConfigService::finePerDay();
        out << csvField(record.readerNo) << ','
            << csvField(record.readerName) << ','
            << csvField(record.bookTitle) << ','
            << csvField(record.bookAuthor) << ','
            << csvField(record.borrowDate.toString(QStringLiteral("yyyy-MM-dd"))) << ','
            << csvField(record.dueDate.toString(QStringLiteral("yyyy-MM-dd"))) << ','
            << csvField(record.returnDate.isValid()
                            ? record.returnDate.toString(QStringLiteral("yyyy-MM-dd"))
                            : QString()) << ','
            << csvField(QString::number(record.renewCount)) << ','
            << csvField(borrowStatusText(record)) << ','
            << csvField(QString::number(record.overdueDays)) << ','
            << csvField(QString::number(fine, 'f', 2)) << '\n';
    }

    out.flush();
    file.close();
    return ServiceResult::success(
        QStringLiteral("已导出 %1 条记录到 %2").arg(records.size()).arg(filePath));
}
