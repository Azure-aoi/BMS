/****************************************************************************
** Meta object code from reading C++ file 'Accordion.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/layout/Accordion.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Accordion.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent6layout9AccordionE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::layout::Accordion::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent6layout9AccordionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::layout::Accordion",
        "expansionModeChanged",
        "",
        "ExpansionMode",
        "mode",
        "countChanged",
        "count",
        "itemAdded",
        "index",
        "Expander*",
        "item",
        "itemRemoved",
        "itemExpansionChanged",
        "expanded",
        "expansionMode",
        "Single",
        "Multiple"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'expansionModeChanged'
        QtMocHelpers::SignalData<void(enum ExpansionMode)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'countChanged'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Signal 'itemAdded'
        QtMocHelpers::SignalData<void(int, Expander *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 }, { 0x80000000 | 9, 10 },
        }}),
        // Signal 'itemRemoved'
        QtMocHelpers::SignalData<void(int, Expander *)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 }, { 0x80000000 | 9, 10 },
        }}),
        // Signal 'itemExpansionChanged'
        QtMocHelpers::SignalData<void(int, bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 }, { QMetaType::Bool, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'expansionMode'
        QtMocHelpers::PropertyData<enum ExpansionMode>(14, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'count'
        QtMocHelpers::PropertyData<int>(6, QMetaType::Int, QMC::DefaultPropertyFlags, 1),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ExpansionMode'
        QtMocHelpers::EnumData<enum ExpansionMode>(3, 3, QMC::EnumIsScoped).add({
            {   15, ExpansionMode::Single },
            {   16, ExpansionMode::Multiple },
        }),
    };
    return QtMocHelpers::metaObjectData<Accordion, qt_meta_tag_ZN6fluent6layout9AccordionE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::layout::Accordion::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout9AccordionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout9AccordionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent6layout9AccordionE_t>.metaTypes,
    nullptr
} };

void fluent::layout::Accordion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Accordion *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->expansionModeChanged((*reinterpret_cast<std::add_pointer_t<enum ExpansionMode>>(_a[1]))); break;
        case 1: _t->countChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->itemAdded((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Expander*>>(_a[2]))); break;
        case 3: _t->itemRemoved((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Expander*>>(_a[2]))); break;
        case 4: _t->itemExpansionChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Accordion::*)(ExpansionMode )>(_a, &Accordion::expansionModeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Accordion::*)(int )>(_a, &Accordion::countChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Accordion::*)(int , Expander * )>(_a, &Accordion::itemAdded, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Accordion::*)(int , Expander * )>(_a, &Accordion::itemRemoved, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Accordion::*)(int , bool )>(_a, &Accordion::itemExpansionChanged, 4))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum ExpansionMode*>(_v) = _t->expansionMode(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->count(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setExpansionMode(*reinterpret_cast<enum ExpansionMode*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::layout::Accordion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::layout::Accordion::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout9AccordionE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::layout::Accordion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void fluent::layout::Accordion::expansionModeChanged(ExpansionMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::layout::Accordion::countChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::layout::Accordion::itemAdded(int _t1, Expander * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void fluent::layout::Accordion::itemRemoved(int _t1, Expander * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void fluent::layout::Accordion::itemExpansionChanged(int _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}
QT_WARNING_POP
