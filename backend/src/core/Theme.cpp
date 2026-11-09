#include "core/Theme.h"

#include <QApplication>
#include <QFile>
#include <QFont>
#include <QHash>
#include <QStyleFactory>

namespace {

const QHash<QString, QString> &tokens()
{
    static const QHash<QString, QString> map = {
        {QStringLiteral("BG"), QStringLiteral("#F6F4EF")},
        {QStringLiteral("SURFACE"), QStringLiteral("#FFFFFF")},
        {QStringLiteral("SURFACE_ALT"), QStringLiteral("#FAF9F5")},
        {QStringLiteral("BORDER"), QStringLiteral("#E7E2D8")},
        {QStringLiteral("BORDER_STRONG"), QStringLiteral("#D6D0C4")},
        {QStringLiteral("TEXT"), QStringLiteral("#22302C")},
        {QStringLiteral("TEXT_SECONDARY"), QStringLiteral("#66756F")},
        {QStringLiteral("TEXT_MUTED"), QStringLiteral("#94A19C")},
        {QStringLiteral("PRIMARY"), QStringLiteral("#256B5B")},
        {QStringLiteral("PRIMARY_HOVER"), QStringLiteral("#1D5649")},
        {QStringLiteral("PRIMARY_PRESSED"), QStringLiteral("#17473D")},
        {QStringLiteral("PRIMARY_SOFT"), QStringLiteral("#E5F0EC")},
        {QStringLiteral("PRIMARY_SOFT_2"), QStringLiteral("#CCE2DA")},
        {QStringLiteral("ACCENT"), QStringLiteral("#D8B45C")},
        {QStringLiteral("DANGER"), QStringLiteral("#BC4B3C")},
        {QStringLiteral("DANGER_HOVER"), QStringLiteral("#A33D30")},
        {QStringLiteral("DANGER_SOFT"), QStringLiteral("#FBEBE8")},
        {QStringLiteral("SUCCESS"), QStringLiteral("#2E7D5B")},
        {QStringLiteral("SUCCESS_SOFT"), QStringLiteral("#E7F3ED")},
        {QStringLiteral("WARNING"), QStringLiteral("#B77B22")},
        {QStringLiteral("WARNING_SOFT"), QStringLiteral("#FBF1DF")},
        {QStringLiteral("INFO"), QStringLiteral("#3B6E8F")},
        {QStringLiteral("INFO_SOFT"), QStringLiteral("#E9F1F6")},
        {QStringLiteral("SIDEBAR"), QStringLiteral("#173F36")},
        {QStringLiteral("SIDEBAR_HOVER"), QStringLiteral("#1E4C42")},
        {QStringLiteral("SIDEBAR_ACTIVE"), QStringLiteral("#2A6A59")},
        {QStringLiteral("SIDEBAR_TEXT"), QStringLiteral("#D8E4DF")},
        {QStringLiteral("SIDEBAR_MUTED"), QStringLiteral("#8FAEA4")},
        {QStringLiteral("WHITE"), QStringLiteral("#FFFFFF")},
    };
    return map;
}

} // namespace

void Theme::apply(QApplication &app)
{
    app.setStyle(QStyleFactory::create(QStringLiteral("Fusion")));

    QFont font(QStringLiteral("Microsoft YaHei UI"));
    font.setPointSize(10);
    font.setStyleStrategy(QFont::PreferAntialias);
    app.setFont(font);

    QFile file(QStringLiteral(":/styles/theme.qss"));
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QString styleSheet = QString::fromUtf8(file.readAll());
    for (auto it = tokens().cbegin(); it != tokens().cend(); ++it)
        styleSheet.replace(QStringLiteral("@%1@").arg(it.key()), it.value());

    app.setStyleSheet(styleSheet);
}

QString Theme::color(const QString &token)
{
    return tokens().value(token);
}
