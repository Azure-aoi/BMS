/****************************************************************************
** Meta object code from reading C++ file 'WidgetOwnership.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/foundation/WidgetOwnership.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WidgetOwnership.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluentE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::qt_create_metaobjectdata<qt_meta_tag_ZN6fluentE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent",
        "WidgetOwnership",
        "Borrowed",
        "Reparented",
        "Owned"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'WidgetOwnership'
        QtMocHelpers::EnumData<WidgetOwnership>(1, 1, QMC::EnumIsScoped).add({
            {    2, WidgetOwnership::Borrowed },
            {    3, WidgetOwnership::Reparented },
            {    4, WidgetOwnership::Owned },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN6fluentE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN6fluentE =
    fluent::qt_create_metaobjectdata<qt_meta_tag_ZN6fluentE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN6fluentE =
    qt_staticMetaObjectContent_ZN6fluentE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN6fluentE =
    qt_staticMetaObjectContent_ZN6fluentE.relocatingData;

Q_CONSTINIT const QMetaObject fluent::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN6fluentE.stringdata,
    qt_staticMetaObjectStaticContent_ZN6fluentE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN6fluentE.metaTypes,
    nullptr
} };

QT_WARNING_POP
