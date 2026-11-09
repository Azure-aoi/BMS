/****************************************************************************
** Meta object code from reading C++ file 'ProgressRing.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/status_info/ProgressRing.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProgressRing.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent11status_info12ProgressRingE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::status_info::ProgressRing::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11status_info12ProgressRingE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::status_info::ProgressRing",
        "isActiveChanged",
        "",
        "active",
        "animationEnabledChanged",
        "enabled",
        "isIndeterminateChanged",
        "indeterminate",
        "minimumChanged",
        "minimum",
        "maximumChanged",
        "maximum",
        "valueChanged",
        "value",
        "ringSizeChanged",
        "ProgressRingSize",
        "size",
        "strokeWidthChanged",
        "width",
        "statusChanged",
        "ProgressRingStatus",
        "status",
        "backgroundVisibleChanged",
        "visible",
        "isActive",
        "animationEnabled",
        "isIndeterminate",
        "ringSize",
        "strokeWidth",
        "backgroundVisible",
        "Small",
        "Medium",
        "Large",
        "Running",
        "Paused",
        "Error"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'isActiveChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'animationEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Signal 'isIndeterminateChanged'
        QtMocHelpers::SignalData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Signal 'minimumChanged'
        QtMocHelpers::SignalData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Signal 'maximumChanged'
        QtMocHelpers::SignalData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 11 },
        }}),
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Signal 'ringSizeChanged'
        QtMocHelpers::SignalData<void(enum ProgressRingSize)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Signal 'strokeWidthChanged'
        QtMocHelpers::SignalData<void(qreal)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 18 },
        }}),
        // Signal 'statusChanged'
        QtMocHelpers::SignalData<void(enum ProgressRingStatus)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 20, 21 },
        }}),
        // Signal 'backgroundVisibleChanged'
        QtMocHelpers::SignalData<void(bool)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'isActive'
        QtMocHelpers::PropertyData<bool>(24, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'animationEnabled'
        QtMocHelpers::PropertyData<bool>(25, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'isIndeterminate'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'minimum'
        QtMocHelpers::PropertyData<int>(9, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'maximum'
        QtMocHelpers::PropertyData<int>(11, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'value'
        QtMocHelpers::PropertyData<int>(13, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'ringSize'
        QtMocHelpers::PropertyData<enum ProgressRingSize>(27, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 6),
        // property 'strokeWidth'
        QtMocHelpers::PropertyData<qreal>(28, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'status'
        QtMocHelpers::PropertyData<enum ProgressRingStatus>(21, 0x80000000 | 20, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 8),
        // property 'backgroundVisible'
        QtMocHelpers::PropertyData<bool>(29, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ProgressRingSize'
        QtMocHelpers::EnumData<enum ProgressRingSize>(15, 15, QMC::EnumIsScoped).add({
            {   30, ProgressRingSize::Small },
            {   31, ProgressRingSize::Medium },
            {   32, ProgressRingSize::Large },
        }),
        // enum 'ProgressRingStatus'
        QtMocHelpers::EnumData<enum ProgressRingStatus>(20, 20, QMC::EnumIsScoped).add({
            {   33, ProgressRingStatus::Running },
            {   34, ProgressRingStatus::Paused },
            {   35, ProgressRingStatus::Error },
        }),
    };
    return QtMocHelpers::metaObjectData<ProgressRing, qt_meta_tag_ZN6fluent11status_info12ProgressRingE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::status_info::ProgressRing::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info12ProgressRingE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info12ProgressRingE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent11status_info12ProgressRingE_t>.metaTypes,
    nullptr
} };

void fluent::status_info::ProgressRing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ProgressRing *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->isActiveChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->animationEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->isIndeterminateChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->minimumChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->maximumChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->ringSizeChanged((*reinterpret_cast<std::add_pointer_t<enum ProgressRingSize>>(_a[1]))); break;
        case 7: _t->strokeWidthChanged((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 8: _t->statusChanged((*reinterpret_cast<std::add_pointer_t<enum ProgressRingStatus>>(_a[1]))); break;
        case 9: _t->backgroundVisibleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ProgressRing::*)(bool )>(_a, &ProgressRing::isActiveChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressRing::*)(bool )>(_a, &ProgressRing::animationEnabledChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressRing::*)(bool )>(_a, &ProgressRing::isIndeterminateChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressRing::*)(int )>(_a, &ProgressRing::minimumChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressRing::*)(int )>(_a, &ProgressRing::maximumChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressRing::*)(int )>(_a, &ProgressRing::valueChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressRing::*)(ProgressRingSize )>(_a, &ProgressRing::ringSizeChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressRing::*)(qreal )>(_a, &ProgressRing::strokeWidthChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressRing::*)(ProgressRingStatus )>(_a, &ProgressRing::statusChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressRing::*)(bool )>(_a, &ProgressRing::backgroundVisibleChanged, 9))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isActive(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isAnimationEnabled(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isIndeterminate(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->minimum(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->maximum(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->value(); break;
        case 6: *reinterpret_cast<enum ProgressRingSize*>(_v) = _t->ringSize(); break;
        case 7: *reinterpret_cast<qreal*>(_v) = _t->strokeWidth(); break;
        case 8: *reinterpret_cast<enum ProgressRingStatus*>(_v) = _t->status(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->backgroundVisible(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsActive(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setAnimationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setIsIndeterminate(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setMinimum(*reinterpret_cast<int*>(_v)); break;
        case 4: _t->setMaximum(*reinterpret_cast<int*>(_v)); break;
        case 5: _t->setValue(*reinterpret_cast<int*>(_v)); break;
        case 6: _t->setRingSize(*reinterpret_cast<enum ProgressRingSize*>(_v)); break;
        case 7: _t->setStrokeWidth(*reinterpret_cast<qreal*>(_v)); break;
        case 8: _t->setStatus(*reinterpret_cast<enum ProgressRingStatus*>(_v)); break;
        case 9: _t->setBackgroundVisible(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::status_info::ProgressRing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::status_info::ProgressRing::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info12ProgressRingE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::status_info::ProgressRing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void fluent::status_info::ProgressRing::isActiveChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::status_info::ProgressRing::animationEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::status_info::ProgressRing::isIndeterminateChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::status_info::ProgressRing::minimumChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::status_info::ProgressRing::maximumChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::status_info::ProgressRing::valueChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::status_info::ProgressRing::ringSizeChanged(ProgressRingSize _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::status_info::ProgressRing::strokeWidthChanged(qreal _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::status_info::ProgressRing::statusChanged(ProgressRingStatus _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::status_info::ProgressRing::backgroundVisibleChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}
QT_WARNING_POP
