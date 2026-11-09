/****************************************************************************
** Meta object code from reading C++ file 'Flyout.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/dialogs_flyouts/Flyout.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Flyout.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent15dialogs_flyouts6FlyoutE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::dialogs_flyouts::Flyout::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent15dialogs_flyouts6FlyoutE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::dialogs_flyouts::Flyout",
        "placementChanged",
        "",
        "Placement",
        "p",
        "anchorOffsetChanged",
        "px",
        "clampToWindowChanged",
        "enabled",
        "placement",
        "anchorOffset",
        "clampToWindow",
        "Top",
        "Bottom",
        "Left",
        "Right",
        "Full",
        "Auto"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'placementChanged'
        QtMocHelpers::SignalData<void(enum Placement)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'anchorOffsetChanged'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Signal 'clampToWindowChanged'
        QtMocHelpers::SignalData<void(bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'placement'
        QtMocHelpers::PropertyData<enum Placement>(9, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'anchorOffset'
        QtMocHelpers::PropertyData<int>(10, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'clampToWindow'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Placement'
        QtMocHelpers::EnumData<enum Placement>(3, 3, QMC::EnumFlags{}).add({
            {   12, Placement::Top },
            {   13, Placement::Bottom },
            {   14, Placement::Left },
            {   15, Placement::Right },
            {   16, Placement::Full },
            {   17, Placement::Auto },
        }),
    };
    return QtMocHelpers::metaObjectData<Flyout, qt_meta_tag_ZN6fluent15dialogs_flyouts6FlyoutE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::dialogs_flyouts::Flyout::staticMetaObject = { {
    QMetaObject::SuperData::link<Popup::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent15dialogs_flyouts6FlyoutE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent15dialogs_flyouts6FlyoutE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent15dialogs_flyouts6FlyoutE_t>.metaTypes,
    nullptr
} };

void fluent::dialogs_flyouts::Flyout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Flyout *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->placementChanged((*reinterpret_cast<std::add_pointer_t<enum Placement>>(_a[1]))); break;
        case 1: _t->anchorOffsetChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->clampToWindowChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Flyout::*)(Placement )>(_a, &Flyout::placementChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Flyout::*)(int )>(_a, &Flyout::anchorOffsetChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Flyout::*)(bool )>(_a, &Flyout::clampToWindowChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum Placement*>(_v) = _t->placement(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->anchorOffset(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->clampToWindow(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlacement(*reinterpret_cast<enum Placement*>(_v)); break;
        case 1: _t->setAnchorOffset(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setClampToWindow(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::dialogs_flyouts::Flyout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::dialogs_flyouts::Flyout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent15dialogs_flyouts6FlyoutE_t>.strings))
        return static_cast<void*>(this);
    return Popup::qt_metacast(_clname);
}

int fluent::dialogs_flyouts::Flyout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Popup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void fluent::dialogs_flyouts::Flyout::placementChanged(Placement _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::dialogs_flyouts::Flyout::anchorOffsetChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::dialogs_flyouts::Flyout::clampToWindowChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
