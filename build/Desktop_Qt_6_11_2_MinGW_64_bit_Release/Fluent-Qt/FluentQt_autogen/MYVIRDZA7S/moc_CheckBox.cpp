/****************************************************************************
** Meta object code from reading C++ file 'CheckBox.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/basicinput/CheckBox.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CheckBox.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10basicinput8CheckBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::basicinput::CheckBox::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10basicinput8CheckBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::basicinput::CheckBox",
        "boxSizeChanged",
        "",
        "boxMarginChanged",
        "textGapChanged",
        "hoverBackgroundEnabledChanged",
        "checkProgress",
        "boxSize",
        "boxMargin",
        "textGap",
        "hoverBackgroundEnabled"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'boxSizeChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'boxMarginChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'textGapChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hoverBackgroundEnabledChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'checkProgress'
        QtMocHelpers::PropertyData<qreal>(6, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'boxSize'
        QtMocHelpers::PropertyData<int>(7, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'boxMargin'
        QtMocHelpers::PropertyData<int>(8, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'textGap'
        QtMocHelpers::PropertyData<int>(9, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'hoverBackgroundEnabled'
        QtMocHelpers::PropertyData<bool>(10, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CheckBox, qt_meta_tag_ZN6fluent10basicinput8CheckBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::basicinput::CheckBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QCheckBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput8CheckBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput8CheckBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10basicinput8CheckBoxE_t>.metaTypes,
    nullptr
} };

void fluent::basicinput::CheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CheckBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->boxSizeChanged(); break;
        case 1: _t->boxMarginChanged(); break;
        case 2: _t->textGapChanged(); break;
        case 3: _t->hoverBackgroundEnabledChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CheckBox::*)()>(_a, &CheckBox::boxSizeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CheckBox::*)()>(_a, &CheckBox::boxMarginChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CheckBox::*)()>(_a, &CheckBox::textGapChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (CheckBox::*)()>(_a, &CheckBox::hoverBackgroundEnabledChanged, 3))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<qreal*>(_v) = _t->checkProgress(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->boxSize(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->boxMargin(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->textGap(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hoverBackgroundEnabled(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCheckProgress(*reinterpret_cast<qreal*>(_v)); break;
        case 1: _t->setBoxSize(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setBoxMargin(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setTextGap(*reinterpret_cast<int*>(_v)); break;
        case 4: _t->setHoverBackgroundEnabled(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::basicinput::CheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::basicinput::CheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput8CheckBoxE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QCheckBox::qt_metacast(_clname);
}

int fluent::basicinput::CheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void fluent::basicinput::CheckBox::boxSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fluent::basicinput::CheckBox::boxMarginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::basicinput::CheckBox::textGapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void fluent::basicinput::CheckBox::hoverBackgroundEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
