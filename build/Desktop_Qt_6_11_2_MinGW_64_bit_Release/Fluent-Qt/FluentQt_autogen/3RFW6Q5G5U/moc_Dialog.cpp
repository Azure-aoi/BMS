/****************************************************************************
** Meta object code from reading C++ file 'Dialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/dialogs_flyouts/Dialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Dialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent15dialogs_flyouts6DialogE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::dialogs_flyouts::Dialog::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent15dialogs_flyouts6DialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::dialogs_flyouts::Dialog",
        "isOpenChanged",
        "",
        "open",
        "opening",
        "opened",
        "closing",
        "closed",
        "aboutToShow",
        "aboutToHide",
        "dragEnabledChanged",
        "enabled",
        "animationEnabledChanged",
        "smokeEnabledChanged",
        "modalChanged",
        "modal",
        "dimChanged",
        "dim",
        "dimOpacityChanged",
        "opacity",
        "backdropBlurRadiusChanged",
        "radius",
        "closePolicyChanged",
        "ClosePolicy",
        "policy",
        "refreshBackdrop",
        "isOpen",
        "animationProgress",
        "dragEnabled",
        "animationEnabled",
        "smokeEnabled",
        "dimOpacity",
        "backdropBlurRadius",
        "closePolicy",
        "CloseFlag",
        "NoAutoClose",
        "CloseOnPressOutside",
        "CloseOnEscape"
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
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'closed'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'aboutToShow'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'aboutToHide'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dragEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Signal 'animationEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Signal 'smokeEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Signal 'modalChanged'
        QtMocHelpers::SignalData<void(bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Signal 'dimChanged'
        QtMocHelpers::SignalData<void(bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 17 },
        }}),
        // Signal 'dimOpacityChanged'
        QtMocHelpers::SignalData<void(double)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 19 },
        }}),
        // Signal 'backdropBlurRadiusChanged'
        QtMocHelpers::SignalData<void(double)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 21 },
        }}),
        // Signal 'closePolicyChanged'
        QtMocHelpers::SignalData<void(ClosePolicy)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 23, 24 },
        }}),
        // Slot 'refreshBackdrop'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'isOpen'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'animationProgress'
        QtMocHelpers::PropertyData<double>(27, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'dragEnabled'
        QtMocHelpers::PropertyData<bool>(28, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'animationEnabled'
        QtMocHelpers::PropertyData<bool>(29, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'smokeEnabled'
        QtMocHelpers::PropertyData<bool>(30, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'modal'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'dim'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'dimOpacity'
        QtMocHelpers::PropertyData<double>(31, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 12),
        // property 'backdropBlurRadius'
        QtMocHelpers::PropertyData<double>(32, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 13),
        // property 'closePolicy'
        QtMocHelpers::PropertyData<ClosePolicy>(33, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 14),
    };
    QtMocHelpers::UintData qt_enums {
        // flag 'ClosePolicy'
        QtMocHelpers::EnumData<ClosePolicy>(23, 34, QMC::EnumIsFlag).add({
            {   35, CloseFlag::NoAutoClose },
            {   36, CloseFlag::CloseOnPressOutside },
            {   37, CloseFlag::CloseOnEscape },
        }),
    };
    return QtMocHelpers::metaObjectData<Dialog, qt_meta_tag_ZN6fluent15dialogs_flyouts6DialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::dialogs_flyouts::Dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent15dialogs_flyouts6DialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent15dialogs_flyouts6DialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent15dialogs_flyouts6DialogE_t>.metaTypes,
    nullptr
} };

void fluent::dialogs_flyouts::Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Dialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->isOpenChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->opening(); break;
        case 2: _t->opened(); break;
        case 3: _t->closing(); break;
        case 4: _t->closed(); break;
        case 5: _t->aboutToShow(); break;
        case 6: _t->aboutToHide(); break;
        case 7: _t->dragEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->animationEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->smokeEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->modalChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->dimChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->dimOpacityChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 13: _t->backdropBlurRadiusChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 14: _t->closePolicyChanged((*reinterpret_cast<std::add_pointer_t<ClosePolicy>>(_a[1]))); break;
        case 15: _t->refreshBackdrop(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)(bool )>(_a, &Dialog::isOpenChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)()>(_a, &Dialog::opening, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)()>(_a, &Dialog::opened, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)()>(_a, &Dialog::closing, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)()>(_a, &Dialog::closed, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)()>(_a, &Dialog::aboutToShow, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)()>(_a, &Dialog::aboutToHide, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)(bool )>(_a, &Dialog::dragEnabledChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)(bool )>(_a, &Dialog::animationEnabledChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)(bool )>(_a, &Dialog::smokeEnabledChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)(bool )>(_a, &Dialog::modalChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)(bool )>(_a, &Dialog::dimChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)(double )>(_a, &Dialog::dimOpacityChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)(double )>(_a, &Dialog::backdropBlurRadiusChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (Dialog::*)(ClosePolicy )>(_a, &Dialog::closePolicyChanged, 14))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isOpen(); break;
        case 1: *reinterpret_cast<double*>(_v) = _t->animationProgress(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isDragEnabled(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isAnimationEnabled(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isSmokeEnabled(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->isModal(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->isDim(); break;
        case 7: *reinterpret_cast<double*>(_v) = _t->dimOpacity(); break;
        case 8: *reinterpret_cast<double*>(_v) = _t->backdropBlurRadius(); break;
        case 9: QtMocHelpers::assignFlags<ClosePolicy>(_v, _t->closePolicy()); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsOpen(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setAnimationProgress(*reinterpret_cast<double*>(_v)); break;
        case 2: _t->setDragEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setAnimationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setSmokeEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setModal(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setDim(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setDimOpacity(*reinterpret_cast<double*>(_v)); break;
        case 8: _t->setBackdropBlurRadius(*reinterpret_cast<double*>(_v)); break;
        case 9: _t->setClosePolicy(*reinterpret_cast<ClosePolicy*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::dialogs_flyouts::Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::dialogs_flyouts::Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent15dialogs_flyouts6DialogE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QDialog::qt_metacast(_clname);
}

int fluent::dialogs_flyouts::Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void fluent::dialogs_flyouts::Dialog::isOpenChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::dialogs_flyouts::Dialog::opening()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::dialogs_flyouts::Dialog::opened()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void fluent::dialogs_flyouts::Dialog::closing()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void fluent::dialogs_flyouts::Dialog::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void fluent::dialogs_flyouts::Dialog::aboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void fluent::dialogs_flyouts::Dialog::aboutToHide()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void fluent::dialogs_flyouts::Dialog::dragEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::dialogs_flyouts::Dialog::animationEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::dialogs_flyouts::Dialog::smokeEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void fluent::dialogs_flyouts::Dialog::modalChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void fluent::dialogs_flyouts::Dialog::dimChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void fluent::dialogs_flyouts::Dialog::dimOpacityChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void fluent::dialogs_flyouts::Dialog::backdropBlurRadiusChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void fluent::dialogs_flyouts::Dialog::closePolicyChanged(ClosePolicy _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}
QT_WARNING_POP
