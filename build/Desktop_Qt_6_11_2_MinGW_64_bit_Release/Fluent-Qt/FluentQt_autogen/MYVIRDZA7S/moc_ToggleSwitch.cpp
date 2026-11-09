/****************************************************************************
** Meta object code from reading C++ file 'ToggleSwitch.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/basicinput/ToggleSwitch.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToggleSwitch.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10basicinput12ToggleSwitchE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::basicinput::ToggleSwitch::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10basicinput12ToggleSwitchE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::basicinput::ToggleSwitch",
        "toggled",
        "",
        "isOn",
        "onContentChanged",
        "content",
        "offContentChanged",
        "fontRoleChanged",
        "visualScaleChanged",
        "scale",
        "onContent",
        "offContent",
        "fontRole",
        "Typography::FontRole",
        "visualScale",
        "knobPosition"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'toggled'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'onContentChanged'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'offContentChanged'
        QtMocHelpers::SignalData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'fontRoleChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'visualScaleChanged'
        QtMocHelpers::SignalData<void(qreal)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'isOn'
        QtMocHelpers::PropertyData<bool>(3, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'onContent'
        QtMocHelpers::PropertyData<QString>(10, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'offContent'
        QtMocHelpers::PropertyData<QString>(11, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'fontRole'
        QtMocHelpers::PropertyData<Typography::FontRole>(12, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
        // property 'visualScale'
        QtMocHelpers::PropertyData<qreal>(14, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'knobPosition'
        QtMocHelpers::PropertyData<qreal>(15, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ToggleSwitch, qt_meta_tag_ZN6fluent10basicinput12ToggleSwitchE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN6fluent10basicinput12ToggleSwitchE[] = {
    QMetaObject::SuperData::link<Typography::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject fluent::basicinput::ToggleSwitch::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput12ToggleSwitchE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput12ToggleSwitchE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN6fluent10basicinput12ToggleSwitchE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10basicinput12ToggleSwitchE_t>.metaTypes,
    nullptr
} };

void fluent::basicinput::ToggleSwitch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ToggleSwitch *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->onContentChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->offContentChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->fontRoleChanged(); break;
        case 4: _t->visualScaleChanged((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ToggleSwitch::*)(bool )>(_a, &ToggleSwitch::toggled, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ToggleSwitch::*)(const QString & )>(_a, &ToggleSwitch::onContentChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ToggleSwitch::*)(const QString & )>(_a, &ToggleSwitch::offContentChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ToggleSwitch::*)()>(_a, &ToggleSwitch::fontRoleChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ToggleSwitch::*)(qreal )>(_a, &ToggleSwitch::visualScaleChanged, 4))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Typography::FontRole >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isOn(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->onContent(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->offContent(); break;
        case 3: *reinterpret_cast<Typography::FontRole*>(_v) = _t->fontRole(); break;
        case 4: *reinterpret_cast<qreal*>(_v) = _t->visualScale(); break;
        case 5: *reinterpret_cast<qreal*>(_v) = _t->knobPosition(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsOn(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setOnContent(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setOffContent(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setFontRole(*reinterpret_cast<Typography::FontRole*>(_v)); break;
        case 4: _t->setVisualScale(*reinterpret_cast<qreal*>(_v)); break;
        case 5: _t->setKnobPosition(*reinterpret_cast<qreal*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::basicinput::ToggleSwitch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::basicinput::ToggleSwitch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput12ToggleSwitchE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::basicinput::ToggleSwitch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void fluent::basicinput::ToggleSwitch::toggled(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::basicinput::ToggleSwitch::onContentChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::basicinput::ToggleSwitch::offContentChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::basicinput::ToggleSwitch::fontRoleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void fluent::basicinput::ToggleSwitch::visualScaleChanged(qreal _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
