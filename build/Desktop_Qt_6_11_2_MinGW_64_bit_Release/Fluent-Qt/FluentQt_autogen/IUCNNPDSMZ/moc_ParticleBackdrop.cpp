/****************************************************************************
** Meta object code from reading C++ file 'ParticleBackdrop.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/layout/ParticleBackdrop.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParticleBackdrop.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent6layout16ParticleBackdropE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::layout::ParticleBackdrop::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent6layout16ParticleBackdropE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::layout::ParticleBackdrop",
        "effectChanged",
        "",
        "Effect",
        "effect",
        "animationEnabledChanged",
        "enabled",
        "animatingChanged",
        "animating",
        "gpuAccelerationEnabledChanged",
        "speedChanged",
        "speed",
        "particleCountChanged",
        "count",
        "maximumFrameRateChanged",
        "framesPerSecond",
        "interactiveChanged",
        "interactive",
        "pauseWhenInactiveChanged",
        "pause",
        "backgroundModeChanged",
        "BackgroundMode",
        "mode",
        "fadeMarginsChanged",
        "QMarginsF",
        "margins",
        "triggerRipple",
        "QPointF",
        "position",
        "animationEnabled",
        "gpuAccelerationEnabled",
        "particleCount",
        "maximumFrameRate",
        "pauseWhenInactive",
        "backgroundMode",
        "fadeMargins",
        "FlowingRibbons",
        "FloatingDots",
        "Starfield",
        "Transparent",
        "Solid"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'effectChanged'
        QtMocHelpers::SignalData<void(enum Effect)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'animationEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'animatingChanged'
        QtMocHelpers::SignalData<void(bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Signal 'gpuAccelerationEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'speedChanged'
        QtMocHelpers::SignalData<void(qreal)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 11 },
        }}),
        // Signal 'particleCountChanged'
        QtMocHelpers::SignalData<void(int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Signal 'maximumFrameRateChanged'
        QtMocHelpers::SignalData<void(int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Signal 'interactiveChanged'
        QtMocHelpers::SignalData<void(bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 17 },
        }}),
        // Signal 'pauseWhenInactiveChanged'
        QtMocHelpers::SignalData<void(bool)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Signal 'backgroundModeChanged'
        QtMocHelpers::SignalData<void(enum BackgroundMode)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Signal 'fadeMarginsChanged'
        QtMocHelpers::SignalData<void(const QMarginsF &)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 24, 25 },
        }}),
        // Method 'triggerRipple'
        QtMocHelpers::MethodData<void(const QPointF &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 27, 28 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'effect'
        QtMocHelpers::PropertyData<enum Effect>(4, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'animationEnabled'
        QtMocHelpers::PropertyData<bool>(29, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'animating'
        QtMocHelpers::PropertyData<bool>(8, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'gpuAccelerationEnabled'
        QtMocHelpers::PropertyData<bool>(30, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'speed'
        QtMocHelpers::PropertyData<qreal>(11, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'particleCount'
        QtMocHelpers::PropertyData<int>(31, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'maximumFrameRate'
        QtMocHelpers::PropertyData<int>(32, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'interactive'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'pauseWhenInactive'
        QtMocHelpers::PropertyData<bool>(33, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'backgroundMode'
        QtMocHelpers::PropertyData<enum BackgroundMode>(34, 0x80000000 | 21, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 9),
        // property 'fadeMargins'
        QtMocHelpers::PropertyData<QMarginsF>(35, 0x80000000 | 24, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 10),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Effect'
        QtMocHelpers::EnumData<enum Effect>(3, 3, QMC::EnumFlags{}).add({
            {   36, Effect::FlowingRibbons },
            {   37, Effect::FloatingDots },
            {   38, Effect::Starfield },
        }),
        // enum 'BackgroundMode'
        QtMocHelpers::EnumData<enum BackgroundMode>(21, 21, QMC::EnumFlags{}).add({
            {   39, BackgroundMode::Transparent },
            {   40, BackgroundMode::Solid },
        }),
    };
    return QtMocHelpers::metaObjectData<ParticleBackdrop, qt_meta_tag_ZN6fluent6layout16ParticleBackdropE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::layout::ParticleBackdrop::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout16ParticleBackdropE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout16ParticleBackdropE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent6layout16ParticleBackdropE_t>.metaTypes,
    nullptr
} };

void fluent::layout::ParticleBackdrop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ParticleBackdrop *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->effectChanged((*reinterpret_cast<std::add_pointer_t<enum Effect>>(_a[1]))); break;
        case 1: _t->animationEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->animatingChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->gpuAccelerationEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->speedChanged((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 5: _t->particleCountChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->maximumFrameRateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->interactiveChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->pauseWhenInactiveChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->backgroundModeChanged((*reinterpret_cast<std::add_pointer_t<enum BackgroundMode>>(_a[1]))); break;
        case 10: _t->fadeMarginsChanged((*reinterpret_cast<std::add_pointer_t<QMarginsF>>(_a[1]))); break;
        case 11: _t->triggerRipple((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ParticleBackdrop::*)(Effect )>(_a, &ParticleBackdrop::effectChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ParticleBackdrop::*)(bool )>(_a, &ParticleBackdrop::animationEnabledChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ParticleBackdrop::*)(bool )>(_a, &ParticleBackdrop::animatingChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ParticleBackdrop::*)(bool )>(_a, &ParticleBackdrop::gpuAccelerationEnabledChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ParticleBackdrop::*)(qreal )>(_a, &ParticleBackdrop::speedChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ParticleBackdrop::*)(int )>(_a, &ParticleBackdrop::particleCountChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ParticleBackdrop::*)(int )>(_a, &ParticleBackdrop::maximumFrameRateChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ParticleBackdrop::*)(bool )>(_a, &ParticleBackdrop::interactiveChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (ParticleBackdrop::*)(bool )>(_a, &ParticleBackdrop::pauseWhenInactiveChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (ParticleBackdrop::*)(BackgroundMode )>(_a, &ParticleBackdrop::backgroundModeChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (ParticleBackdrop::*)(const QMarginsF & )>(_a, &ParticleBackdrop::fadeMarginsChanged, 10))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum Effect*>(_v) = _t->effect(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isAnimationEnabled(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isAnimating(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isGpuAccelerationEnabled(); break;
        case 4: *reinterpret_cast<qreal*>(_v) = _t->speed(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->particleCount(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->maximumFrameRate(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isInteractive(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->isPauseWhenInactive(); break;
        case 9: *reinterpret_cast<enum BackgroundMode*>(_v) = _t->backgroundMode(); break;
        case 10: *reinterpret_cast<QMarginsF*>(_v) = _t->fadeMargins(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEffect(*reinterpret_cast<enum Effect*>(_v)); break;
        case 1: _t->setAnimationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setGpuAccelerationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setSpeed(*reinterpret_cast<qreal*>(_v)); break;
        case 5: _t->setParticleCount(*reinterpret_cast<int*>(_v)); break;
        case 6: _t->setMaximumFrameRate(*reinterpret_cast<int*>(_v)); break;
        case 7: _t->setInteractive(*reinterpret_cast<bool*>(_v)); break;
        case 8: _t->setPauseWhenInactive(*reinterpret_cast<bool*>(_v)); break;
        case 9: _t->setBackgroundMode(*reinterpret_cast<enum BackgroundMode*>(_v)); break;
        case 10: _t->setFadeMargins(*reinterpret_cast<QMarginsF*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::layout::ParticleBackdrop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::layout::ParticleBackdrop::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout16ParticleBackdropE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::layout::ParticleBackdrop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
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
void fluent::layout::ParticleBackdrop::effectChanged(Effect _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::layout::ParticleBackdrop::animationEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::layout::ParticleBackdrop::animatingChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::layout::ParticleBackdrop::gpuAccelerationEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::layout::ParticleBackdrop::speedChanged(qreal _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::layout::ParticleBackdrop::particleCountChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::layout::ParticleBackdrop::maximumFrameRateChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::layout::ParticleBackdrop::interactiveChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::layout::ParticleBackdrop::pauseWhenInactiveChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::layout::ParticleBackdrop::backgroundModeChanged(BackgroundMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void fluent::layout::ParticleBackdrop::fadeMarginsChanged(const QMarginsF & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}
QT_WARNING_POP
