/****************************************************************************
** Meta object code from reading C++ file 'Shimmer.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/status_info/Shimmer.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Shimmer.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent11status_info7ShimmerE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::status_info::Shimmer::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11status_info7ShimmerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::status_info::Shimmer",
        "activeChanged",
        "",
        "active",
        "animationEnabledChanged",
        "enabled",
        "shimmerProgressChanged",
        "progress",
        "cycleDurationChanged",
        "durationMs",
        "shimmerTemplateChanged",
        "ShimmerTemplate",
        "templateKind",
        "elementsChanged",
        "animationEnabled",
        "shimmerProgress",
        "cycleDuration",
        "shimmerTemplate",
        "Custom",
        "ImageCard",
        "AvatarTextRow",
        "TextBlock"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'activeChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'animationEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Signal 'shimmerProgressChanged'
        QtMocHelpers::SignalData<void(qreal)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 7 },
        }}),
        // Signal 'cycleDurationChanged'
        QtMocHelpers::SignalData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Signal 'shimmerTemplateChanged'
        QtMocHelpers::SignalData<void(enum ShimmerTemplate)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'elementsChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'active'
        QtMocHelpers::PropertyData<bool>(3, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'animationEnabled'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'shimmerProgress'
        QtMocHelpers::PropertyData<qreal>(15, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'cycleDuration'
        QtMocHelpers::PropertyData<int>(16, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'shimmerTemplate'
        QtMocHelpers::PropertyData<enum ShimmerTemplate>(17, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ShimmerTemplate'
        QtMocHelpers::EnumData<enum ShimmerTemplate>(11, 11, QMC::EnumIsScoped).add({
            {   18, ShimmerTemplate::Custom },
            {   19, ShimmerTemplate::ImageCard },
            {   20, ShimmerTemplate::AvatarTextRow },
            {   21, ShimmerTemplate::TextBlock },
        }),
    };
    return QtMocHelpers::metaObjectData<Shimmer, qt_meta_tag_ZN6fluent11status_info7ShimmerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::status_info::Shimmer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info7ShimmerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info7ShimmerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent11status_info7ShimmerE_t>.metaTypes,
    nullptr
} };

void fluent::status_info::Shimmer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Shimmer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activeChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->animationEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->shimmerProgressChanged((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 3: _t->cycleDurationChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->shimmerTemplateChanged((*reinterpret_cast<std::add_pointer_t<enum ShimmerTemplate>>(_a[1]))); break;
        case 5: _t->elementsChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Shimmer::*)(bool )>(_a, &Shimmer::activeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Shimmer::*)(bool )>(_a, &Shimmer::animationEnabledChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Shimmer::*)(qreal )>(_a, &Shimmer::shimmerProgressChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Shimmer::*)(int )>(_a, &Shimmer::cycleDurationChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Shimmer::*)(ShimmerTemplate )>(_a, &Shimmer::shimmerTemplateChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Shimmer::*)()>(_a, &Shimmer::elementsChanged, 5))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isActive(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isAnimationEnabled(); break;
        case 2: *reinterpret_cast<qreal*>(_v) = _t->shimmerProgress(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->cycleDuration(); break;
        case 4: *reinterpret_cast<enum ShimmerTemplate*>(_v) = _t->shimmerTemplate(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActive(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setAnimationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setShimmerProgress(*reinterpret_cast<qreal*>(_v)); break;
        case 3: _t->setCycleDuration(*reinterpret_cast<int*>(_v)); break;
        case 4: _t->setShimmerTemplate(*reinterpret_cast<enum ShimmerTemplate*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::status_info::Shimmer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::status_info::Shimmer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info7ShimmerE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::status_info::Shimmer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void fluent::status_info::Shimmer::activeChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::status_info::Shimmer::animationEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::status_info::Shimmer::shimmerProgressChanged(qreal _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::status_info::Shimmer::cycleDurationChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::status_info::Shimmer::shimmerTemplateChanged(ShimmerTemplate _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::status_info::Shimmer::elementsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
