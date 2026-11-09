/********************************************************************************
** Form generated from reading UI file 'readermainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READERMAINWINDOW_H
#define UI_READERMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReaderMainWindow
{
public:
    QVBoxLayout *RootLayout;
    QWidget *NavigationHost;

    void setupUi(QDialog *ReaderMainWindow)
    {
        if (ReaderMainWindow->objectName().isEmpty())
            ReaderMainWindow->setObjectName("ReaderMainWindow");
        ReaderMainWindow->resize(1180, 740);
        ReaderMainWindow->setMinimumSize(QSize(900, 620));
        RootLayout = new QVBoxLayout(ReaderMainWindow);
        RootLayout->setSpacing(0);
        RootLayout->setObjectName("RootLayout");
        RootLayout->setContentsMargins(0, 0, 0, 0);
        NavigationHost = new QWidget(ReaderMainWindow);
        NavigationHost->setObjectName("NavigationHost");

        RootLayout->addWidget(NavigationHost);


        retranslateUi(ReaderMainWindow);

        QMetaObject::connectSlotsByName(ReaderMainWindow);
    } // setupUi

    void retranslateUi(QDialog *ReaderMainWindow)
    {
        ReaderMainWindow->setWindowTitle(QCoreApplication::translate("ReaderMainWindow", "\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237 - \350\257\273\350\200\205\344\270\273\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReaderMainWindow: public Ui_ReaderMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READERMAINWINDOW_H
