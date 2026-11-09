#pragma once

namespace AppConfig {

inline constexpr const char *Organization = "SYSU";
inline constexpr const char *Application = "LibraryManager";

inline constexpr const char *DbConnectionName = "library_connection";
inline constexpr const char *DbDriver = "MySQL ODBC 26.10 Unicode Driver";
inline constexpr const char *DbHost = "localhost";
inline constexpr int DbPort = 3306;
inline constexpr const char *DbName = "library_db";
inline constexpr const char *DbUser = "library_user";
inline constexpr const char *DbPassword = "Library@2026";

inline constexpr int DefaultPageSize = 10;

} // namespace AppConfig
