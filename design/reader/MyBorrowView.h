#ifndef MYBORROWVIEW_H
#define MYBORROWVIEW_H

#include <QDate>
#include <QDateTime>
#include <QString>
#include <QVector>
#include <QWidget>

class QModelIndex;
class QStackedWidget;
class QStandardItemModel;

namespace fluent::basicinput {
class Button;
class CheckBox;
}

namespace fluent::collections {
class DataGrid;
}

namespace fluent::textfields {
class Label;
}

class MyBorrowView final : public QWidget
{
public:
    explicit MyBorrowView(QWidget *parent = nullptr);
    ~MyBorrowView() override;

private:
    struct BorrowRecord
    {
        enum class Status
        {
            Borrowed,
            Returned,
        };

        int recordId = 0;
        int readerId = 0;
        int bookId = 0;
        QString title;
        QString author;
        QString location;
        QDateTime borrowDate;
        QDate dueDate;
        QDateTime returnDate;
        int renewCount = 0;
        Status status = Status::Borrowed;
    };

    void buildUi();
    void buildCurrentPage(QWidget *page);
    void buildHistoryPage(QWidget *page);
    void loadBorrowRecords();
    void switchTab(bool history);
    void renderCurrentPage();
    void renderHistoryPage();
    const BorrowRecord *bookForRow(int row, bool history) const;
    const BorrowRecord *selectedBook(bool history) const;
    bool isOverdue(const BorrowRecord &record) const;
    QString statusText(const BorrowRecord &record) const;
    QString formatDateTime(const QDateTime &dateTime) const;
    void updateActionState();
    void showDetails(const BorrowRecord &record);
    void renewSelectedBook();
    void returnSelectedBook();
    void setFeedback(const QString &message);

    fluent::basicinput::Button *m_currentTabButton = nullptr;
    fluent::basicinput::Button *m_historyTabButton = nullptr;
    fluent::basicinput::Button *m_currentDetailButton = nullptr;
    fluent::basicinput::Button *m_currentRenewButton = nullptr;
    fluent::basicinput::Button *m_currentReturnButton = nullptr;
    fluent::basicinput::Button *m_historyDetailButton = nullptr;
    fluent::basicinput::CheckBox *m_overdueOnlyCheck = nullptr;
    fluent::collections::DataGrid *m_currentGrid = nullptr;
    fluent::collections::DataGrid *m_historyGrid = nullptr;
    QStandardItemModel *m_currentModel = nullptr;
    QStandardItemModel *m_historyModel = nullptr;
    QStackedWidget *m_tabStack = nullptr;
    fluent::textfields::Label *m_feedbackLabel = nullptr;
    QVector<BorrowRecord> m_records;
    QVector<const BorrowRecord *> m_visibleCurrentRecords;
    QVector<const BorrowRecord *> m_visibleHistoryRecords;
};

QWidget *createMyBorrowView(QWidget *parent = nullptr);

#endif // MYBORROWVIEW_H
