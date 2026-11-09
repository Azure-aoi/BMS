/****************************************************************************
** Meta object code from reading C++ file 'TreeSelect.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/basicinput/TreeSelect.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TreeSelect.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10basicinput10TreeSelectE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::basicinput::TreeSelect::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10basicinput10TreeSelectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::basicinput::TreeSelect",
        "modelChanged",
        "",
        "QAbstractItemModel*",
        "model",
        "keyRoleChanged",
        "role",
        "selectionModeChanged",
        "SelectionMode",
        "mode",
        "selectionChanged",
        "searchTextChanged",
        "text",
        "placeholderTextChanged",
        "emptyTextChanged",
        "readOnlyChanged",
        "readOnly",
        "isOpenChanged",
        "open",
        "keyRole",
        "selectionMode",
        "selectedKeys",
        "selectedItems",
        "QVariantList",
        "selectedCount",
        "searchText",
        "placeholderText",
        "emptyText",
        "isOpen",
        "Single",
        "Multiple"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'modelChanged'
        QtMocHelpers::SignalData<void(QAbstractItemModel *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'keyRoleChanged'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Signal 'selectionModeChanged'
        QtMocHelpers::SignalData<void(enum SelectionMode)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Signal 'selectionChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'searchTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Signal 'placeholderTextChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'emptyTextChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'readOnlyChanged'
        QtMocHelpers::SignalData<void(bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
        // Signal 'isOpenChanged'
        QtMocHelpers::SignalData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'model'
        QtMocHelpers::PropertyData<QAbstractItemModel*>(4, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'keyRole'
        QtMocHelpers::PropertyData<int>(19, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'selectionMode'
        QtMocHelpers::PropertyData<enum SelectionMode>(20, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'selectedKeys'
        QtMocHelpers::PropertyData<QStringList>(21, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'selectedItems'
        QtMocHelpers::PropertyData<QVariantList>(22, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 3),
        // property 'selectedCount'
        QtMocHelpers::PropertyData<int>(24, QMetaType::Int, QMC::DefaultPropertyFlags, 3),
        // property 'searchText'
        QtMocHelpers::PropertyData<QString>(25, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'placeholderText'
        QtMocHelpers::PropertyData<QString>(26, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'emptyText'
        QtMocHelpers::PropertyData<QString>(27, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'readOnly'
        QtMocHelpers::PropertyData<bool>(16, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'isOpen'
        QtMocHelpers::PropertyData<bool>(28, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'SelectionMode'
        QtMocHelpers::EnumData<enum SelectionMode>(8, 8, QMC::EnumIsScoped).add({
            {   29, SelectionMode::Single },
            {   30, SelectionMode::Multiple },
        }),
    };
    return QtMocHelpers::metaObjectData<TreeSelect, qt_meta_tag_ZN6fluent10basicinput10TreeSelectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::basicinput::TreeSelect::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput10TreeSelectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput10TreeSelectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10basicinput10TreeSelectE_t>.metaTypes,
    nullptr
} };

void fluent::basicinput::TreeSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TreeSelect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modelChanged((*reinterpret_cast<std::add_pointer_t<QAbstractItemModel*>>(_a[1]))); break;
        case 1: _t->keyRoleChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->selectionModeChanged((*reinterpret_cast<std::add_pointer_t<enum SelectionMode>>(_a[1]))); break;
        case 3: _t->selectionChanged(); break;
        case 4: _t->searchTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->placeholderTextChanged(); break;
        case 6: _t->emptyTextChanged(); break;
        case 7: _t->readOnlyChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->isOpenChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractItemModel* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TreeSelect::*)(QAbstractItemModel * )>(_a, &TreeSelect::modelChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeSelect::*)(int )>(_a, &TreeSelect::keyRoleChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeSelect::*)(SelectionMode )>(_a, &TreeSelect::selectionModeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeSelect::*)()>(_a, &TreeSelect::selectionChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeSelect::*)(const QString & )>(_a, &TreeSelect::searchTextChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeSelect::*)()>(_a, &TreeSelect::placeholderTextChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeSelect::*)()>(_a, &TreeSelect::emptyTextChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeSelect::*)(bool )>(_a, &TreeSelect::readOnlyChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeSelect::*)(bool )>(_a, &TreeSelect::isOpenChanged, 8))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QAbstractItemModel**>(_v) = _t->model(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->keyRole(); break;
        case 2: *reinterpret_cast<enum SelectionMode*>(_v) = _t->selectionMode(); break;
        case 3: *reinterpret_cast<QStringList*>(_v) = _t->selectedKeys(); break;
        case 4: *reinterpret_cast<QVariantList*>(_v) = _t->selectedItems(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->selectedCount(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->searchText(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->placeholderText(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->emptyText(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->isReadOnly(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->isOpen(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setModel(*reinterpret_cast<QAbstractItemModel**>(_v)); break;
        case 1: _t->setKeyRole(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setSelectionMode(*reinterpret_cast<enum SelectionMode*>(_v)); break;
        case 3: _t->setSelectedKeys(*reinterpret_cast<QStringList*>(_v)); break;
        case 6: _t->setSearchText(*reinterpret_cast<QString*>(_v)); break;
        case 7: _t->setPlaceholderText(*reinterpret_cast<QString*>(_v)); break;
        case 8: _t->setEmptyText(*reinterpret_cast<QString*>(_v)); break;
        case 9: _t->setReadOnly(*reinterpret_cast<bool*>(_v)); break;
        case 10: _t->setIsOpen(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::basicinput::TreeSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::basicinput::TreeSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput10TreeSelectE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::basicinput::TreeSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void fluent::basicinput::TreeSelect::modelChanged(QAbstractItemModel * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::basicinput::TreeSelect::keyRoleChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::basicinput::TreeSelect::selectionModeChanged(SelectionMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::basicinput::TreeSelect::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void fluent::basicinput::TreeSelect::searchTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::basicinput::TreeSelect::placeholderTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void fluent::basicinput::TreeSelect::emptyTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void fluent::basicinput::TreeSelect::readOnlyChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::basicinput::TreeSelect::isOpenChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}
QT_WARNING_POP
