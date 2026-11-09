/****************************************************************************
** Meta object code from reading C++ file 'Timeline.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/collections/Timeline.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Timeline.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent11collections8TimelineE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::collections::Timeline::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11collections8TimelineE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::collections::Timeline",
        "nodeAlignmentChanged",
        "",
        "NodeAlignment",
        "alignment",
        "animationEnabledChanged",
        "enabled",
        "nodeAlignment",
        "animationEnabled",
        "Leading",
        "Trailing",
        "Alternate",
        "Status",
        "Neutral",
        "Active",
        "Success",
        "Warning",
        "Error",
        "DataRole",
        "DescriptionRole",
        "TimestampRole",
        "StatusRole"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'nodeAlignmentChanged'
        QtMocHelpers::SignalData<void(enum NodeAlignment)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'animationEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'nodeAlignment'
        QtMocHelpers::PropertyData<enum NodeAlignment>(7, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'animationEnabled'
        QtMocHelpers::PropertyData<bool>(8, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'NodeAlignment'
        QtMocHelpers::EnumData<enum NodeAlignment>(3, 3, QMC::EnumFlags{}).add({
            {    9, NodeAlignment::Leading },
            {   10, NodeAlignment::Trailing },
            {   11, NodeAlignment::Alternate },
        }),
        // enum 'Status'
        QtMocHelpers::EnumData<enum Status>(12, 12, QMC::EnumFlags{}).add({
            {   13, Status::Neutral },
            {   14, Status::Active },
            {   15, Status::Success },
            {   16, Status::Warning },
            {   17, Status::Error },
        }),
        // enum 'DataRole'
        QtMocHelpers::EnumData<enum DataRole>(18, 18, QMC::EnumFlags{}).add({
            {   19, DataRole::DescriptionRole },
            {   20, DataRole::TimestampRole },
            {   21, DataRole::StatusRole },
        }),
    };
    return QtMocHelpers::metaObjectData<Timeline, qt_meta_tag_ZN6fluent11collections8TimelineE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::collections::Timeline::staticMetaObject = { {
    QMetaObject::SuperData::link<ListView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections8TimelineE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections8TimelineE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent11collections8TimelineE_t>.metaTypes,
    nullptr
} };

void fluent::collections::Timeline::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Timeline *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->nodeAlignmentChanged((*reinterpret_cast<std::add_pointer_t<enum NodeAlignment>>(_a[1]))); break;
        case 1: _t->animationEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Timeline::*)(NodeAlignment )>(_a, &Timeline::nodeAlignmentChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Timeline::*)(bool )>(_a, &Timeline::animationEnabledChanged, 1))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum NodeAlignment*>(_v) = _t->nodeAlignment(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isAnimationEnabled(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNodeAlignment(*reinterpret_cast<enum NodeAlignment*>(_v)); break;
        case 1: _t->setAnimationEnabled(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::collections::Timeline::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::collections::Timeline::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections8TimelineE_t>.strings))
        return static_cast<void*>(this);
    return ListView::qt_metacast(_clname);
}

int fluent::collections::Timeline::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
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
void fluent::collections::Timeline::nodeAlignmentChanged(NodeAlignment _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::collections::Timeline::animationEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
