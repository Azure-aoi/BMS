/****************************************************************************
** Meta object code from reading C++ file 'Card.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/layout/Card.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Card.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent6layout4CardE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::layout::Card::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent6layout4CardE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::layout::Card",
        "appearanceChanged",
        "",
        "Appearance",
        "appearance",
        "borderVisibleChanged",
        "visible",
        "borderVisible",
        "Layer",
        "LayerAlt",
        "Canvas"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'appearanceChanged'
        QtMocHelpers::SignalData<void(enum Appearance)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'borderVisibleChanged'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'appearance'
        QtMocHelpers::PropertyData<enum Appearance>(4, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'borderVisible'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Appearance'
        QtMocHelpers::EnumData<enum Appearance>(3, 3, QMC::EnumFlags{}).add({
            {    8, Appearance::Layer },
            {    9, Appearance::LayerAlt },
            {   10, Appearance::Canvas },
        }),
    };
    return QtMocHelpers::metaObjectData<Card, qt_meta_tag_ZN6fluent6layout4CardE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::layout::Card::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout4CardE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout4CardE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent6layout4CardE_t>.metaTypes,
    nullptr
} };

void fluent::layout::Card::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Card *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->appearanceChanged((*reinterpret_cast<std::add_pointer_t<enum Appearance>>(_a[1]))); break;
        case 1: _t->borderVisibleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Card::*)(Appearance )>(_a, &Card::appearanceChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Card::*)(bool )>(_a, &Card::borderVisibleChanged, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum Appearance*>(_v) = _t->appearance(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isBorderVisible(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAppearance(*reinterpret_cast<enum Appearance*>(_v)); break;
        case 1: _t->setBorderVisible(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::layout::Card::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::layout::Card::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout4CardE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QFrame::qt_metacast(_clname);
}

int fluent::layout::Card::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void fluent::layout::Card::appearanceChanged(Appearance _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::layout::Card::borderVisibleChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
