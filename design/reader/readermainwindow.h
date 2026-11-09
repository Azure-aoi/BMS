#ifndef READERMAINWINDOW_H
#define READERMAINWINDOW_H

#include <QDialog>

namespace Ui {
class ReaderMainWindow;
}

class ReaderMainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ReaderMainWindow(QWidget *parent = nullptr);
    ~ReaderMainWindow() override;

signals:
    void logoutRequested();

private:
    Ui::ReaderMainWindow *ui;
};

#endif // READERMAINWINDOW_H
