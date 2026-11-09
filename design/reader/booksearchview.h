#ifndef BOOKSEARCHVIEW_H
#define BOOKSEARCHVIEW_H

#include <QDate>
#include <QDateTime>
#include <QList>
#include <QString>
#include <QVector>
#include <QWidget>

class QModelIndex;
class QPoint;
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

class BookSearchView final : public QWidget
{
public:
    explicit BookSearchView(QWidget *parent = nullptr);
    ~BookSearchView() override;

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
    fluent::basicinput::Button *createActionButton(const QString &text, const QString &icon);
    int pageSize() const;
    void performSearch(bool resetPage);
    void renderPage();
    const BookRecord *bookForRow(int row) const;
    const BookRecord *selectedBook() const;
    void updateActionState();
    void setFeedback(const QString &message);
    void showBookDetails(const BookRecord &book);
    void borrowSelectedBook();
    void favoriteSelectedBook();
    void copySelectedBook();
    void showContextMenu(const QPoint &position);
    QString statusText(const BookRecord &book) const;

    fluent::textfields::LineEdit *m_searchEdit = nullptr;
    fluent::basicinput::Button *m_searchButton = nullptr;
    fluent::basicinput::Button *m_detailButton = nullptr;
    fluent::basicinput::Button *m_borrowButton = nullptr;
    fluent::basicinput::Button *m_favoriteButton = nullptr;
    fluent::basicinput::Button *m_copyButton = nullptr;
    fluent::basicinput::Button *m_previousButton = nullptr;
    fluent::basicinput::Button *m_nextButton = nullptr;
    fluent::basicinput::ComboBox *m_pageSizeCombo = nullptr;
    fluent::collections::DataGrid *m_grid = nullptr;
    QStandardItemModel *m_model = nullptr;
    fluent::textfields::Label *m_resultLabel = nullptr;
    fluent::textfields::Label *m_feedbackLabel = nullptr;
    fluent::textfields::Label *m_pageLabel = nullptr;
    QList<fluent::basicinput::Button *> m_actionButtons;
    QVector<BookRecord> m_books;
    QVector<BookRecord> m_filteredBooks;
    int m_totalBooks = 0;
    int m_currentPage = 0;
};

QWidget *createBookSearchView(QWidget *parent = nullptr);

#endif // BOOKSEARCHVIEW_H
