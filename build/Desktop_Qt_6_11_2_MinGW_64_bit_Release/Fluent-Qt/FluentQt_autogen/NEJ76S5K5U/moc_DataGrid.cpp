/****************************************************************************
** Meta object code from reading C++ file 'DataGrid.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/collections/DataGrid.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DataGrid.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent11collections8DataGridE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::collections::DataGrid::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11collections8DataGridE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::collections::DataGrid",
        "selectionModeChanged",
        "",
        "placeholderTextChanged",
        "borderVisibleChanged",
        "backgroundVisibleChanged",
        "scrollChainingEnabledChanged",
        "animationEnabledChanged",
        "columnLayoutChanged",
        "modelChanged",
        "QAbstractItemModel*",
        "model",
        "selectionMode",
        "SelectionMode",
        "placeholderText",
        "borderVisible",
        "backgroundVisible",
        "scrollChainingEnabled",
        "animationEnabled"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'selectionModeChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'placeholderTextChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'borderVisibleChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'backgroundVisibleChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scrollChainingEnabledChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'animationEnabledChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'columnLayoutChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'modelChanged'
        QtMocHelpers::SignalData<void(QAbstractItemModel *)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'selectionMode'
        QtMocHelpers::PropertyData<SelectionMode>(12, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'placeholderText'
        QtMocHelpers::PropertyData<QString>(14, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'borderVisible'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'backgroundVisible'
        QtMocHelpers::PropertyData<bool>(16, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'scrollChainingEnabled'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'animationEnabled'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DataGrid, qt_meta_tag_ZN6fluent11collections8DataGridE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::collections::DataGrid::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections8DataGridE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections8DataGridE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent11collections8DataGridE_t>.metaTypes,
    nullptr
} };

void fluent::collections::DataGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DataGrid *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectionModeChanged(); break;
        case 1: _t->placeholderTextChanged(); break;
        case 2: _t->borderVisibleChanged(); break;
        case 3: _t->backgroundVisibleChanged(); break;
        case 4: _t->scrollChainingEnabledChanged(); break;
        case 5: _t->animationEnabledChanged(); break;
        case 6: _t->columnLayoutChanged(); break;
        case 7: _t->modelChanged((*reinterpret_cast<std::add_pointer_t<QAbstractItemModel*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractItemModel* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DataGrid::*)()>(_a, &DataGrid::selectionModeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataGrid::*)()>(_a, &DataGrid::placeholderTextChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataGrid::*)()>(_a, &DataGrid::borderVisibleChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataGrid::*)()>(_a, &DataGrid::backgroundVisibleChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataGrid::*)()>(_a, &DataGrid::scrollChainingEnabledChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataGrid::*)()>(_a, &DataGrid::animationEnabledChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataGrid::*)()>(_a, &DataGrid::columnLayoutChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataGrid::*)(QAbstractItemModel * )>(_a, &DataGrid::modelChanged, 7))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<SelectionMode*>(_v) = _t->selectionMode(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->placeholderText(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isBorderVisible(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isBackgroundVisible(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isScrollChainingEnabled(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->isAnimationEnabled(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelectionMode(*reinterpret_cast<SelectionMode*>(_v)); break;
        case 1: _t->setPlaceholderText(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setBorderVisible(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setBackgroundVisible(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setScrollChainingEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setAnimationEnabled(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::collections::DataGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::collections::DataGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections8DataGridE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QTableView::qt_metacast(_clname);
}

int fluent::collections::DataGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
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
void fluent::collections::DataGrid::selectionModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fluent::collections::DataGrid::placeholderTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::collections::DataGrid::borderVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void fluent::collections::DataGrid::backgroundVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void fluent::collections::DataGrid::scrollChainingEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void fluent::collections::DataGrid::animationEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void fluent::collections::DataGrid::columnLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void fluent::collections::DataGrid::modelChanged(QAbstractItemModel * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}
QT_WARNING_POP
