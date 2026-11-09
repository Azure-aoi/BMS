#ifndef ADMINBOOKVIEW_H
#define ADMINBOOKVIEW_H

#include <QDate>
#include <QDateTime>
#include <QString>
#include <QVector>
#include <QWidget>

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
class LineEdit;
}

class AdminBookView final : public QWidget
{
public:
    explicit AdminBookView(QWidget *parent = nullptr);
    ~AdminBookView() override;

private:
    struct BookRecord
    {
        int bookId = 0;
        QString isbn;
        QString title;
        QString author;
        QString publisher;
        QDate publishDate;
        int categoryId = 0;
        QString categoryName;
        double price = 0.0;
        int totalCopies = 0;
        int availableCopies = 0;
        int pages = 0;
        QString keywords;
        QString summary;
        QString coverPath;
        QDateTime createdAt;
    };

    void buildUi();
    void applyFilter();
    void renderTable();
    int selectedBookIndex() const;
    void updateActionState();
    void addBook();
    void editSelectedBook();
    void deleteSelectedBook();
    void setFeedback(const QString &message);
    QString statusText(const BookRecord &book) const;

    fluent::textfields::LineEdit *m_searchEdit = nullptr;
    fluent::basicinput::ComboBox *m_categoryCombo = nullptr;
    fluent::basicinput::Button *m_addButton = nullptr;
    fluent::basicinput::Button *m_searchButton = nullptr;
    fluent::basicinput::Button *m_editButton = nullptr;
    fluent::basicinput::Button *m_deleteButton = nullptr;
    fluent::collections::DataGrid *m_grid = nullptr;
    QStandardItemModel *m_model = nullptr;
    fluent::textfields::Label *m_feedbackLabel = nullptr;
    QVector<BookRecord> m_books;
    QVector<int> m_visibleIndices;
};

QWidget *createAdminBookView(QWidget *parent = nullptr);

#endif // ADMINBOOKVIEW_H
