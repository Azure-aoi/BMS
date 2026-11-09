/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "FluentQt/FluentQt.h"

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *DialogLayout;
    QFrame *LoginModule;
    QHBoxLayout *LoginModuleLayout;
    QFrame *BrandModule;
    QVBoxLayout *BrandLayout;
    QSpacerItem *BrandTopSpacer;
    QLabel *WelcomeLable_2;
    QLabel *WelcomeLable;
    QSpacerItem *BrandMiddleSpacer;
    QLabel *WelcomeLable_3;
    fluent::basicinput::Button *RegisterBtn;
    QSpacerItem *BrandBottomSpacer;
    QWidget *FormModule;
    QVBoxLayout *FormLayout;
    QLabel *LoginLabel;
    QFrame *IdentityChooseFrame;
    QHBoxLayout *IdentityChooseLayout;
    QPushButton *UserLoginBtn;
    QPushButton *AdminLoginBtn;
    QWidget *AccountRow;
    QHBoxLayout *AccountRowLayout;
    QLabel *ic_account;
    fluent::textfields::LineEdit *AccountTextBox;
    QWidget *PasswordRow;
    QHBoxLayout *PasswordRowLayout;
    QLabel *ic_password;
    fluent::textfields::PasswordBox *PasswordTextBox;
    QCheckBox *RememberAccountCheckBox;
    fluent::basicinput::Button *LoginBtn;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(1100, 700);
        LoginDialog->setMinimumSize(QSize(1100, 700));
        LoginDialog->setStyleSheet(QString::fromUtf8(""));
        DialogLayout = new QVBoxLayout(LoginDialog);
        DialogLayout->setSpacing(0);
        DialogLayout->setObjectName("DialogLayout");
        DialogLayout->setContentsMargins(70, 90, 70, 90);
        LoginModule = new QFrame(LoginDialog);
        LoginModule->setObjectName("LoginModule");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginModule->sizePolicy().hasHeightForWidth());
        LoginModule->setSizePolicy(sizePolicy);
        LoginModule->setMinimumSize(QSize(960, 520));
        LoginModule->setMaximumSize(QSize(960, 520));
        LoginModule->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        LoginModule->setStyleSheet(QString::fromUtf8("QFrame#LoginModule {\n"
"	background: #F5F9FA;\n"
"    border: 1px solid rgba(255, 255, 255, 0.55);\n"
"  \n"
"\n"
"	\n"
"}\n"
"\n"
""));
        LoginModule->setFrameShape(QFrame::Shape::StyledPanel);
        LoginModule->setFrameShadow(QFrame::Shadow::Raised);
        LoginModuleLayout = new QHBoxLayout(LoginModule);
        LoginModuleLayout->setSpacing(0);
        LoginModuleLayout->setObjectName("LoginModuleLayout");
        LoginModuleLayout->setContentsMargins(0, 0, 0, 0);
        BrandModule = new QFrame(LoginModule);
        BrandModule->setObjectName("BrandModule");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(BrandModule->sizePolicy().hasHeightForWidth());
        BrandModule->setSizePolicy(sizePolicy1);
        BrandModule->setMinimumSize(QSize(400, 520));
        BrandModule->setMaximumSize(QSize(400, 16777215));
        BrandModule->setStyleSheet(QString::fromUtf8("QFrame#BrandModule{\n"
"background: #7494ec;\n"
"    border: 1px solid rgba(255, 255, 255, 0.55);\n"
"    border-top-right-radius: 150px;\n"
"    border-bottom-right-radius: 150px;\n"
"\n"
"}"));
        BrandModule->setFrameShape(QFrame::Shape::StyledPanel);
        BrandModule->setFrameShadow(QFrame::Shadow::Raised);
        BrandLayout = new QVBoxLayout(BrandModule);
        BrandLayout->setSpacing(14);
        BrandLayout->setObjectName("BrandLayout");
        BrandLayout->setContentsMargins(32, 58, 56, 48);
        BrandTopSpacer = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        BrandLayout->addItem(BrandTopSpacer);

        WelcomeLable_2 = new QLabel(BrandModule);
        WelcomeLable_2->setObjectName("WelcomeLable_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(WelcomeLable_2->sizePolicy().hasHeightForWidth());
        WelcomeLable_2->setSizePolicy(sizePolicy2);
        WelcomeLable_2->setMinimumSize(QSize(0, 78));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font.setPointSize(28);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(true);
        WelcomeLable_2->setFont(font);
        WelcomeLable_2->setMouseTracking(true);
        WelcomeLable_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        WelcomeLable_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        BrandLayout->addWidget(WelcomeLable_2);

        WelcomeLable = new QLabel(BrandModule);
        WelcomeLable->setObjectName("WelcomeLable");
        sizePolicy2.setHeightForWidth(WelcomeLable->sizePolicy().hasHeightForWidth());
        WelcomeLable->setSizePolicy(sizePolicy2);
        WelcomeLable->setMinimumSize(QSize(0, 52));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font1.setPointSize(24);
        font1.setBold(true);
        WelcomeLable->setFont(font1);
        WelcomeLable->setMouseTracking(true);
        WelcomeLable->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        WelcomeLable->setAlignment(Qt::AlignmentFlag::AlignCenter);

        BrandLayout->addWidget(WelcomeLable);

        BrandMiddleSpacer = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        BrandLayout->addItem(BrandMiddleSpacer);

        WelcomeLable_3 = new QLabel(BrandModule);
        WelcomeLable_3->setObjectName("WelcomeLable_3");
        sizePolicy2.setHeightForWidth(WelcomeLable_3->sizePolicy().hasHeightForWidth());
        WelcomeLable_3->setSizePolicy(sizePolicy2);
        WelcomeLable_3->setMinimumSize(QSize(0, 44));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Rounded MT")});
        font2.setPointSize(20);
        font2.setBold(true);
        WelcomeLable_3->setFont(font2);
        WelcomeLable_3->setMouseTracking(true);
        WelcomeLable_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));
        WelcomeLable_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        BrandLayout->addWidget(WelcomeLable_3);

        RegisterBtn = new fluent::basicinput::Button(BrandModule);
        RegisterBtn->setObjectName("RegisterBtn");
        RegisterBtn->setMinimumSize(QSize(150, 42));
        RegisterBtn->setMaximumSize(QSize(150, 42));

        BrandLayout->addWidget(RegisterBtn, 0, Qt::AlignmentFlag::AlignHCenter);

        BrandBottomSpacer = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        BrandLayout->addItem(BrandBottomSpacer);


        LoginModuleLayout->addWidget(BrandModule);

        FormModule = new QWidget(LoginModule);
        FormModule->setObjectName("FormModule");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(FormModule->sizePolicy().hasHeightForWidth());
        FormModule->setSizePolicy(sizePolicy3);
        FormLayout = new QVBoxLayout(FormModule);
        FormLayout->setSpacing(14);
        FormLayout->setObjectName("FormLayout");
        FormLayout->setContentsMargins(62, 28, 62, 28);
        LoginLabel = new QLabel(FormModule);
        LoginLabel->setObjectName("LoginLabel");
        sizePolicy2.setHeightForWidth(LoginLabel->sizePolicy().hasHeightForWidth());
        LoginLabel->setSizePolicy(sizePolicy2);
        LoginLabel->setMinimumSize(QSize(0, 56));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font3.setPointSize(28);
        font3.setBold(true);
        font3.setItalic(false);
        LoginLabel->setFont(font3);
        LoginLabel->setStyleSheet(QString::fromUtf8("#title {\n"
"    font-size: 26px;\n"
"    font-weight: 700;\n"
"    color: #1a1d29;\n"
"}"));
        LoginLabel->setTextFormat(Qt::TextFormat::AutoText);
        LoginLabel->setScaledContents(false);
        LoginLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        FormLayout->addWidget(LoginLabel);

        IdentityChooseFrame = new QFrame(FormModule);
        IdentityChooseFrame->setObjectName("IdentityChooseFrame");
        IdentityChooseFrame->setMinimumSize(QSize(300, 44));
        IdentityChooseFrame->setMaximumSize(QSize(300, 44));
        IdentityChooseFrame->setStyleSheet(QString::fromUtf8("\n"
"    border: 2px solid #e3e7f0; \n"
"    border-radius: 20px;\n"
"\n"
"\n"
""));
        IdentityChooseFrame->setFrameShape(QFrame::Shape::StyledPanel);
        IdentityChooseFrame->setFrameShadow(QFrame::Shadow::Raised);
        IdentityChooseLayout = new QHBoxLayout(IdentityChooseFrame);
        IdentityChooseLayout->setSpacing(0);
        IdentityChooseLayout->setObjectName("IdentityChooseLayout");
        IdentityChooseLayout->setContentsMargins(0, 0, 0, 0);
        UserLoginBtn = new QPushButton(IdentityChooseFrame);
        UserLoginBtn->setObjectName("UserLoginBtn");
        sizePolicy3.setHeightForWidth(UserLoginBtn->sizePolicy().hasHeightForWidth());
        UserLoginBtn->setSizePolicy(sizePolicy3);
        UserLoginBtn->setMinimumSize(QSize(148, 40));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial Rounded MT")});
        font4.setBold(true);
        UserLoginBtn->setFont(font4);
        UserLoginBtn->setStyleSheet(QString::fromUtf8("QPushButton#UserLoginBtn {\n"
"    border: none;\n"
"    background: transparent;\n"
"    font-size: 14px;\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton#UserLoginBtn:checked  {\n"
"    background: #4A90A4;\n"
"    color: white;\n"
"	border: 1.5px solid #e3e7f0;\n"
"    border-radius: 20px;\n"
"}"));
        UserLoginBtn->setCheckable(true);
        UserLoginBtn->setChecked(true);

        IdentityChooseLayout->addWidget(UserLoginBtn);

        AdminLoginBtn = new QPushButton(IdentityChooseFrame);
        AdminLoginBtn->setObjectName("AdminLoginBtn");
        sizePolicy3.setHeightForWidth(AdminLoginBtn->sizePolicy().hasHeightForWidth());
        AdminLoginBtn->setSizePolicy(sizePolicy3);
        AdminLoginBtn->setMinimumSize(QSize(148, 40));
        AdminLoginBtn->setFont(font4);
        AdminLoginBtn->setStyleSheet(QString::fromUtf8("QPushButton#AdminLoginBtn {\n"
"    border: none;\n"
"    background: transparent;\n"
"    font-size: 14px;\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton#AdminLoginBtn:checked  {\n"
"    background: #4A90A4;\n"
"    color: white;\n"
"	border: 1.5px solid #e3e7f0;\n"
"    border-radius: 20px;\n"
"}"));
        AdminLoginBtn->setCheckable(true);

        IdentityChooseLayout->addWidget(AdminLoginBtn);


        FormLayout->addWidget(IdentityChooseFrame, 0, Qt::AlignmentFlag::AlignHCenter);

        AccountRow = new QWidget(FormModule);
        AccountRow->setObjectName("AccountRow");
        AccountRowLayout = new QHBoxLayout(AccountRow);
        AccountRowLayout->setSpacing(10);
        AccountRowLayout->setObjectName("AccountRowLayout");
        AccountRowLayout->setContentsMargins(0, 0, 0, 0);
        ic_account = new QLabel(AccountRow);
        ic_account->setObjectName("ic_account");
        ic_account->setMinimumSize(QSize(34, 34));
        ic_account->setMaximumSize(QSize(34, 34));
        ic_account->setPixmap(QPixmap(QString::fromUtf8(":/icon/img/icon/ic_svg_account.svg")));
        ic_account->setScaledContents(true);
        ic_account->setAlignment(Qt::AlignmentFlag::AlignCenter);

        AccountRowLayout->addWidget(ic_account);

        AccountTextBox = new fluent::textfields::LineEdit(AccountRow);
        AccountTextBox->setObjectName("AccountTextBox");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(AccountTextBox->sizePolicy().hasHeightForWidth());
        AccountTextBox->setSizePolicy(sizePolicy4);
        AccountTextBox->setMinimumSize(QSize(0, 44));

        AccountRowLayout->addWidget(AccountTextBox);


        FormLayout->addWidget(AccountRow);

        PasswordRow = new QWidget(FormModule);
        PasswordRow->setObjectName("PasswordRow");
        PasswordRowLayout = new QHBoxLayout(PasswordRow);
        PasswordRowLayout->setSpacing(10);
        PasswordRowLayout->setObjectName("PasswordRowLayout");
        PasswordRowLayout->setContentsMargins(0, 0, 0, 0);
        ic_password = new QLabel(PasswordRow);
        ic_password->setObjectName("ic_password");
        ic_password->setMinimumSize(QSize(34, 34));
        ic_password->setMaximumSize(QSize(34, 34));
        ic_password->setPixmap(QPixmap(QString::fromUtf8(":/icon/img/icon/ic_svg_password.svg")));
        ic_password->setScaledContents(true);
        ic_password->setAlignment(Qt::AlignmentFlag::AlignCenter);

        PasswordRowLayout->addWidget(ic_password);

        PasswordTextBox = new fluent::textfields::PasswordBox(PasswordRow);
        PasswordTextBox->setObjectName("PasswordTextBox");
        sizePolicy4.setHeightForWidth(PasswordTextBox->sizePolicy().hasHeightForWidth());
        PasswordTextBox->setSizePolicy(sizePolicy4);
        PasswordTextBox->setMinimumSize(QSize(0, 44));

        PasswordRowLayout->addWidget(PasswordTextBox);


        FormLayout->addWidget(PasswordRow);

        RememberAccountCheckBox = new QCheckBox(FormModule);
        RememberAccountCheckBox->setObjectName("RememberAccountCheckBox");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(RememberAccountCheckBox->sizePolicy().hasHeightForWidth());
        RememberAccountCheckBox->setSizePolicy(sizePolicy5);
        RememberAccountCheckBox->setMinimumSize(QSize(0, 30));
        RememberAccountCheckBox->setFont(font4);

        FormLayout->addWidget(RememberAccountCheckBox);

        LoginBtn = new fluent::basicinput::Button(FormModule);
        LoginBtn->setObjectName("LoginBtn");
        sizePolicy.setHeightForWidth(LoginBtn->sizePolicy().hasHeightForWidth());
        LoginBtn->setSizePolicy(sizePolicy);
        LoginBtn->setMinimumSize(QSize(300, 46));
        LoginBtn->setMaximumSize(QSize(300, 46));
        LoginBtn->setStyleSheet(QString::fromUtf8(""));

        FormLayout->addWidget(LoginBtn, 0, Qt::AlignmentFlag::AlignHCenter);


        LoginModuleLayout->addWidget(FormModule);


        DialogLayout->addWidget(LoginModule);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237 - \347\231\273\345\275\225", nullptr));
        WelcomeLable_2->setText(QCoreApplication::translate("LoginDialog", "\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        WelcomeLable->setText(QCoreApplication::translate("LoginDialog", "Hello,Welcome!", nullptr));
        WelcomeLable_3->setText(QCoreApplication::translate("LoginDialog", "\350\277\230\346\262\241\346\234\211\350\264\246\345\217\267\357\274\237", nullptr));
        RegisterBtn->setText(QCoreApplication::translate("LoginDialog", "\346\263\250 \345\206\214", nullptr));
        LoginLabel->setText(QCoreApplication::translate("LoginDialog", "Login", nullptr));
        UserLoginBtn->setText(QCoreApplication::translate("LoginDialog", "\347\224\250 \346\210\267 \347\231\273 \345\275\225", nullptr));
        AdminLoginBtn->setText(QCoreApplication::translate("LoginDialog", "\347\256\241 \347\220\206 \345\221\230 \347\231\273 \345\205\245", nullptr));
        ic_account->setText(QString());
        ic_password->setText(QString());
        RememberAccountCheckBox->setText(QCoreApplication::translate("LoginDialog", "\350\256\260\344\275\217\350\264\246\345\217\267", nullptr));
        LoginBtn->setText(QCoreApplication::translate("LoginDialog", "\347\231\273    \345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
