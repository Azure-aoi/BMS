/****************************************************************************
** Meta object code from reading C++ file 'Typography.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/design/Typography.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Typography.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10TypographyE_t {};
} // unnamed namespace

template <> constexpr inline auto Typography::qt_create_metaobjectdata<qt_meta_tag_ZN10TypographyE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Typography",
        "FontRole",
        "Caption",
        "Body",
        "BodyStrong",
        "BodyLarge",
        "BodyLargeStrong",
        "Subtitle",
        "Title",
        "TitleLarge",
        "Display"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'FontRole'
        QtMocHelpers::EnumData<FontRole>(1, 1, QMC::EnumIsScoped).add({
            {    2, FontRole::Caption },
            {    3, FontRole::Body },
            {    4, FontRole::BodyStrong },
            {    5, FontRole::BodyLarge },
            {    6, FontRole::BodyLargeStrong },
            {    7, FontRole::Subtitle },
            {    8, FontRole::Title },
            {    9, FontRole::TitleLarge },
            {   10, FontRole::Display },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN10TypographyE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN10TypographyE =
    Typography::qt_create_metaobjectdata<qt_meta_tag_ZN10TypographyE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN10TypographyE =
    qt_staticMetaObjectContent_ZN10TypographyE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN10TypographyE =
    qt_staticMetaObjectContent_ZN10TypographyE.relocatingData;

Q_CONSTINIT const QMetaObject Typography::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN10TypographyE.stringdata,
    qt_staticMetaObjectStaticContent_ZN10TypographyE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN10TypographyE.metaTypes,
    nullptr
} };

QT_WARNING_POP
