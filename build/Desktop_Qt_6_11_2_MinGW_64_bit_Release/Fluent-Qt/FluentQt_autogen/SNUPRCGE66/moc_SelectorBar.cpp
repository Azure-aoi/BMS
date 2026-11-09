/****************************************************************************
** Meta object code from reading C++ file 'SelectorBar.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/navigation/SelectorBar.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SelectorBar.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10navigation11SelectorBarE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::navigation::SelectorBar::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10navigation11SelectorBarE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::navigation::SelectorBar",
        "itemCountChanged",
        "",
        "count",
        "itemsChanged",
        "itemActivated",
        "index",
        "SelectorBarItem",
        "item",
        "selectedIndexChanged",
        "currentChanged",
        "selectionChanged",
        "overflowBehaviorChanged",
        "OverflowBehavior",
        "behavior",
        "itemFontRoleChanged",
        "Typography::FontRole",
        "role",
        "iconFontFamilyChanged",
        "family",
        "overflowActivated",
        "QList<int>",
        "hiddenIndexes",
        "itemCount",
        "selectedIndex",
        "overflowBehavior",
        "itemFontRole",
        "iconFontFamily",
        "ScrollButtons",
        "MoreButton"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'itemCountChanged'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'itemsChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'itemActivated'
        QtMocHelpers::SignalData<void(int, const SelectorBarItem &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'selectedIndexChanged'
        QtMocHelpers::SignalData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Signal 'currentChanged'
        QtMocHelpers::SignalData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Signal 'selectionChanged'
        QtMocHelpers::SignalData<void(int, const SelectorBarItem &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 }, { 0x80000000 | 7, 8 },
        }}),
        // Signal 'overflowBehaviorChanged'
        QtMocHelpers::SignalData<void(enum OverflowBehavior)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'itemFontRoleChanged'
        QtMocHelpers::SignalData<void(Typography::FontRole)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
        // Signal 'iconFontFamilyChanged'
        QtMocHelpers::SignalData<void(const QString &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 19 },
        }}),
        // Signal 'overflowActivated'
        QtMocHelpers::SignalData<void(const QVector<int> &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'itemCount'
        QtMocHelpers::PropertyData<int>(23, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'selectedIndex'
        QtMocHelpers::PropertyData<int>(24, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'overflowBehavior'
        QtMocHelpers::PropertyData<enum OverflowBehavior>(25, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 6),
        // property 'itemFontRole'
        QtMocHelpers::PropertyData<Typography::FontRole>(26, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 7),
        // property 'iconFontFamily'
        QtMocHelpers::PropertyData<QString>(27, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'OverflowBehavior'
        QtMocHelpers::EnumData<enum OverflowBehavior>(13, 13, QMC::EnumIsScoped).add({
            {   28, OverflowBehavior::ScrollButtons },
            {   29, OverflowBehavior::MoreButton },
        }),
    };
    return QtMocHelpers::metaObjectData<SelectorBar, qt_meta_tag_ZN6fluent10navigation11SelectorBarE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN6fluent10navigation11SelectorBarE[] = {
    QMetaObject::SuperData::link<Typography::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject fluent::navigation::SelectorBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10navigation11SelectorBarE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10navigation11SelectorBarE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN6fluent10navigation11SelectorBarE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10navigation11SelectorBarE_t>.metaTypes,
    nullptr
} };

void fluent::navigation::SelectorBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SelectorBar *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemCountChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->itemsChanged(); break;
        case 2: _t->itemActivated((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<SelectorBarItem>>(_a[2]))); break;
        case 3: _t->selectedIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->currentChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->selectionChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<SelectorBarItem>>(_a[2]))); break;
        case 6: _t->overflowBehaviorChanged((*reinterpret_cast<std::add_pointer_t<enum OverflowBehavior>>(_a[1]))); break;
        case 7: _t->itemFontRoleChanged((*reinterpret_cast<std::add_pointer_t<Typography::FontRole>>(_a[1]))); break;
        case 8: _t->iconFontFamilyChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->overflowActivated((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Typography::FontRole >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SelectorBar::*)(int )>(_a, &SelectorBar::itemCountChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SelectorBar::*)()>(_a, &SelectorBar::itemsChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SelectorBar::*)(int , const SelectorBarItem & )>(_a, &SelectorBar::itemActivated, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SelectorBar::*)(int )>(_a, &SelectorBar::selectedIndexChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SelectorBar::*)(int )>(_a, &SelectorBar::currentChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SelectorBar::*)(int , const SelectorBarItem & )>(_a, &SelectorBar::selectionChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (SelectorBar::*)(OverflowBehavior )>(_a, &SelectorBar::overflowBehaviorChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (SelectorBar::*)(Typography::FontRole )>(_a, &SelectorBar::itemFontRoleChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (SelectorBar::*)(const QString & )>(_a, &SelectorBar::iconFontFamilyChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (SelectorBar::*)(const QVector<int> & )>(_a, &SelectorBar::overflowActivated, 9))
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
        case 0: *reinterpret_cast<int*>(_v) = _t->itemCount(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->selectedIndex(); break;
        case 2: *reinterpret_cast<enum OverflowBehavior*>(_v) = _t->overflowBehavior(); break;
        case 3: *reinterpret_cast<Typography::FontRole*>(_v) = _t->itemFontRole(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->iconFontFamily(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setSelectedIndex(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setOverflowBehavior(*reinterpret_cast<enum OverflowBehavior*>(_v)); break;
        case 3: _t->setItemFontRole(*reinterpret_cast<Typography::FontRole*>(_v)); break;
        case 4: _t->setIconFontFamily(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::navigation::SelectorBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::navigation::SelectorBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10navigation11SelectorBarE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::navigation::SelectorBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
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
void fluent::navigation::SelectorBar::itemCountChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::navigation::SelectorBar::itemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::navigation::SelectorBar::itemActivated(int _t1, const SelectorBarItem & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void fluent::navigation::SelectorBar::selectedIndexChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::navigation::SelectorBar::currentChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::navigation::SelectorBar::selectionChanged(int _t1, const SelectorBarItem & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void fluent::navigation::SelectorBar::overflowBehaviorChanged(OverflowBehavior _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::navigation::SelectorBar::itemFontRoleChanged(Typography::FontRole _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::navigation::SelectorBar::iconFontFamilyChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::navigation::SelectorBar::overflowActivated(const QVector<int> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}
QT_WARNING_POP
