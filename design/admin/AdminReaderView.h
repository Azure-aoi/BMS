#ifndef ADMINREADERVIEW_H
#define ADMINREADERVIEW_H

#include <QDateTime>
#include <QString>
#include <QVector>
#include <QWidget>

class QStandardItemModel;

namespace fluent::basicinput {
class Button;
}

namespace fluent::collections {
class DataGrid;
}

namespace fluent::textfields {
class Label;
class LineEdit;
}

class AdminReaderView final : public QWidget
{
public:
    explicit AdminReaderView(QWidget *parent = nullptr);
    ~AdminReaderView() override;

private:
    struct ReaderRecord
    {
        int readerId = 0;
        QString studentNo;
        QString name;
        QString gender;
        int categoryId = 0;
        QString categoryName;
        QString department;
        QString phone;
        QString email;
        QString address;
        QString passwordHash;
        bool isFrozen = false;
        QDateTime createdAt;
        // UI aggregates derived from borrow_record.
        int borrowed = 0;
        int overdue = 0;
    };

    void buildUi();
    void applyFilter();
    void renderTable();
    int selectedReaderIndex() const;
    const ReaderRecord *selectedReader() const;
    void updateActionState();
    void toggleFreezeSelectedReader();
    void cancelSelectedReader();
    void showBorrowingDetails();
    void editSelectedReader();
    void setFeedback(const QString &message);
    QString readerStatusText(const ReaderRecord &reader) const;

    fluent::textfields::LineEdit *m_searchEdit = nullptr;
    fluent::basicinput::Button *m_searchButton = nullptr;
    fluent::basicinput::Button *m_freezeButton = nullptr;
    fluent::basicinput::Button *m_cancelReaderButton = nullptr;
    fluent::basicinput::Button *m_borrowingButton = nullptr;
    fluent::basicinput::Button *m_editReaderButton = nullptr;
    fluent::collections::DataGrid *m_grid = nullptr;
    QStandardItemModel *m_model = nullptr;
    fluent::textfields::Label *m_feedbackLabel = nullptr;
    QVector<ReaderRecord> m_readers;
    QVector<int> m_visibleIndices;
};

QWidget *createAdminReaderView(QWidget *parent = nullptr);

#endif // ADMINREADERVIEW_H
