/****************************************************************************
** Meta object code from reading C++ file 'CommandBar.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/menus_toolbars/CommandBar.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommandBar.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent14menus_toolbars10CommandBarE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::menus_toolbars::CommandBar::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent14menus_toolbars10CommandBarE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::menus_toolbars::CommandBar",
        "labelPositionChanged",
        "",
        "LabelPosition",
        "position",
        "dynamicOverflowEnabledChanged",
        "enabled",
        "overflowOpenChanged",
        "open",
        "overflowedPrimaryActionsChanged",
        "backgroundVisibleChanged",
        "visible",
        "setOverflowOpen",
        "labelPosition",
        "dynamicOverflowEnabled",
        "overflowOpen",
        "backgroundVisible",
        "Collapsed",
        "Right"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'labelPositionChanged'
        QtMocHelpers::SignalData<void(enum LabelPosition)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'dynamicOverflowEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'overflowOpenChanged'
        QtMocHelpers::SignalData<void(bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Signal 'overflowedPrimaryActionsChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'backgroundVisibleChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Slot 'setOverflowOpen'
        QtMocHelpers::SlotData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'labelPosition'
        QtMocHelpers::PropertyData<enum LabelPosition>(13, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'dynamicOverflowEnabled'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'overflowOpen'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'backgroundVisible'
        QtMocHelpers::PropertyData<bool>(16, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'LabelPosition'
        QtMocHelpers::EnumData<enum LabelPosition>(3, 3, QMC::EnumIsScoped).add({
            {   17, LabelPosition::Collapsed },
            {   18, LabelPosition::Right },
        }),
    };
    return QtMocHelpers::metaObjectData<CommandBar, qt_meta_tag_ZN6fluent14menus_toolbars10CommandBarE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::menus_toolbars::CommandBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent14menus_toolbars10CommandBarE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent14menus_toolbars10CommandBarE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent14menus_toolbars10CommandBarE_t>.metaTypes,
    nullptr
} };

void fluent::menus_toolbars::CommandBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CommandBar *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->labelPositionChanged((*reinterpret_cast<std::add_pointer_t<enum LabelPosition>>(_a[1]))); break;
        case 1: _t->dynamicOverflowEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->overflowOpenChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->overflowedPrimaryActionsChanged(); break;
        case 4: _t->backgroundVisibleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setOverflowOpen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CommandBar::*)(LabelPosition )>(_a, &CommandBar::labelPositionChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CommandBar::*)(bool )>(_a, &CommandBar::dynamicOverflowEnabledChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CommandBar::*)(bool )>(_a, &CommandBar::overflowOpenChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (CommandBar::*)()>(_a, &CommandBar::overflowedPrimaryActionsChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (CommandBar::*)(bool )>(_a, &CommandBar::backgroundVisibleChanged, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum LabelPosition*>(_v) = _t->labelPosition(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isDynamicOverflowEnabled(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isOverflowOpen(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->backgroundVisible(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLabelPosition(*reinterpret_cast<enum LabelPosition*>(_v)); break;
        case 1: _t->setDynamicOverflowEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setOverflowOpen(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setBackgroundVisible(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::menus_toolbars::CommandBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::menus_toolbars::CommandBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent14menus_toolbars10CommandBarE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::menus_toolbars::CommandBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void fluent::menus_toolbars::CommandBar::labelPositionChanged(LabelPosition _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::menus_toolbars::CommandBar::dynamicOverflowEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::menus_toolbars::CommandBar::overflowOpenChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::menus_toolbars::CommandBar::overflowedPrimaryActionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void fluent::menus_toolbars::CommandBar::backgroundVisibleChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
