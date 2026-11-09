/****************************************************************************
** Meta object code from reading C++ file 'WindowBackdropTypes.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/compatibility/WindowBackdropTypes.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WindowBackdropTypes.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent9windowingE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::windowing::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent9windowingE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::windowing",
        "BackdropEffect",
        "Solid",
        "Mica",
        "Acrylic",
        "BackdropBackend",
        "PaintedMaterial",
        "DwmSystemBackdrop",
        "MacVibrancy",
        "LinuxCompositor",
        "BackdropFidelity",
        "Emulated",
        "Composited",
        "Native",
        "BackdropSurfaceMode",
        "SolidOpaque",
        "PaintedOpaque",
        "CompositedTransparent"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'BackdropEffect'
        QtMocHelpers::EnumData<BackdropEffect>(1, 1, QMC::EnumIsScoped).add({
            {    2, BackdropEffect::Solid },
            {    3, BackdropEffect::Mica },
            {    4, BackdropEffect::Acrylic },
        }),
        // enum 'BackdropBackend'
        QtMocHelpers::EnumData<BackdropBackend>(5, 5, QMC::EnumIsScoped).add({
            {    2, BackdropBackend::Solid },
            {    6, BackdropBackend::PaintedMaterial },
            {    7, BackdropBackend::DwmSystemBackdrop },
            {    8, BackdropBackend::MacVibrancy },
            {    9, BackdropBackend::LinuxCompositor },
        }),
        // enum 'BackdropFidelity'
        QtMocHelpers::EnumData<BackdropFidelity>(10, 10, QMC::EnumIsScoped).add({
            {    2, BackdropFidelity::Solid },
            {   11, BackdropFidelity::Emulated },
            {   12, BackdropFidelity::Composited },
            {   13, BackdropFidelity::Native },
        }),
        // enum 'BackdropSurfaceMode'
        QtMocHelpers::EnumData<BackdropSurfaceMode>(14, 14, QMC::EnumIsScoped).add({
            {   15, BackdropSurfaceMode::SolidOpaque },
            {   16, BackdropSurfaceMode::PaintedOpaque },
            {   17, BackdropSurfaceMode::CompositedTransparent },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN6fluent9windowingE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN6fluent9windowingE =
    fluent::windowing::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent9windowingE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN6fluent9windowingE =
    qt_staticMetaObjectContent_ZN6fluent9windowingE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN6fluent9windowingE =
    qt_staticMetaObjectContent_ZN6fluent9windowingE.relocatingData;

Q_CONSTINIT const QMetaObject fluent::windowing::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN6fluent9windowingE.stringdata,
    qt_staticMetaObjectStaticContent_ZN6fluent9windowingE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN6fluent9windowingE.metaTypes,
    nullptr
} };

QT_WARNING_POP
