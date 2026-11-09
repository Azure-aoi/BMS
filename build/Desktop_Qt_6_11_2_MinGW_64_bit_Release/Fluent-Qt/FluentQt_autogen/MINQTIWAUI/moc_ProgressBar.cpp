/****************************************************************************
** Meta object code from reading C++ file 'ProgressBar.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/status_info/ProgressBar.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProgressBar.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent11status_info11ProgressBarE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::status_info::ProgressBar::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11status_info11ProgressBarE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::status_info::ProgressBar",
        "isIndeterminateChanged",
        "",
        "indeterminate",
        "minimumChanged",
        "minimum",
        "maximumChanged",
        "maximum",
        "valueChanged",
        "value",
        "showPausedChanged",
        "paused",
        "showErrorChanged",
        "error",
        "barWidthChanged",
        "width",
        "trackThicknessChanged",
        "thickness",
        "railVisibleChanged",
        "visible",
        "isIndeterminate",
        "showPaused",
        "showError",
        "barWidth",
        "trackThickness",
        "railVisible"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'isIndeterminateChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'minimumChanged'
        QtMocHelpers::SignalData<void(double)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 5 },
        }}),
        // Signal 'maximumChanged'
        QtMocHelpers::SignalData<void(double)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 7 },
        }}),
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(double)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 9 },
        }}),
        // Signal 'showPausedChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Signal 'showErrorChanged'
        QtMocHelpers::SignalData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Signal 'barWidthChanged'
        QtMocHelpers::SignalData<void(int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Signal 'trackThicknessChanged'
        QtMocHelpers::SignalData<void(qreal)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 17 },
        }}),
        // Signal 'railVisibleChanged'
        QtMocHelpers::SignalData<void(bool)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'isIndeterminate'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'minimum'
        QtMocHelpers::PropertyData<double>(5, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'maximum'
        QtMocHelpers::PropertyData<double>(7, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'value'
        QtMocHelpers::PropertyData<double>(9, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'showPaused'
        QtMocHelpers::PropertyData<bool>(21, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'showError'
        QtMocHelpers::PropertyData<bool>(22, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'barWidth'
        QtMocHelpers::PropertyData<int>(23, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'trackThickness'
        QtMocHelpers::PropertyData<qreal>(24, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'railVisible'
        QtMocHelpers::PropertyData<bool>(25, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ProgressBar, qt_meta_tag_ZN6fluent11status_info11ProgressBarE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::status_info::ProgressBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info11ProgressBarE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info11ProgressBarE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent11status_info11ProgressBarE_t>.metaTypes,
    nullptr
} };

void fluent::status_info::ProgressBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ProgressBar *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->isIndeterminateChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->minimumChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->maximumChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->valueChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 4: _t->showPausedChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->showErrorChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->barWidthChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->trackThicknessChanged((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 8: _t->railVisibleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ProgressBar::*)(bool )>(_a, &ProgressBar::isIndeterminateChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressBar::*)(double )>(_a, &ProgressBar::minimumChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressBar::*)(double )>(_a, &ProgressBar::maximumChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressBar::*)(double )>(_a, &ProgressBar::valueChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressBar::*)(bool )>(_a, &ProgressBar::showPausedChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressBar::*)(bool )>(_a, &ProgressBar::showErrorChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressBar::*)(int )>(_a, &ProgressBar::barWidthChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressBar::*)(qreal )>(_a, &ProgressBar::trackThicknessChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgressBar::*)(bool )>(_a, &ProgressBar::railVisibleChanged, 8))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isIndeterminate(); break;
        case 1: *reinterpret_cast<double*>(_v) = _t->minimum(); break;
        case 2: *reinterpret_cast<double*>(_v) = _t->maximum(); break;
        case 3: *reinterpret_cast<double*>(_v) = _t->value(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->showPaused(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->showError(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->barWidth(); break;
        case 7: *reinterpret_cast<qreal*>(_v) = _t->trackThickness(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->railVisible(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsIndeterminate(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setMinimum(*reinterpret_cast<double*>(_v)); break;
        case 2: _t->setMaximum(*reinterpret_cast<double*>(_v)); break;
        case 3: _t->setValue(*reinterpret_cast<double*>(_v)); break;
        case 4: _t->setShowPaused(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setShowError(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setBarWidth(*reinterpret_cast<int*>(_v)); break;
        case 7: _t->setTrackThickness(*reinterpret_cast<qreal*>(_v)); break;
        case 8: _t->setRailVisible(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::status_info::ProgressBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::status_info::ProgressBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info11ProgressBarE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::status_info::ProgressBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void fluent::status_info::ProgressBar::isIndeterminateChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::status_info::ProgressBar::minimumChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::status_info::ProgressBar::maximumChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::status_info::ProgressBar::valueChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::status_info::ProgressBar::showPausedChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::status_info::ProgressBar::showErrorChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::status_info::ProgressBar::barWidthChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::status_info::ProgressBar::trackThicknessChanged(qreal _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::status_info::ProgressBar::railVisibleChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}
QT_WARNING_POP
