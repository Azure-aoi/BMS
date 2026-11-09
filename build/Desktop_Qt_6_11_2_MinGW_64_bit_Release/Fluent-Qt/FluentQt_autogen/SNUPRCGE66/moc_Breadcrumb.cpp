/****************************************************************************
** Meta object code from reading C++ file 'Breadcrumb.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/navigation/Breadcrumb.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Breadcrumb.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10navigation10BreadcrumbE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::navigation::Breadcrumb::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10navigation10BreadcrumbE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::navigation::Breadcrumb",
        "itemsChanged",
        "",
        "itemClicked",
        "index",
        "itemActivated",
        "BreadcrumbItem",
        "item",
        "overflowActivated",
        "QList<int>",
        "hiddenIndexes",
        "breadcrumbSizeChanged",
        "BreadcrumbSize",
        "size",
        "overflowModeChanged",
        "OverflowMode",
        "mode",
        "autoTruncateOnItemClickChanged",
        "enabled",
        "standardFontRoleChanged",
        "Typography::FontRole",
        "role",
        "largeFontRoleChanged",
        "itemCount",
        "breadcrumbSize",
        "overflowMode",
        "autoTruncateOnItemClick",
        "standardFontRole",
        "largeFontRole",
        "Standard",
        "Large",
        "None",
        "Beginning",
        "Middle"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'itemsChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'itemClicked'
        QtMocHelpers::SignalData<void(int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Signal 'itemActivated'
        QtMocHelpers::SignalData<void(int, const BreadcrumbItem &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 }, { 0x80000000 | 6, 7 },
        }}),
        // Signal 'overflowActivated'
        QtMocHelpers::SignalData<void(const QVector<int> &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'breadcrumbSizeChanged'
        QtMocHelpers::SignalData<void(enum BreadcrumbSize)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Signal 'overflowModeChanged'
        QtMocHelpers::SignalData<void(enum OverflowMode)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Signal 'autoTruncateOnItemClickChanged'
        QtMocHelpers::SignalData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Signal 'standardFontRoleChanged'
        QtMocHelpers::SignalData<void(Typography::FontRole)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 20, 21 },
        }}),
        // Signal 'largeFontRoleChanged'
        QtMocHelpers::SignalData<void(Typography::FontRole)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 20, 21 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'itemCount'
        QtMocHelpers::PropertyData<int>(23, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'breadcrumbSize'
        QtMocHelpers::PropertyData<enum BreadcrumbSize>(24, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
        // property 'overflowMode'
        QtMocHelpers::PropertyData<enum OverflowMode>(25, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 5),
        // property 'autoTruncateOnItemClick'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'standardFontRole'
        QtMocHelpers::PropertyData<Typography::FontRole>(27, 0x80000000 | 20, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 7),
        // property 'largeFontRole'
        QtMocHelpers::PropertyData<Typography::FontRole>(28, 0x80000000 | 20, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 8),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'BreadcrumbSize'
        QtMocHelpers::EnumData<enum BreadcrumbSize>(12, 12, QMC::EnumIsScoped).add({
            {   29, BreadcrumbSize::Standard },
            {   30, BreadcrumbSize::Large },
        }),
        // enum 'OverflowMode'
        QtMocHelpers::EnumData<enum OverflowMode>(15, 15, QMC::EnumIsScoped).add({
            {   31, OverflowMode::None },
            {   32, OverflowMode::Beginning },
            {   33, OverflowMode::Middle },
        }),
    };
    return QtMocHelpers::metaObjectData<Breadcrumb, qt_meta_tag_ZN6fluent10navigation10BreadcrumbE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN6fluent10navigation10BreadcrumbE[] = {
    QMetaObject::SuperData::link<Typography::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject fluent::navigation::Breadcrumb::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10navigation10BreadcrumbE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10navigation10BreadcrumbE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN6fluent10navigation10BreadcrumbE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10navigation10BreadcrumbE_t>.metaTypes,
    nullptr
} };

void fluent::navigation::Breadcrumb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Breadcrumb *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemsChanged(); break;
        case 1: _t->itemClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->itemActivated((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<BreadcrumbItem>>(_a[2]))); break;
        case 3: _t->overflowActivated((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 4: _t->breadcrumbSizeChanged((*reinterpret_cast<std::add_pointer_t<enum BreadcrumbSize>>(_a[1]))); break;
        case 5: _t->overflowModeChanged((*reinterpret_cast<std::add_pointer_t<enum OverflowMode>>(_a[1]))); break;
        case 6: _t->autoTruncateOnItemClickChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->standardFontRoleChanged((*reinterpret_cast<std::add_pointer_t<Typography::FontRole>>(_a[1]))); break;
        case 8: _t->largeFontRoleChanged((*reinterpret_cast<std::add_pointer_t<Typography::FontRole>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Typography::FontRole >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Typography::FontRole >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Breadcrumb::*)()>(_a, &Breadcrumb::itemsChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Breadcrumb::*)(int )>(_a, &Breadcrumb::itemClicked, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Breadcrumb::*)(int , const BreadcrumbItem & )>(_a, &Breadcrumb::itemActivated, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Breadcrumb::*)(const QVector<int> & )>(_a, &Breadcrumb::overflowActivated, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Breadcrumb::*)(BreadcrumbSize )>(_a, &Breadcrumb::breadcrumbSizeChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Breadcrumb::*)(OverflowMode )>(_a, &Breadcrumb::overflowModeChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Breadcrumb::*)(bool )>(_a, &Breadcrumb::autoTruncateOnItemClickChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Breadcrumb::*)(Typography::FontRole )>(_a, &Breadcrumb::standardFontRoleChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Breadcrumb::*)(Typography::FontRole )>(_a, &Breadcrumb::largeFontRoleChanged, 8))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Typography::FontRole >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->itemCount(); break;
        case 1: *reinterpret_cast<enum BreadcrumbSize*>(_v) = _t->breadcrumbSize(); break;
        case 2: *reinterpret_cast<enum OverflowMode*>(_v) = _t->overflowMode(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->autoTruncateOnItemClick(); break;
        case 4: *reinterpret_cast<Typography::FontRole*>(_v) = _t->standardFontRole(); break;
        case 5: *reinterpret_cast<Typography::FontRole*>(_v) = _t->largeFontRole(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setBreadcrumbSize(*reinterpret_cast<enum BreadcrumbSize*>(_v)); break;
        case 2: _t->setOverflowMode(*reinterpret_cast<enum OverflowMode*>(_v)); break;
        case 3: _t->setAutoTruncateOnItemClick(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setStandardFontRole(*reinterpret_cast<Typography::FontRole*>(_v)); break;
        case 5: _t->setLargeFontRole(*reinterpret_cast<Typography::FontRole*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::navigation::Breadcrumb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::navigation::Breadcrumb::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10navigation10BreadcrumbE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::navigation::Breadcrumb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void fluent::navigation::Breadcrumb::itemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fluent::navigation::Breadcrumb::itemClicked(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::navigation::Breadcrumb::itemActivated(int _t1, const BreadcrumbItem & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void fluent::navigation::Breadcrumb::overflowActivated(const QVector<int> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::navigation::Breadcrumb::breadcrumbSizeChanged(BreadcrumbSize _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::navigation::Breadcrumb::overflowModeChanged(OverflowMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::navigation::Breadcrumb::autoTruncateOnItemClickChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::navigation::Breadcrumb::standardFontRoleChanged(Typography::FontRole _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::navigation::Breadcrumb::largeFontRoleChanged(Typography::FontRole _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}
QT_WARNING_POP
