/****************************************************************************
** Meta object code from reading C++ file 'Popup.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/dialogs_flyouts/Popup.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Popup.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent15dialogs_flyouts5PopupE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::dialogs_flyouts::Popup::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent15dialogs_flyouts5PopupE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::dialogs_flyouts::Popup",
        "isOpenChanged",
        "",
        "open",
        "opening",
        "opened",
        "closing",
        "CloseReason",
        "reason",
        "closed",
        "aboutToShow",
        "aboutToHide",
        "popupProgressChanged",
        "progress",
        "closePolicyChanged",
        "ClosePolicy",
        "policy",
        "modalChanged",
        "modal",
        "dimChanged",
        "dim",
        "dimOpacityChanged",
        "opacity",
        "backdropBlurRadiusChanged",
        "radius",
        "animationEnabledChanged",
        "enabled",
        "close",
        "setIsOpen",
        "refreshBackdrop",
        "closeWithReason",
        "isOpen",
        "closePolicy",
        "dimOpacity",
        "backdropBlurRadius",
        "animationEnabled",
        "popupProgress",
        "CloseFlag",
        "NoAutoClose",
        "CloseOnPressOutside",
        "CloseOnEscape",
        "Programmatic",
        "ActionButton",
        "CloseButton",
        "LightDismiss",
        "TargetDestroyed",
        "Escape"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'isOpenChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'opening'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'opened'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'closing'
        QtMocHelpers::SignalData<void(enum CloseReason)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'closed'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'aboutToShow'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'aboutToHide'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'popupProgressChanged'
        QtMocHelpers::SignalData<void(double)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 13 },
        }}),
        // Signal 'closePolicyChanged'
        QtMocHelpers::SignalData<void(ClosePolicy)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Signal 'modalChanged'
        QtMocHelpers::SignalData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Signal 'dimChanged'
        QtMocHelpers::SignalData<void(bool)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 20 },
        }}),
        // Signal 'dimOpacityChanged'
        QtMocHelpers::SignalData<void(double)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 22 },
        }}),
        // Signal 'backdropBlurRadiusChanged'
        QtMocHelpers::SignalData<void(double)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 24 },
        }}),
        // Signal 'animationEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 26 },
        }}),
        // Slot 'open'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'close'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setIsOpen'
        QtMocHelpers::SlotData<void(bool)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Slot 'refreshBackdrop'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'closeWithReason'
        QtMocHelpers::SlotData<void(enum CloseReason)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'isOpen'
        QtMocHelpers::PropertyData<bool>(31, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'closePolicy'
        QtMocHelpers::PropertyData<ClosePolicy>(32, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 8),
        // property 'modal'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'dim'
        QtMocHelpers::PropertyData<bool>(20, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'dimOpacity'
        QtMocHelpers::PropertyData<double>(33, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'backdropBlurRadius'
        QtMocHelpers::PropertyData<double>(34, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 12),
        // property 'animationEnabled'
        QtMocHelpers::PropertyData<bool>(35, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 13),
        // property 'popupProgress'
        QtMocHelpers::PropertyData<double>(36, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
    };
    QtMocHelpers::UintData qt_enums {
        // flag 'ClosePolicy'
        QtMocHelpers::EnumData<ClosePolicy>(15, 37, QMC::EnumIsFlag).add({
            {   38, CloseFlag::NoAutoClose },
            {   39, CloseFlag::CloseOnPressOutside },
            {   40, CloseFlag::CloseOnEscape },
        }),
        // enum 'CloseReason'
        QtMocHelpers::EnumData<enum CloseReason>(7, 7, QMC::EnumFlags{}).add({
            {   41, CloseReason::Programmatic },
            {   42, CloseReason::ActionButton },
            {   43, CloseReason::CloseButton },
            {   44, CloseReason::LightDismiss },
            {   45, CloseReason::TargetDestroyed },
            {   46, CloseReason::Escape },
        }),
    };
    return QtMocHelpers::metaObjectData<Popup, qt_meta_tag_ZN6fluent15dialogs_flyouts5PopupE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::dialogs_flyouts::Popup::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent15dialogs_flyouts5PopupE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent15dialogs_flyouts5PopupE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent15dialogs_flyouts5PopupE_t>.metaTypes,
    nullptr
} };

void fluent::dialogs_flyouts::Popup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Popup *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->isOpenChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->opening(); break;
        case 2: _t->opened(); break;
        case 3: _t->closing((*reinterpret_cast<std::add_pointer_t<enum CloseReason>>(_a[1]))); break;
        case 4: _t->closed(); break;
        case 5: _t->aboutToShow(); break;
        case 6: _t->aboutToHide(); break;
        case 7: _t->popupProgressChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 8: _t->closePolicyChanged((*reinterpret_cast<std::add_pointer_t<ClosePolicy>>(_a[1]))); break;
        case 9: _t->modalChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->dimChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->dimOpacityChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 12: _t->backdropBlurRadiusChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 13: _t->animationEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->open(); break;
        case 15: _t->close(); break;
        case 16: _t->setIsOpen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->refreshBackdrop(); break;
        case 18: _t->closeWithReason((*reinterpret_cast<std::add_pointer_t<enum CloseReason>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Popup::*)(bool )>(_a, &Popup::isOpenChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Popup::*)()>(_a, &Popup::opening, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Popup::*)()>(_a, &Popup::opened, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Popup::*)(CloseReason )>(_a, &Popup::closing, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Popup::*)()>(_a, &Popup::closed, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Popup::*)()>(_a, &Popup::aboutToShow, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Popup::*)()>(_a, &Popup::aboutToHide, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Popup::*)(double )>(_a, &Popup::popupProgressChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Popup::*)(ClosePolicy )>(_a, &Popup::closePolicyChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Popup::*)(bool )>(_a, &Popup::modalChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Popup::*)(bool )>(_a, &Popup::dimChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Popup::*)(double )>(_a, &Popup::dimOpacityChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (Popup::*)(double )>(_a, &Popup::backdropBlurRadiusChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (Popup::*)(bool )>(_a, &Popup::animationEnabledChanged, 13))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isOpen(); break;
        case 1: QtMocHelpers::assignFlags<ClosePolicy>(_v, _t->closePolicy()); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isModal(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isDim(); break;
        case 4: *reinterpret_cast<double*>(_v) = _t->dimOpacity(); break;
        case 5: *reinterpret_cast<double*>(_v) = _t->backdropBlurRadius(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->isAnimationEnabled(); break;
        case 7: *reinterpret_cast<double*>(_v) = _t->popupProgress(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsOpen(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setClosePolicy(*reinterpret_cast<ClosePolicy*>(_v)); break;
        case 2: _t->setModal(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setDim(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setDimOpacity(*reinterpret_cast<double*>(_v)); break;
        case 5: _t->setBackdropBlurRadius(*reinterpret_cast<double*>(_v)); break;
        case 6: _t->setAnimationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setPopupProgress(*reinterpret_cast<double*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::dialogs_flyouts::Popup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::dialogs_flyouts::Popup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent15dialogs_flyouts5PopupE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::dialogs_flyouts::Popup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void fluent::dialogs_flyouts::Popup::isOpenChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::dialogs_flyouts::Popup::opening()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::dialogs_flyouts::Popup::opened()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void fluent::dialogs_flyouts::Popup::closing(CloseReason _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::dialogs_flyouts::Popup::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void fluent::dialogs_flyouts::Popup::aboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void fluent::dialogs_flyouts::Popup::aboutToHide()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void fluent::dialogs_flyouts::Popup::popupProgressChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::dialogs_flyouts::Popup::closePolicyChanged(ClosePolicy _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::dialogs_flyouts::Popup::modalChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void fluent::dialogs_flyouts::Popup::dimChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void fluent::dialogs_flyouts::Popup::dimOpacityChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void fluent::dialogs_flyouts::Popup::backdropBlurRadiusChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void fluent::dialogs_flyouts::Popup::animationEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}
QT_WARNING_POP
