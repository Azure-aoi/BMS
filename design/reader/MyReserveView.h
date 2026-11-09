#ifndef MYRESERVEVIEW_H
#define MYRESERVEVIEW_H

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
}

class MyReserveView final : public QWidget
{
public:
    explicit MyReserveView(QWidget *parent = nullptr);
    ~MyReserveView() override;

private:
    struct ReserveRecord
    {
        enum class Status
        {
            Pending,
            Ready,
            Cancelled,
            Fulfilled,
        };

        int reservationId = 0;
        int readerId = 0;
        int bookId = 0;
        QString title;
        QString author;
        QDateTime reserveDate;
        Status status = Status::Pending;
        QString note;
    };

    void buildUi();
    void loadReservations();
    void renderTable();
    const ReserveRecord *selectedRecord() const;
    void cancelSelectedReservation();
    void updateActionState();
    QString statusText(const ReserveRecord &record) const;

    fluent::collections::DataGrid *m_grid = nullptr;
    QStandardItemModel *m_model = nullptr;
    fluent::basicinput::Button *m_cancelButton = nullptr;
    fluent::textfields::Label *m_feedbackLabel = nullptr;
    QVector<ReserveRecord> m_records;
};

QWidget *createMyReserveView(QWidget *parent = nullptr);

#endif // MYRESERVEVIEW_H
