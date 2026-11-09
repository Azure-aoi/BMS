/****************************************************************************
** Meta object code from reading C++ file 'MultiSelectComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/basicinput/MultiSelectComboBox.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MultiSelectComboBox.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10basicinput19MultiSelectComboBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::basicinput::MultiSelectComboBox::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10basicinput19MultiSelectComboBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::basicinput::MultiSelectComboBox",
        "modelChanged",
        "",
        "QAbstractItemModel*",
        "model",
        "selectionModelChanged",
        "QItemSelectionModel*",
        "selectionModel",
        "modelColumnChanged",
        "column",
        "rootModelIndexChanged",
        "QModelIndex",
        "index",
        "selectionChanged",
        "QItemSelection",
        "selected",
        "deselected",
        "selectedCountChanged",
        "count",
        "placeholderTextChanged",
        "text",
        "searchEnabledChanged",
        "enabled",
        "searchPlaceholderTextChanged",
        "selectAllVisibleChanged",
        "visible",
        "maximumVisibleItemsChanged",
        "isOpenChanged",
        "open",
        "setSelectedRows",
        "QList<int>",
        "rows",
        "clearSelection",
        "selectAll",
        "close",
        "setIsOpen",
        "modelColumn",
        "rootModelIndex",
        "placeholderText",
        "searchEnabled",
        "searchPlaceholderText",
        "selectAllVisible",
        "maximumVisibleItems",
        "isOpen",
        "selectedCount"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'modelChanged'
        QtMocHelpers::SignalData<void(QAbstractItemModel *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'selectionModelChanged'
        QtMocHelpers::SignalData<void(QItemSelectionModel *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'modelColumnChanged'
        QtMocHelpers::SignalData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Signal 'rootModelIndexChanged'
        QtMocHelpers::SignalData<void(const QModelIndex &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'selectionChanged'
        QtMocHelpers::SignalData<void(const QItemSelection &, const QItemSelection &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 }, { 0x80000000 | 14, 16 },
        }}),
        // Signal 'selectedCountChanged'
        QtMocHelpers::SignalData<void(int)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 18 },
        }}),
        // Signal 'placeholderTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 20 },
        }}),
        // Signal 'searchEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Signal 'searchPlaceholderTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 20 },
        }}),
        // Signal 'selectAllVisibleChanged'
        QtMocHelpers::SignalData<void(bool)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 25 },
        }}),
        // Signal 'maximumVisibleItemsChanged'
        QtMocHelpers::SignalData<void(int)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 18 },
        }}),
        // Signal 'isOpenChanged'
        QtMocHelpers::SignalData<void(bool)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 28 },
        }}),
        // Slot 'setSelectedRows'
        QtMocHelpers::SlotData<void(const QList<int> &)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 30, 31 },
        }}),
        // Slot 'clearSelection'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectAll'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'open'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'close'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setIsOpen'
        QtMocHelpers::SlotData<void(bool)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 28 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'model'
        QtMocHelpers::PropertyData<QAbstractItemModel*>(4, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'selectionModel'
        QtMocHelpers::PropertyData<QItemSelectionModel*>(7, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'modelColumn'
        QtMocHelpers::PropertyData<int>(36, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'rootModelIndex'
        QtMocHelpers::PropertyData<QModelIndex>(37, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
        // property 'placeholderText'
        QtMocHelpers::PropertyData<QString>(38, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'searchEnabled'
        QtMocHelpers::PropertyData<bool>(39, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'searchPlaceholderText'
        QtMocHelpers::PropertyData<QString>(40, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'selectAllVisible'
        QtMocHelpers::PropertyData<bool>(41, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'maximumVisibleItems'
        QtMocHelpers::PropertyData<int>(42, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'isOpen'
        QtMocHelpers::PropertyData<bool>(43, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'selectedCount'
        QtMocHelpers::PropertyData<int>(44, QMetaType::Int, QMC::DefaultPropertyFlags, 5),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MultiSelectComboBox, qt_meta_tag_ZN6fluent10basicinput19MultiSelectComboBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::basicinput::MultiSelectComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput19MultiSelectComboBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput19MultiSelectComboBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10basicinput19MultiSelectComboBoxE_t>.metaTypes,
    nullptr
} };

void fluent::basicinput::MultiSelectComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MultiSelectComboBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modelChanged((*reinterpret_cast<std::add_pointer_t<QAbstractItemModel*>>(_a[1]))); break;
        case 1: _t->selectionModelChanged((*reinterpret_cast<std::add_pointer_t<QItemSelectionModel*>>(_a[1]))); break;
        case 2: _t->modelColumnChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->rootModelIndexChanged((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->selectionChanged((*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 5: _t->selectedCountChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->placeholderTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->searchEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->searchPlaceholderTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->selectAllVisibleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->maximumVisibleItemsChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->isOpenChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->setSelectedRows((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 13: _t->clearSelection(); break;
        case 14: _t->selectAll(); break;
        case 15: _t->open(); break;
        case 16: _t->close(); break;
        case 17: _t->setIsOpen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelectionModel* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MultiSelectComboBox::*)(QAbstractItemModel * )>(_a, &MultiSelectComboBox::modelChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MultiSelectComboBox::*)(QItemSelectionModel * )>(_a, &MultiSelectComboBox::selectionModelChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MultiSelectComboBox::*)(int )>(_a, &MultiSelectComboBox::modelColumnChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MultiSelectComboBox::*)(const QModelIndex & )>(_a, &MultiSelectComboBox::rootModelIndexChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MultiSelectComboBox::*)(const QItemSelection & , const QItemSelection & )>(_a, &MultiSelectComboBox::selectionChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MultiSelectComboBox::*)(int )>(_a, &MultiSelectComboBox::selectedCountChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (MultiSelectComboBox::*)(const QString & )>(_a, &MultiSelectComboBox::placeholderTextChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (MultiSelectComboBox::*)(bool )>(_a, &MultiSelectComboBox::searchEnabledChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (MultiSelectComboBox::*)(const QString & )>(_a, &MultiSelectComboBox::searchPlaceholderTextChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (MultiSelectComboBox::*)(bool )>(_a, &MultiSelectComboBox::selectAllVisibleChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (MultiSelectComboBox::*)(int )>(_a, &MultiSelectComboBox::maximumVisibleItemsChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (MultiSelectComboBox::*)(bool )>(_a, &MultiSelectComboBox::isOpenChanged, 11))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelectionModel* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QAbstractItemModel**>(_v) = _t->model(); break;
        case 1: *reinterpret_cast<QItemSelectionModel**>(_v) = _t->selectionModel(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->modelColumn(); break;
        case 3: *reinterpret_cast<QModelIndex*>(_v) = _t->rootModelIndex(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->placeholderText(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->isSearchEnabled(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->searchPlaceholderText(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isSelectAllVisible(); break;
        case 8: *reinterpret_cast<int*>(_v) = _t->maximumVisibleItems(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->isOpen(); break;
        case 10: *reinterpret_cast<int*>(_v) = _t->selectedCount(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setModel(*reinterpret_cast<QAbstractItemModel**>(_v)); break;
        case 1: _t->setSelectionModel(*reinterpret_cast<QItemSelectionModel**>(_v)); break;
        case 2: _t->setModelColumn(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setRootModelIndex(*reinterpret_cast<QModelIndex*>(_v)); break;
        case 4: _t->setPlaceholderText(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setSearchEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setSearchPlaceholderText(*reinterpret_cast<QString*>(_v)); break;
        case 7: _t->setSelectAllVisible(*reinterpret_cast<bool*>(_v)); break;
        case 8: _t->setMaximumVisibleItems(*reinterpret_cast<int*>(_v)); break;
        case 9: _t->setIsOpen(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::basicinput::MultiSelectComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::basicinput::MultiSelectComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput19MultiSelectComboBoxE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::basicinput::MultiSelectComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
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
void fluent::basicinput::MultiSelectComboBox::modelChanged(QAbstractItemModel * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::basicinput::MultiSelectComboBox::selectionModelChanged(QItemSelectionModel * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::basicinput::MultiSelectComboBox::modelColumnChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::basicinput::MultiSelectComboBox::rootModelIndexChanged(const QModelIndex & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::basicinput::MultiSelectComboBox::selectionChanged(const QItemSelection & _t1, const QItemSelection & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void fluent::basicinput::MultiSelectComboBox::selectedCountChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::basicinput::MultiSelectComboBox::placeholderTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::basicinput::MultiSelectComboBox::searchEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::basicinput::MultiSelectComboBox::searchPlaceholderTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::basicinput::MultiSelectComboBox::selectAllVisibleChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void fluent::basicinput::MultiSelectComboBox::maximumVisibleItemsChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void fluent::basicinput::MultiSelectComboBox::isOpenChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}
QT_WARNING_POP
