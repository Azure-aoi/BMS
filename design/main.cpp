#include "AdminMainWindow.h"
#include "readermainwindow.h"
#include "logindialog.h"
#include <FluentQt/FluentQt.h>
#include "core/Database.h"
#include "core/SessionManager.h"

#include <QApplication>
#include <QMessageBox>
#include <QObject>
#include <functional>
#include <memory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //【初始化】QCoreApplication::setOrganizationName/setApplicationName
    //   -> QSettings 使用同一配置路径。
    QCoreApplication::setOrganizationName(QStringLiteral("BMS"));
    QCoreApplication::setApplicationName(QStringLiteral("BMS"));

    //【初始化】prepareHighDpiApplication -> initializeResources。
    fluent::prepareHighDpiApplication();
    fluent::initializeResources();

    QString databaseError;
    if (!Database::initialize(&databaseError)) {
        QMessageBox::critical(nullptr, QStringLiteral("数据库连接失败"), databaseError);
        return 1;
    }

    std::unique_ptr<ReaderMainWindow> readerWindow;
    std::unique_ptr<AdminMainWindow> adminWindow;
    LoginDialog loginDialog;

    std::function<void()> returnToLogin;
    auto connectLogout = [&](QWidget *window) {
        if (auto *reader = qobject_cast<ReaderMainWindow *>(window)) {
            QObject::connect(reader, &ReaderMainWindow::logoutRequested,
                             &loginDialog, [&] { returnToLogin(); });
        } else if (auto *admin = qobject_cast<AdminMainWindow *>(window)) {
            QObject::connect(admin, &AdminMainWindow::logoutRequested,
                             &loginDialog, [&] { returnToLogin(); });
        }
    };
    returnToLogin = [&] {
        SessionManager::clear();
        readerWindow.reset();
        adminWindow.reset();
        loginDialog.prepareForLogin();
        loginDialog.show();
        loginDialog.raise();
        loginDialog.activateWindow();
    };

    QObject::connect(&loginDialog, &LoginDialog::loginSucceeded, &loginDialog,
        [&](const QString &, bool adminMode) {
            if (adminMode) {
                adminWindow = std::make_unique<AdminMainWindow>();
                connectLogout(adminWindow.get());
                adminWindow->show();
            } else {
                readerWindow = std::make_unique<ReaderMainWindow>();
                connectLogout(readerWindow.get());
                readerWindow->show();
            }
        });

    //【启动逻辑】LoginDialog::show -> QApplication::exec。
    // 最后一个可见窗口关闭后 exec 返回。
    loginDialog.show();
    const int exitCode = QApplication::exec();
    readerWindow.reset();
    adminWindow.reset();
    Database::shutdown();
    return exitCode;
}
