/****************************************************************************
** Meta object code from reading C++ file 'Stepper.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/navigation/Stepper.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Stepper.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10navigation7StepperE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::navigation::Stepper::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10navigation7StepperE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::navigation::Stepper",
        "itemCountChanged",
        "",
        "count",
        "itemsChanged",
        "currentIndexChanged",
        "index",
        "orientationChanged",
        "Qt::Orientation",
        "orientation",
        "animationEnabledChanged",
        "enabled",
        "stepRequested",
        "itemCount",
        "currentIndex",
        "animationEnabled",
        "State",
        "Pending",
        "Completed",
        "Error"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'itemCountChanged'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'itemsChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentIndexChanged'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Signal 'orientationChanged'
        QtMocHelpers::SignalData<void(Qt::Orientation)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Signal 'animationEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Signal 'stepRequested'
        QtMocHelpers::SignalData<void(int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'itemCount'
        QtMocHelpers::PropertyData<int>(13, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'currentIndex'
        QtMocHelpers::PropertyData<int>(14, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'orientation'
        QtMocHelpers::PropertyData<Qt::Orientation>(9, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
        // property 'animationEnabled'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'State'
        QtMocHelpers::EnumData<enum State>(16, 16, QMC::EnumFlags{}).add({
            {   17, State::Pending },
            {   18, State::Completed },
            {   19, State::Error },
        }),
    };
    return QtMocHelpers::metaObjectData<Stepper, qt_meta_tag_ZN6fluent10navigation7StepperE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::navigation::Stepper::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10navigation7StepperE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10navigation7StepperE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10navigation7StepperE_t>.metaTypes,
    nullptr
} };

void fluent::navigation::Stepper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Stepper *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemCountChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->itemsChanged(); break;
        case 2: _t->currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->orientationChanged((*reinterpret_cast<std::add_pointer_t<Qt::Orientation>>(_a[1]))); break;
        case 4: _t->animationEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->stepRequested((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Stepper::*)(int )>(_a, &Stepper::itemCountChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Stepper::*)()>(_a, &Stepper::itemsChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Stepper::*)(int )>(_a, &Stepper::currentIndexChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Stepper::*)(Qt::Orientation )>(_a, &Stepper::orientationChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Stepper::*)(bool )>(_a, &Stepper::animationEnabledChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Stepper::*)(int )>(_a, &Stepper::stepRequested, 5))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->itemCount(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->currentIndex(); break;
        case 2: *reinterpret_cast<Qt::Orientation*>(_v) = _t->orientation(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isAnimationEnabled(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCurrentIndex(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setOrientation(*reinterpret_cast<Qt::Orientation*>(_v)); break;
        case 3: _t->setAnimationEnabled(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::navigation::Stepper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::navigation::Stepper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10navigation7StepperE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::navigation::Stepper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void fluent::navigation::Stepper::itemCountChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::navigation::Stepper::itemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::navigation::Stepper::currentIndexChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::navigation::Stepper::orientationChanged(Qt::Orientation _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::navigation::Stepper::animationEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::navigation::Stepper::stepRequested(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}
QT_WARNING_POP
