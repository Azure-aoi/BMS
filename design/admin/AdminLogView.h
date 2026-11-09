#ifndef ADMINLOGVIEW_H
#define ADMINLOGVIEW_H

#include <QDateTime>
#include <QVector>
#include <QWidget>

class QStandardItemModel;

namespace fluent::basicinput {
class Button;
}

namespace fluent::collections {
class DataGrid;
}

namespace fluent::date_time {
class DateTimeRangePicker;
}

namespace fluent::textfields {
class Label;
}

class AdminLogView final : public QWidget
{
public:
    explicit AdminLogView(QWidget *parent = nullptr);
    ~AdminLogView() override;

private:
    struct OperationLogRecord
    {
        int logId = 0;
        int adminId = 0;
        QString adminName;
        QString action;
        QString detail;
        QDateTime createdAt;
    };

    void buildUi();
    void applyTimeFilter();
    void renderTable();
    void clearFilter();

    fluent::date_time::DateTimeRangePicker *m_rangePicker = nullptr;
    fluent::basicinput::Button *m_searchButton = nullptr;
    fluent::basicinput::Button *m_clearButton = nullptr;
    fluent::collections::DataGrid *m_grid = nullptr;
    QStandardItemModel *m_model = nullptr;
    fluent::textfields::Label *m_feedbackLabel = nullptr;
    QVector<OperationLogRecord> m_logs;
    QVector<const OperationLogRecord *> m_visibleLogs;
};

QWidget *createAdminLogView(QWidget *parent = nullptr);

#endif // ADMINLOGVIEW_H
