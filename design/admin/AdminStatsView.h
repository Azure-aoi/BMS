#ifndef ADMINSTATSVIEW_H
#define ADMINSTATSVIEW_H

#include <QDate>
#include <QDateTime>
#include <QString>
#include <QVector>
#include <QWidget>

class QStackedWidget;
class QStandardItemModel;

namespace fluent::basicinput {
class Button;
class ComboBox;
}

namespace fluent::collections {
class DataGrid;
}

namespace fluent::textfields {
class Label;
}

class AdminStatsView final : public QWidget
{
public:
    explicit AdminStatsView(QWidget *parent = nullptr);
    ~AdminStatsView() override;

    int borrowedCount() const;
    int overdueCount() const;
    void showBorrowedStats();
    void showOverdueStats();
    void refreshData();

private:
    struct BorrowStatsRecord
    {
        enum class Status
        {
            Borrowed,
            Returned,
        };

        int recordId = 0;
        int readerId = 0;
        int bookId = 0;
        QString bookTitle;
        QString readerName;
        QString studentNo;
        QDateTime borrowDate;
        QDate dueDate;
        QDateTime returnDate;
        int renewCount = 0;
        Status status = Status::Borrowed;
    };

    void buildUi();
    void loadRecords();
    void switchTab(bool overdue);
    void renderTables();
    QVector<const BorrowStatsRecord *> filteredRecords(bool overdue) const;
    bool isOverdue(const BorrowStatsRecord &record) const;

    fluent::basicinput::Button *m_borrowedTabButton = nullptr;
    fluent::basicinput::Button *m_overdueTabButton = nullptr;
    fluent::basicinput::Button *m_refreshButton = nullptr;
    fluent::basicinput::ComboBox *m_dateTypeCombo = nullptr;
    fluent::basicinput::ComboBox *m_periodCombo = nullptr;
    fluent::collections::DataGrid *m_borrowedGrid = nullptr;
    fluent::collections::DataGrid *m_overdueGrid = nullptr;
    QStandardItemModel *m_borrowedModel = nullptr;
    QStandardItemModel *m_overdueModel = nullptr;
    QStackedWidget *m_tabStack = nullptr;
    fluent::textfields::Label *m_borrowedCountLabel = nullptr;
    fluent::textfields::Label *m_overdueCountLabel = nullptr;
    fluent::textfields::Label *m_feedbackLabel = nullptr;
    QVector<BorrowStatsRecord> m_records;
};

QWidget *createAdminStatsView(QWidget *parent = nullptr);

#endif // ADMINSTATSVIEW_H
