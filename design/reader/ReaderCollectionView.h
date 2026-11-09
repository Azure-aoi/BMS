#ifndef READERCOLLECTIONVIEW_H
#define READERCOLLECTIONVIEW_H

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

class ReaderCollectionView final : public QWidget
{
public:
    explicit ReaderCollectionView(QWidget *parent = nullptr);
    ~ReaderCollectionView() override;

private:
    struct CollectionRecord
    {
        int readerId = 0;
        int bookId = 0;
        QString title;
        QString author;
        QString publisher;
        QDateTime createdAt;
        int totalCopies = 0;
        int availableCopies = 0;
    };

    void buildUi();
    void loadFavorites();
    void renderTable();
    const CollectionRecord *selectedRecord() const;
    void updateActionState();
    void removeSelectedCollection();
    void quickBorrowSelectedBook();
    void reserveSelectedBook();
    void showDetails(const CollectionRecord &record);
    void setFeedback(const QString &message);

    fluent::collections::DataGrid *m_grid = nullptr;
    QStandardItemModel *m_model = nullptr;
    fluent::basicinput::Button *m_removeButton = nullptr;
    fluent::basicinput::Button *m_borrowButton = nullptr;
    fluent::basicinput::Button *m_reserveButton = nullptr;
    fluent::textfields::Label *m_feedbackLabel = nullptr;
    QVector<CollectionRecord> m_records;
};

QWidget *createReaderCollectionView(QWidget *parent = nullptr);

#endif // READERCOLLECTIONVIEW_H
