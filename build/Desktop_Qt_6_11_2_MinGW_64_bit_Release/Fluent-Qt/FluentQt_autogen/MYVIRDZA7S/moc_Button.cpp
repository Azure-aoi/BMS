/****************************************************************************
** Meta object code from reading C++ file 'Button.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/basicinput/Button.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Button.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10basicinput6ButtonE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::basicinput::Button::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10basicinput6ButtonE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::basicinput::Button",
        "fluentStyleChanged",
        "",
        "fluentSizeChanged",
        "fontRoleChanged",
        "fluentLayoutChanged",
        "focusVisualChanged",
        "interactionStateChanged",
        "criticalOnHoverChanged",
        "cornerRadiiChanged",
        "fluentStyle",
        "ButtonStyle",
        "fluentSize",
        "ButtonSize",
        "fontRole",
        "Typography::FontRole",
        "fluentLayout",
        "ButtonLayout",
        "focusVisual",
        "interactionState",
        "InteractionState",
        "criticalOnHover",
        "cornerRadii",
        "QMargins",
        "iconOffset",
        "QPoint",
        "iconRotation",
        "iconScale",
        "contentOpacity",
        "Standard",
        "Accent",
        "Subtle",
        "Small",
        "StandardSize",
        "Large",
        "TextOnly",
        "IconBefore",
        "IconOnly",
        "IconAfter",
        "Rest",
        "Hover",
        "Pressed",
        "Disabled"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'fluentStyleChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fluentSizeChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fontRoleChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fluentLayoutChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'focusVisualChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'interactionStateChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'criticalOnHoverChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cornerRadiiChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'fluentStyle'
        QtMocHelpers::PropertyData<enum ButtonStyle>(10, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'fluentSize'
        QtMocHelpers::PropertyData<enum ButtonSize>(12, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'fontRole'
        QtMocHelpers::PropertyData<Typography::FontRole>(14, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'fluentLayout'
        QtMocHelpers::PropertyData<enum ButtonLayout>(16, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
        // property 'focusVisual'
        QtMocHelpers::PropertyData<bool>(18, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'interactionState'
        QtMocHelpers::PropertyData<enum InteractionState>(19, 0x80000000 | 20, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 5),
        // property 'criticalOnHover'
        QtMocHelpers::PropertyData<bool>(21, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'cornerRadii'
        QtMocHelpers::PropertyData<QMargins>(22, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::Writable | QMC::Resettable | QMC::EnumOrFlag | QMC::StdCppSet, 7),
        // property 'iconOffset'
        QtMocHelpers::PropertyData<QPoint>(24, 0x80000000 | 25, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'iconRotation'
        QtMocHelpers::PropertyData<qreal>(26, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'iconScale'
        QtMocHelpers::PropertyData<qreal>(27, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'contentOpacity'
        QtMocHelpers::PropertyData<qreal>(28, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ButtonStyle'
        QtMocHelpers::EnumData<enum ButtonStyle>(11, 11, QMC::EnumFlags{}).add({
            {   29, ButtonStyle::Standard },
            {   30, ButtonStyle::Accent },
            {   31, ButtonStyle::Subtle },
        }),
        // enum 'ButtonSize'
        QtMocHelpers::EnumData<enum ButtonSize>(13, 13, QMC::EnumFlags{}).add({
            {   32, ButtonSize::Small },
            {   33, ButtonSize::StandardSize },
            {   34, ButtonSize::Large },
        }),
        // enum 'ButtonLayout'
        QtMocHelpers::EnumData<enum ButtonLayout>(17, 17, QMC::EnumFlags{}).add({
            {   35, ButtonLayout::TextOnly },
            {   36, ButtonLayout::IconBefore },
            {   37, ButtonLayout::IconOnly },
            {   38, ButtonLayout::IconAfter },
        }),
        // enum 'InteractionState'
        QtMocHelpers::EnumData<enum InteractionState>(20, 20, QMC::EnumFlags{}).add({
            {   39, InteractionState::Rest },
            {   40, InteractionState::Hover },
            {   41, InteractionState::Pressed },
            {   42, InteractionState::Disabled },
        }),
    };
    return QtMocHelpers::metaObjectData<Button, qt_meta_tag_ZN6fluent10basicinput6ButtonE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN6fluent10basicinput6ButtonE[] = {
    QMetaObject::SuperData::link<Typography::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject fluent::basicinput::Button::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput6ButtonE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput6ButtonE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN6fluent10basicinput6ButtonE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10basicinput6ButtonE_t>.metaTypes,
    nullptr
} };

void fluent::basicinput::Button::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Button *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->fluentStyleChanged(); break;
        case 1: _t->fluentSizeChanged(); break;
        case 2: _t->fontRoleChanged(); break;
        case 3: _t->fluentLayoutChanged(); break;
        case 4: _t->focusVisualChanged(); break;
        case 5: _t->interactionStateChanged(); break;
        case 6: _t->criticalOnHoverChanged(); break;
        case 7: _t->cornerRadiiChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Button::*)()>(_a, &Button::fluentStyleChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Button::*)()>(_a, &Button::fluentSizeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Button::*)()>(_a, &Button::fontRoleChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Button::*)()>(_a, &Button::fluentLayoutChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Button::*)()>(_a, &Button::focusVisualChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Button::*)()>(_a, &Button::interactionStateChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Button::*)()>(_a, &Button::criticalOnHoverChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Button::*)()>(_a, &Button::cornerRadiiChanged, 7))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Typography::FontRole >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum ButtonStyle*>(_v) = _t->fluentStyle(); break;
        case 1: *reinterpret_cast<enum ButtonSize*>(_v) = _t->fluentSize(); break;
        case 2: *reinterpret_cast<Typography::FontRole*>(_v) = _t->fontRole(); break;
        case 3: *reinterpret_cast<enum ButtonLayout*>(_v) = _t->fluentLayout(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasFocusVisual(); break;
        case 5: *reinterpret_cast<enum InteractionState*>(_v) = _t->interactionState(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->criticalOnHover(); break;
        case 7: *reinterpret_cast<QMargins*>(_v) = _t->cornerRadii(); break;
        case 8: *reinterpret_cast<QPoint*>(_v) = _t->iconOffset(); break;
        case 9: *reinterpret_cast<qreal*>(_v) = _t->iconRotation(); break;
        case 10: *reinterpret_cast<qreal*>(_v) = _t->iconScale(); break;
        case 11: *reinterpret_cast<qreal*>(_v) = _t->contentOpacity(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFluentStyle(*reinterpret_cast<enum ButtonStyle*>(_v)); break;
        case 1: _t->setFluentSize(*reinterpret_cast<enum ButtonSize*>(_v)); break;
        case 2: _t->setFontRole(*reinterpret_cast<Typography::FontRole*>(_v)); break;
        case 3: _t->setFluentLayout(*reinterpret_cast<enum ButtonLayout*>(_v)); break;
        case 4: _t->setFocusVisual(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setInteractionState(*reinterpret_cast<enum InteractionState*>(_v)); break;
        case 6: _t->setCriticalOnHover(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setCornerRadii(*reinterpret_cast<QMargins*>(_v)); break;
        case 8: _t->setIconOffset(*reinterpret_cast<QPoint*>(_v)); break;
        case 9: _t->setIconRotation(*reinterpret_cast<qreal*>(_v)); break;
        case 10: _t->setIconScale(*reinterpret_cast<qreal*>(_v)); break;
        case 11: _t->setContentOpacity(*reinterpret_cast<qreal*>(_v)); break;
        default: break;
        }
    }
    if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 7: _t->resetCornerRadii(); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::basicinput::Button::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::basicinput::Button::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput6ButtonE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QPushButton::qt_metacast(_clname);
}

int fluent::basicinput::Button::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void fluent::basicinput::Button::fluentStyleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fluent::basicinput::Button::fluentSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::basicinput::Button::fontRoleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void fluent::basicinput::Button::fluentLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void fluent::basicinput::Button::focusVisualChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void fluent::basicinput::Button::interactionStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void fluent::basicinput::Button::criticalOnHoverChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void fluent::basicinput::Button::cornerRadiiChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
