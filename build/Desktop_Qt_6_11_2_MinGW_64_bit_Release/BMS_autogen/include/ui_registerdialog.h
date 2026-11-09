/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "FluentQt/FluentQt.h"

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QVBoxLayout *RegisterDialogLayout;
    QLabel *RegisterTitleLabel;
    QScrollArea *RegisterScrollArea;
    QWidget *RegisterContent;
    QGridLayout *RegisterLayout;
    QHBoxLayout *RegisterActionLayout;
    fluent::basicinput::Button *BackBtn;
    QSpacerItem *RegisterActionSpacer;
    fluent::basicinput::Button *SubmitBtn;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName("RegisterDialog");
        RegisterDialog->resize(900, 720);
        RegisterDialog->setMinimumSize(QSize(820, 640));
        RegisterDialogLayout = new QVBoxLayout(RegisterDialog);
        RegisterDialogLayout->setSpacing(16);
        RegisterDialogLayout->setObjectName("RegisterDialogLayout");
        RegisterDialogLayout->setContentsMargins(32, 28, 32, 28);
        RegisterTitleLabel = new QLabel(RegisterDialog);
        RegisterTitleLabel->setObjectName("RegisterTitleLabel");
        RegisterTitleLabel->setMinimumSize(QSize(0, 52));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font.setPointSize(22);
        font.setBold(true);
        RegisterTitleLabel->setFont(font);

        RegisterDialogLayout->addWidget(RegisterTitleLabel);

        RegisterScrollArea = new QScrollArea(RegisterDialog);
        RegisterScrollArea->setObjectName("RegisterScrollArea");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(RegisterScrollArea->sizePolicy().hasHeightForWidth());
        RegisterScrollArea->setSizePolicy(sizePolicy);
        RegisterScrollArea->setFrameShape(QFrame::Shape::NoFrame);
        RegisterScrollArea->setWidgetResizable(true);
        RegisterScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        RegisterContent = new QWidget();
        RegisterContent->setObjectName("RegisterContent");
        RegisterContent->setGeometry(QRect(0, 0, 834, 532));
        RegisterLayout = new QGridLayout(RegisterContent);
        RegisterLayout->setObjectName("RegisterLayout");
        RegisterLayout->setHorizontalSpacing(28);
        RegisterLayout->setVerticalSpacing(18);
        RegisterLayout->setContentsMargins(4, 4, 4, 4);
        RegisterScrollArea->setWidget(RegisterContent);

        RegisterDialogLayout->addWidget(RegisterScrollArea);

        RegisterActionLayout = new QHBoxLayout();
        RegisterActionLayout->setSpacing(12);
        RegisterActionLayout->setObjectName("RegisterActionLayout");
        BackBtn = new fluent::basicinput::Button(RegisterDialog);
        BackBtn->setObjectName("BackBtn");
        BackBtn->setMinimumSize(QSize(120, 42));
        BackBtn->setMaximumSize(QSize(120, 42));

        RegisterActionLayout->addWidget(BackBtn);

        RegisterActionSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        RegisterActionLayout->addItem(RegisterActionSpacer);

        SubmitBtn = new fluent::basicinput::Button(RegisterDialog);
        SubmitBtn->setObjectName("SubmitBtn");
        SubmitBtn->setMinimumSize(QSize(180, 42));
        SubmitBtn->setMaximumSize(QSize(180, 42));

        RegisterActionLayout->addWidget(SubmitBtn);


        RegisterDialogLayout->addLayout(RegisterActionLayout);


        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237 - \346\263\250\345\206\214", nullptr));
        RegisterTitleLabel->setText(QCoreApplication::translate("RegisterDialog", "\345\210\233\345\273\272\350\264\246\345\217\267", nullptr));
        BackBtn->setText(QCoreApplication::translate("RegisterDialog", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
        SubmitBtn->setText(QCoreApplication::translate("RegisterDialog", "\345\210\233\345\273\272\350\264\246\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
