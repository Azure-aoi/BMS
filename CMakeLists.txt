cmake_minimum_required(VERSION 3.16)

project(BMS VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Sql Svg)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql Svg)

file(GLOB_RECURSE BACKEND_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/backend/src/core/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/backend/src/dao/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/backend/src/models/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/backend/src/services/*.cpp"
)
file(GLOB_RECURSE BACKEND_HEADERS CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/backend/src/core/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/backend/src/dao/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/backend/src/models/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/backend/src/services/*.h"
)

set(PROJECT_SOURCES
        design/main.cpp
        design/mainwindow.cpp
        design/mainwindow.h
        design/logindialog.cpp
        design/logindialog.h
        design/registerdialog.cpp
        design/registerdialog.h
        design/reader/readermainwindow.cpp
        design/reader/readermainwindow.h
        design/readermainwindow.ui
        design/admin/AdminMainWindow.cpp
        design/admin/AdminMainWindow.h
        design/admin/AdminBookView.cpp
        design/admin/AdminBookView.h
        design/admin/AdminReaderView.cpp
        design/admin/AdminReaderView.h
        design/admin/AdminStatsView.cpp
        design/admin/AdminStatsView.h
        design/admin/AdminLogView.cpp
        design/admin/AdminLogView.h
        design/admin/AdminSettingsView.cpp
        design/admin/AdminSettingsView.h
        design/reader/booksearchview.cpp
        design/reader/booksearchview.h
        design/reader/MyBorrowView.cpp
        design/reader/MyBorrowView.h
        design/reader/MyReserveView.cpp
        design/reader/MyReserveView.h
        design/reader/ReaderProfileView.cpp
        design/reader/ReaderProfileView.h
        design/reader/ReaderCollectionView.cpp
        design/reader/ReaderCollectionView.h
        ${BACKEND_SOURCES}
        ${BACKEND_HEADERS}
        ui/mainwindow.ui
        ui/logindialog.ui
        ui/registerdialog.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(BMS
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        resource.qrc
        font.qrc
        images.qrc
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET BMS APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(BMS SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(BMS
            ${PROJECT_SOURCES}
        )
    endif()
endif()

set_target_properties(BMS PROPERTIES
    AUTOUIC_SEARCH_PATHS "${CMAKE_CURRENT_SOURCE_DIR}/ui;${CMAKE_CURRENT_SOURCE_DIR}/design"
)

target_include_directories(BMS PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/design
    ${CMAKE_CURRENT_SOURCE_DIR}/design/admin
    ${CMAKE_CURRENT_SOURCE_DIR}/design/reader
    ${CMAKE_CURRENT_SOURCE_DIR}/backend/src
)

target_link_libraries(BMS PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Sql
    Qt${QT_VERSION_MAJOR}::Svg
)


# if(MINGW)
#     target_link_options(BMS PRIVATE -fuse-ld=lld)
# endif()

set(FLUENT_QT_BUILD_GALLERY OFF CACHE BOOL "" FORCE)
set(FLUENT_QT_BUILD_TESTS OFF CACHE BOOL "" FORCE)

add_subdirectory(Fluent-Qt)
target_link_libraries(BMS PRIVATE FluentQt::FluentQt)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.BMS)
endif()
set_target_properties(BMS PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS BMS
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(BMS)
endif()

