/****************************************************************************
** Meta object code from reading C++ file 'Toast.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/status_info/Toast.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Toast.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent11status_info5ToastE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::status_info::Toast::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11status_info5ToastE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::status_info::Toast",
        "titleChanged",
        "",
        "title",
        "messageChanged",
        "message",
        "severityChanged",
        "Severity",
        "severity",
        "placementChanged",
        "Placement",
        "placement",
        "placementMarginsChanged",
        "QMargins",
        "margins",
        "durationChanged",
        "durationMs",
        "animationEnabledChanged",
        "enabled",
        "actionChanged",
        "QAction*",
        "action",
        "closableChanged",
        "closable",
        "pauseOnHoverEnabledChanged",
        "updateKeyChanged",
        "key",
        "isOpenChanged",
        "open",
        "presented",
        "updated",
        "dismissed",
        "dismissedWithReason",
        "DismissReason",
        "reason",
        "placementMargins",
        "duration",
        "animationEnabled",
        "pauseOnHoverEnabled",
        "updateKey",
        "isOpen",
        "toastProgress",
        "Informational",
        "Success",
        "Warning",
        "Error",
        "TopStart",
        "Top",
        "TopEnd",
        "BottomStart",
        "Bottom",
        "BottomEnd",
        "Programmatic",
        "TimedOut",
        "ActionInvoked",
        "Evicted",
        "CloseButton"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'titleChanged'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'messageChanged'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'severityChanged'
        QtMocHelpers::SignalData<void(enum Severity)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'placementChanged'
        QtMocHelpers::SignalData<void(enum Placement)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Signal 'placementMarginsChanged'
        QtMocHelpers::SignalData<void(const QMargins &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'durationChanged'
        QtMocHelpers::SignalData<void(int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 16 },
        }}),
        // Signal 'animationEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Signal 'actionChanged'
        QtMocHelpers::SignalData<void(QAction *)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 20, 21 },
        }}),
        // Signal 'closableChanged'
        QtMocHelpers::SignalData<void(bool)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Signal 'pauseOnHoverEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Signal 'updateKeyChanged'
        QtMocHelpers::SignalData<void(const QString &)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 26 },
        }}),
        // Signal 'isOpenChanged'
        QtMocHelpers::SignalData<void(bool)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 28 },
        }}),
        // Signal 'presented'
        QtMocHelpers::SignalData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'updated'
        QtMocHelpers::SignalData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dismissed'
        QtMocHelpers::SignalData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dismissedWithReason'
        QtMocHelpers::SignalData<void(enum DismissReason)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 33, 34 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'title'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'message'
        QtMocHelpers::PropertyData<QString>(5, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'severity'
        QtMocHelpers::PropertyData<enum Severity>(8, 0x80000000 | 7, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'placement'
        QtMocHelpers::PropertyData<enum Placement>(11, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
        // property 'placementMargins'
        QtMocHelpers::PropertyData<QMargins>(35, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
        // property 'duration'
        QtMocHelpers::PropertyData<int>(36, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'animationEnabled'
        QtMocHelpers::PropertyData<bool>(37, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'action'
        QtMocHelpers::PropertyData<QAction*>(21, 0x80000000 | 20, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 7),
        // property 'closable'
        QtMocHelpers::PropertyData<bool>(23, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'pauseOnHoverEnabled'
        QtMocHelpers::PropertyData<bool>(38, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'updateKey'
        QtMocHelpers::PropertyData<QString>(39, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'isOpen'
        QtMocHelpers::PropertyData<bool>(40, QMetaType::Bool, QMC::DefaultPropertyFlags, 11),
        // property 'toastProgress'
        QtMocHelpers::PropertyData<qreal>(41, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Severity'
        QtMocHelpers::EnumData<enum Severity>(7, 7, QMC::EnumFlags{}).add({
            {   42, Severity::Informational },
            {   43, Severity::Success },
            {   44, Severity::Warning },
            {   45, Severity::Error },
        }),
        // enum 'Placement'
        QtMocHelpers::EnumData<enum Placement>(10, 10, QMC::EnumFlags{}).add({
            {   46, Placement::TopStart },
            {   47, Placement::Top },
            {   48, Placement::TopEnd },
            {   49, Placement::BottomStart },
            {   50, Placement::Bottom },
            {   51, Placement::BottomEnd },
        }),
        // enum 'DismissReason'
        QtMocHelpers::EnumData<enum DismissReason>(33, 33, QMC::EnumFlags{}).add({
            {   52, DismissReason::Programmatic },
            {   53, DismissReason::TimedOut },
            {   54, DismissReason::ActionInvoked },
            {   55, DismissReason::Evicted },
            {   56, DismissReason::CloseButton },
        }),
    };
    return QtMocHelpers::metaObjectData<Toast, qt_meta_tag_ZN6fluent11status_info5ToastE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::status_info::Toast::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info5ToastE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info5ToastE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent11status_info5ToastE_t>.metaTypes,
    nullptr
} };

void fluent::status_info::Toast::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Toast *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->titleChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->messageChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->severityChanged((*reinterpret_cast<std::add_pointer_t<enum Severity>>(_a[1]))); break;
        case 3: _t->placementChanged((*reinterpret_cast<std::add_pointer_t<enum Placement>>(_a[1]))); break;
        case 4: _t->placementMarginsChanged((*reinterpret_cast<std::add_pointer_t<QMargins>>(_a[1]))); break;
        case 5: _t->durationChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->animationEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->actionChanged((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 8: _t->closableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->pauseOnHoverEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->updateKeyChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->isOpenChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->presented(); break;
        case 13: _t->updated(); break;
        case 14: _t->dismissed(); break;
        case 15: _t->dismissedWithReason((*reinterpret_cast<std::add_pointer_t<enum DismissReason>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Toast::*)(const QString & )>(_a, &Toast::titleChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Toast::*)(const QString & )>(_a, &Toast::messageChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Toast::*)(Severity )>(_a, &Toast::severityChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Toast::*)(Placement )>(_a, &Toast::placementChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Toast::*)(const QMargins & )>(_a, &Toast::placementMarginsChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Toast::*)(int )>(_a, &Toast::durationChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Toast::*)(bool )>(_a, &Toast::animationEnabledChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Toast::*)(QAction * )>(_a, &Toast::actionChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Toast::*)(bool )>(_a, &Toast::closableChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Toast::*)(bool )>(_a, &Toast::pauseOnHoverEnabledChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Toast::*)(const QString & )>(_a, &Toast::updateKeyChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Toast::*)(bool )>(_a, &Toast::isOpenChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (Toast::*)()>(_a, &Toast::presented, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (Toast::*)()>(_a, &Toast::updated, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (Toast::*)()>(_a, &Toast::dismissed, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (Toast::*)(DismissReason )>(_a, &Toast::dismissedWithReason, 15))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->message(); break;
        case 2: *reinterpret_cast<enum Severity*>(_v) = _t->severity(); break;
        case 3: *reinterpret_cast<enum Placement*>(_v) = _t->placement(); break;
        case 4: *reinterpret_cast<QMargins*>(_v) = _t->placementMargins(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->duration(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->isAnimationEnabled(); break;
        case 7: *reinterpret_cast<QAction**>(_v) = _t->action(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->isClosable(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->isPauseOnHoverEnabled(); break;
        case 10: *reinterpret_cast<QString*>(_v) = _t->updateKey(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->isOpen(); break;
        case 12: *reinterpret_cast<qreal*>(_v) = _t->toastProgress(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitle(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setMessage(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setSeverity(*reinterpret_cast<enum Severity*>(_v)); break;
        case 3: _t->setPlacement(*reinterpret_cast<enum Placement*>(_v)); break;
        case 4: _t->setPlacementMargins(*reinterpret_cast<QMargins*>(_v)); break;
        case 5: _t->setDuration(*reinterpret_cast<int*>(_v)); break;
        case 6: _t->setAnimationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setAction(*reinterpret_cast<QAction**>(_v)); break;
        case 8: _t->setClosable(*reinterpret_cast<bool*>(_v)); break;
        case 9: _t->setPauseOnHoverEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 10: _t->setUpdateKey(*reinterpret_cast<QString*>(_v)); break;
        case 12: _t->setToastProgress(*reinterpret_cast<qreal*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::status_info::Toast::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::status_info::Toast::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info5ToastE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::status_info::Toast::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void fluent::status_info::Toast::titleChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::status_info::Toast::messageChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::status_info::Toast::severityChanged(Severity _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::status_info::Toast::placementChanged(Placement _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::status_info::Toast::placementMarginsChanged(const QMargins & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::status_info::Toast::durationChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::status_info::Toast::animationEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::status_info::Toast::actionChanged(QAction * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::status_info::Toast::closableChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::status_info::Toast::pauseOnHoverEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void fluent::status_info::Toast::updateKeyChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void fluent::status_info::Toast::isOpenChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void fluent::status_info::Toast::presented()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void fluent::status_info::Toast::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void fluent::status_info::Toast::dismissed()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void fluent::status_info::Toast::dismissedWithReason(DismissReason _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}
QT_WARNING_POP
