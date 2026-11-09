/****************************************************************************
** Meta object code from reading C++ file 'CoachMark.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/dialogs_flyouts/CoachMark.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CoachMark.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent15dialogs_flyouts9CoachMarkE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::dialogs_flyouts::CoachMark::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent15dialogs_flyouts9CoachMarkE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::dialogs_flyouts::CoachMark",
        "openChanged",
        "",
        "open",
        "opened",
        "closed",
        "close",
        "setOpen",
        "fadeOpacity",
        "cardSize",
        "QSize",
        "target",
        "QWidget*",
        "placement",
        "Placement",
        "SurfaceMode",
        "TopLevelSurface",
        "SameWindowSurface",
        "Auto",
        "Top",
        "Bottom",
        "Left",
        "Right"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'openChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'opened'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'closed'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'open'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'close'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setOpen'
        QtMocHelpers::SlotData<void(bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'fadeOpacity'
        QtMocHelpers::PropertyData<double>(8, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'cardSize'
        QtMocHelpers::PropertyData<QSize>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'target'
        QtMocHelpers::PropertyData<QWidget*>(11, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'placement'
        QtMocHelpers::PropertyData<enum Placement>(13, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'open'
        QtMocHelpers::PropertyData<bool>(3, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'SurfaceMode'
        QtMocHelpers::EnumData<enum SurfaceMode>(15, 15, QMC::EnumFlags{}).add({
            {   16, SurfaceMode::TopLevelSurface },
            {   17, SurfaceMode::SameWindowSurface },
        }),
        // enum 'Placement'
        QtMocHelpers::EnumData<enum Placement>(14, 14, QMC::EnumFlags{}).add({
            {   18, Placement::Auto },
            {   19, Placement::Top },
            {   20, Placement::Bottom },
            {   21, Placement::Left },
            {   22, Placement::Right },
        }),
    };
    return QtMocHelpers::metaObjectData<CoachMark, qt_meta_tag_ZN6fluent15dialogs_flyouts9CoachMarkE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::dialogs_flyouts::CoachMark::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent15dialogs_flyouts9CoachMarkE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent15dialogs_flyouts9CoachMarkE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent15dialogs_flyouts9CoachMarkE_t>.metaTypes,
    nullptr
} };

void fluent::dialogs_flyouts::CoachMark::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CoachMark *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->openChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->opened(); break;
        case 2: _t->closed(); break;
        case 3: _t->open(); break;
        case 4: _t->close(); break;
        case 5: _t->setOpen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CoachMark::*)(bool )>(_a, &CoachMark::openChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CoachMark::*)()>(_a, &CoachMark::opened, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CoachMark::*)()>(_a, &CoachMark::closed, 2))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<double*>(_v) = _t->fadeOpacity(); break;
        case 1: *reinterpret_cast<QSize*>(_v) = _t->cardSize(); break;
        case 2: *reinterpret_cast<QWidget**>(_v) = _t->target(); break;
        case 3: *reinterpret_cast<enum Placement*>(_v) = _t->placement(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isOpen(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFadeOpacity(*reinterpret_cast<double*>(_v)); break;
        case 1: _t->setCardSize(*reinterpret_cast<QSize*>(_v)); break;
        case 2: _t->setTarget(*reinterpret_cast<QWidget**>(_v)); break;
        case 3: _t->setPlacement(*reinterpret_cast<enum Placement*>(_v)); break;
        case 4: _t->setOpen(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::dialogs_flyouts::CoachMark::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::dialogs_flyouts::CoachMark::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent15dialogs_flyouts9CoachMarkE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "fluent::FluentElement"))
        return static_cast< fluent::FluentElement*>(this);
    if (!strcmp(_clname, "fluent::QMLPlus"))
        return static_cast< fluent::QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::dialogs_flyouts::CoachMark::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void fluent::dialogs_flyouts::CoachMark::openChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::dialogs_flyouts::CoachMark::opened()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::dialogs_flyouts::CoachMark::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
