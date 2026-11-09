/****************************************************************************
** Meta object code from reading C++ file 'Window.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/windowing/Window.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Window.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent9windowing6WindowE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::windowing::Window::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent9windowing6WindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::windowing::Window",
        "backdropEffectChanged",
        "",
        "BackdropEffect",
        "effect",
        "backdropStateChanged",
        "BackdropState",
        "state",
        "minimizeRequested",
        "maximizeRequested",
        "restoreRequested",
        "closeRequested",
        "minimizeWindow",
        "toggleMaximizeRestore",
        "closeWindow",
        "updateChromeOptions",
        "syncTitleBarSystemInsets",
        "syncCaptionButtons",
        "syncCaptionButtonActivation",
        "active",
        "handleTitleBarDragStarted",
        "QPoint",
        "globalPos",
        "handleTitleBarDragMoved",
        "handleTitleBarDragFinished",
        "handleTitleBarDoubleClicked",
        "handleTitleBarContextMenuRequested",
        "contentWidget",
        "QWidget*",
        "backdropEffect"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'backdropEffectChanged'
        QtMocHelpers::SignalData<void(BackdropEffect)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'backdropStateChanged'
        QtMocHelpers::SignalData<void(const BackdropState &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'minimizeRequested'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'maximizeRequested'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'restoreRequested'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'closeRequested'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'minimizeWindow'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toggleMaximizeRestore'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'closeWindow'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateChromeOptions'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'syncTitleBarSystemInsets'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'syncCaptionButtons'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'syncCaptionButtonActivation'
        QtMocHelpers::SlotData<void(bool)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'handleTitleBarDragStarted'
        QtMocHelpers::SlotData<void(const QPoint &)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Slot 'handleTitleBarDragMoved'
        QtMocHelpers::SlotData<void(const QPoint &)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Slot 'handleTitleBarDragFinished'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'handleTitleBarDoubleClicked'
        QtMocHelpers::SlotData<void(const QPoint &)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Slot 'handleTitleBarContextMenuRequested'
        QtMocHelpers::SlotData<void(const QPoint &)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'contentWidget'
        QtMocHelpers::PropertyData<QWidget*>(27, 0x80000000 | 28, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'backdropEffect'
        QtMocHelpers::PropertyData<BackdropEffect>(29, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Window, qt_meta_tag_ZN6fluent9windowing6WindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::windowing::Window::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9windowing6WindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9windowing6WindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent9windowing6WindowE_t>.metaTypes,
    nullptr
} };

void fluent::windowing::Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Window *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->backdropEffectChanged((*reinterpret_cast<std::add_pointer_t<BackdropEffect>>(_a[1]))); break;
        case 1: _t->backdropStateChanged((*reinterpret_cast<std::add_pointer_t<BackdropState>>(_a[1]))); break;
        case 2: _t->minimizeRequested(); break;
        case 3: _t->maximizeRequested(); break;
        case 4: _t->restoreRequested(); break;
        case 5: _t->closeRequested(); break;
        case 6: _t->minimizeWindow(); break;
        case 7: _t->toggleMaximizeRestore(); break;
        case 8: _t->closeWindow(); break;
        case 9: _t->updateChromeOptions(); break;
        case 10: _t->syncTitleBarSystemInsets(); break;
        case 11: _t->syncCaptionButtons(); break;
        case 12: _t->syncCaptionButtonActivation((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->handleTitleBarDragStarted((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 14: _t->handleTitleBarDragMoved((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 15: _t->handleTitleBarDragFinished(); break;
        case 16: _t->handleTitleBarDoubleClicked((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 17: _t->handleTitleBarContextMenuRequested((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Window::*)(BackdropEffect )>(_a, &Window::backdropEffectChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(const BackdropState & )>(_a, &Window::backdropStateChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::minimizeRequested, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::maximizeRequested, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::restoreRequested, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::closeRequested, 5))
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
        case 0: *reinterpret_cast<QWidget**>(_v) = _t->contentWidget(); break;
        case 1: *reinterpret_cast<BackdropEffect*>(_v) = _t->backdropEffect(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setContentWidget(*reinterpret_cast<QWidget**>(_v)); break;
        case 1: _t->setBackdropEffect(*reinterpret_cast<BackdropEffect*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::windowing::Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::windowing::Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9windowing6WindowE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::windowing::Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void fluent::windowing::Window::backdropEffectChanged(BackdropEffect _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::windowing::Window::backdropStateChanged(const BackdropState & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::windowing::Window::minimizeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void fluent::windowing::Window::maximizeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void fluent::windowing::Window::restoreRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void fluent::windowing::Window::closeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
