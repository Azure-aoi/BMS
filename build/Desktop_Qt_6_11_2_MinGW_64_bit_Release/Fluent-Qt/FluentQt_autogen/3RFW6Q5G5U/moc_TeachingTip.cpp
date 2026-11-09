/****************************************************************************
** Meta object code from reading C++ file 'TeachingTip.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/dialogs_flyouts/TeachingTip.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TeachingTip.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent15dialogs_flyouts11TeachingTipE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::dialogs_flyouts::TeachingTip::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent15dialogs_flyouts11TeachingTipE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::dialogs_flyouts::TeachingTip",
        "closing",
        "",
        "CloseReason",
        "reason",
        "targetChanged",
        "QWidget*",
        "target",
        "preferredPlacementChanged",
        "PreferredPlacement",
        "placement",
        "placementMarginChanged",
        "margin",
        "lightDismissEnabledChanged",
        "enabled",
        "tailVisibleChanged",
        "visible",
        "preferredPlacement",
        "placementMargin",
        "lightDismissEnabled",
        "tailVisible",
        "Auto",
        "Top",
        "TopLeft",
        "TopRight",
        "Bottom",
        "BottomLeft",
        "BottomRight",
        "Left",
        "LeftTop",
        "LeftBottom",
        "Right",
        "RightTop",
        "RightBottom",
        "Programmatic",
        "ActionButton",
        "CloseButton",
        "LightDismiss",
        "TargetDestroyed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'closing'
        QtMocHelpers::SignalData<void(enum CloseReason)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'targetChanged'
        QtMocHelpers::SignalData<void(QWidget *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'preferredPlacementChanged'
        QtMocHelpers::SignalData<void(enum PreferredPlacement)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'placementMarginChanged'
        QtMocHelpers::SignalData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Signal 'lightDismissEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 14 },
        }}),
        // Signal 'tailVisibleChanged'
        QtMocHelpers::SignalData<void(bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'target'
        QtMocHelpers::PropertyData<QWidget*>(7, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'preferredPlacement'
        QtMocHelpers::PropertyData<enum PreferredPlacement>(17, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'placementMargin'
        QtMocHelpers::PropertyData<int>(18, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'lightDismissEnabled'
        QtMocHelpers::PropertyData<bool>(19, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'tailVisible'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'PreferredPlacement'
        QtMocHelpers::EnumData<enum PreferredPlacement>(9, 9, QMC::EnumFlags{}).add({
            {   21, PreferredPlacement::Auto },
            {   22, PreferredPlacement::Top },
            {   23, PreferredPlacement::TopLeft },
            {   24, PreferredPlacement::TopRight },
            {   25, PreferredPlacement::Bottom },
            {   26, PreferredPlacement::BottomLeft },
            {   27, PreferredPlacement::BottomRight },
            {   28, PreferredPlacement::Left },
            {   29, PreferredPlacement::LeftTop },
            {   30, PreferredPlacement::LeftBottom },
            {   31, PreferredPlacement::Right },
            {   32, PreferredPlacement::RightTop },
            {   33, PreferredPlacement::RightBottom },
        }),
        // enum 'CloseReason'
        QtMocHelpers::EnumData<enum CloseReason>(3, 3, QMC::EnumFlags{}).add({
            {   34, CloseReason::Programmatic },
            {   35, CloseReason::ActionButton },
            {   36, CloseReason::CloseButton },
            {   37, CloseReason::LightDismiss },
            {   38, CloseReason::TargetDestroyed },
        }),
    };
    return QtMocHelpers::metaObjectData<TeachingTip, qt_meta_tag_ZN6fluent15dialogs_flyouts11TeachingTipE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::dialogs_flyouts::TeachingTip::staticMetaObject = { {
    QMetaObject::SuperData::link<Popup::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent15dialogs_flyouts11TeachingTipE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent15dialogs_flyouts11TeachingTipE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent15dialogs_flyouts11TeachingTipE_t>.metaTypes,
    nullptr
} };

void fluent::dialogs_flyouts::TeachingTip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TeachingTip *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->closing((*reinterpret_cast<std::add_pointer_t<enum CloseReason>>(_a[1]))); break;
        case 1: _t->targetChanged((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 2: _t->preferredPlacementChanged((*reinterpret_cast<std::add_pointer_t<enum PreferredPlacement>>(_a[1]))); break;
        case 3: _t->placementMarginChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->lightDismissEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->tailVisibleChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TeachingTip::*)(CloseReason )>(_a, &TeachingTip::closing, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TeachingTip::*)(QWidget * )>(_a, &TeachingTip::targetChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TeachingTip::*)(PreferredPlacement )>(_a, &TeachingTip::preferredPlacementChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TeachingTip::*)(int )>(_a, &TeachingTip::placementMarginChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TeachingTip::*)(bool )>(_a, &TeachingTip::lightDismissEnabledChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TeachingTip::*)(bool )>(_a, &TeachingTip::tailVisibleChanged, 5))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QWidget**>(_v) = _t->target(); break;
        case 1: *reinterpret_cast<enum PreferredPlacement*>(_v) = _t->preferredPlacement(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->placementMargin(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isLightDismissEnabled(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isTailVisible(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTarget(*reinterpret_cast<QWidget**>(_v)); break;
        case 1: _t->setPreferredPlacement(*reinterpret_cast<enum PreferredPlacement*>(_v)); break;
        case 2: _t->setPlacementMargin(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setLightDismissEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setTailVisible(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::dialogs_flyouts::TeachingTip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::dialogs_flyouts::TeachingTip::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent15dialogs_flyouts11TeachingTipE_t>.strings))
        return static_cast<void*>(this);
    return Popup::qt_metacast(_clname);
}

int fluent::dialogs_flyouts::TeachingTip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Popup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
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
void fluent::dialogs_flyouts::TeachingTip::closing(CloseReason _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::dialogs_flyouts::TeachingTip::targetChanged(QWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::dialogs_flyouts::TeachingTip::preferredPlacementChanged(PreferredPlacement _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::dialogs_flyouts::TeachingTip::placementMarginChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::dialogs_flyouts::TeachingTip::lightDismissEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::dialogs_flyouts::TeachingTip::tailVisibleChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}
QT_WARNING_POP
