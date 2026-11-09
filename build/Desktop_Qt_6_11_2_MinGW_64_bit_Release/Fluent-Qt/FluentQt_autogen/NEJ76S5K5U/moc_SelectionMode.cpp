/****************************************************************************
** Meta object code from reading C++ file 'SelectionMode.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/collections/SelectionMode.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SelectionMode.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent11collectionsE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::collections::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11collectionsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::collections",
        "SelectionMode",
        "None",
        "Single",
        "Multiple",
        "Extended"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'SelectionMode'
        QtMocHelpers::EnumData<SelectionMode>(1, 1, QMC::EnumIsScoped).add({
            {    2, SelectionMode::None },
            {    3, SelectionMode::Single },
            {    4, SelectionMode::Multiple },
            {    5, SelectionMode::Extended },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN6fluent11collectionsE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN6fluent11collectionsE =
    fluent::collections::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11collectionsE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN6fluent11collectionsE =
    qt_staticMetaObjectContent_ZN6fluent11collectionsE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN6fluent11collectionsE =
    qt_staticMetaObjectContent_ZN6fluent11collectionsE.relocatingData;

Q_CONSTINIT const QMetaObject fluent::collections::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN6fluent11collectionsE.stringdata,
    qt_staticMetaObjectStaticContent_ZN6fluent11collectionsE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN6fluent11collectionsE.metaTypes,
    nullptr
} };

QT_WARNING_POP
