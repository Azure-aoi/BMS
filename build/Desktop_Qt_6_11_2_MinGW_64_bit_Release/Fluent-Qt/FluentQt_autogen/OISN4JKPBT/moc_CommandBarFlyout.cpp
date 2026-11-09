/****************************************************************************
** Meta object code from reading C++ file 'CommandBarFlyout.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/menus_toolbars/CommandBarFlyout.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommandBarFlyout.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent14menus_toolbars16CommandBarFlyoutE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::menus_toolbars::CommandBarFlyout::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent14menus_toolbars16CommandBarFlyoutE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::menus_toolbars::CommandBarFlyout",
        "showModeChanged",
        "",
        "ShowMode",
        "mode",
        "expandedChanged",
        "expanded",
        "alwaysExpandedChanged",
        "setExpanded",
        "showMode",
        "alwaysExpanded",
        "Standard",
        "Transient"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'showModeChanged'
        QtMocHelpers::SignalData<void(enum ShowMode)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'expandedChanged'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'alwaysExpandedChanged'
        QtMocHelpers::SignalData<void(bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'setExpanded'
        QtMocHelpers::SlotData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'showMode'
        QtMocHelpers::PropertyData<enum ShowMode>(9, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'expanded'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'alwaysExpanded'
        QtMocHelpers::PropertyData<bool>(10, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ShowMode'
        QtMocHelpers::EnumData<enum ShowMode>(3, 3, QMC::EnumIsScoped).add({
            {   11, ShowMode::Standard },
            {   12, ShowMode::Transient },
        }),
    };
    return QtMocHelpers::metaObjectData<CommandBarFlyout, qt_meta_tag_ZN6fluent14menus_toolbars16CommandBarFlyoutE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::menus_toolbars::CommandBarFlyout::staticMetaObject = { {
    QMetaObject::SuperData::link<dialogs_flyouts::Flyout::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent14menus_toolbars16CommandBarFlyoutE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent14menus_toolbars16CommandBarFlyoutE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent14menus_toolbars16CommandBarFlyoutE_t>.metaTypes,
    nullptr
} };

void fluent::menus_toolbars::CommandBarFlyout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CommandBarFlyout *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showModeChanged((*reinterpret_cast<std::add_pointer_t<enum ShowMode>>(_a[1]))); break;
        case 1: _t->expandedChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->alwaysExpandedChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->setExpanded((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CommandBarFlyout::*)(ShowMode )>(_a, &CommandBarFlyout::showModeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CommandBarFlyout::*)(bool )>(_a, &CommandBarFlyout::expandedChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CommandBarFlyout::*)(bool )>(_a, &CommandBarFlyout::alwaysExpandedChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum ShowMode*>(_v) = _t->showMode(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isExpanded(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isAlwaysExpanded(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShowMode(*reinterpret_cast<enum ShowMode*>(_v)); break;
        case 1: _t->setExpanded(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setAlwaysExpanded(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::menus_toolbars::CommandBarFlyout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::menus_toolbars::CommandBarFlyout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent14menus_toolbars16CommandBarFlyoutE_t>.strings))
        return static_cast<void*>(this);
    return dialogs_flyouts::Flyout::qt_metacast(_clname);
}

int fluent::menus_toolbars::CommandBarFlyout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = dialogs_flyouts::Flyout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
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
void fluent::menus_toolbars::CommandBarFlyout::showModeChanged(ShowMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::menus_toolbars::CommandBarFlyout::expandedChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::menus_toolbars::CommandBarFlyout::alwaysExpandedChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
