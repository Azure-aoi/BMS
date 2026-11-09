#pragma once

#include <QString>

class QApplication;

namespace Theme {

void apply(QApplication &app);
QString color(const QString &token);

} // namespace Theme
