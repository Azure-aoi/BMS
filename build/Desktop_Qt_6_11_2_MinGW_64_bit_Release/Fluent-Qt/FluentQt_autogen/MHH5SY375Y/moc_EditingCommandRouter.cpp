/****************************************************************************
** Meta object code from reading C++ file 'EditingCommandRouter.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/textfields/EditingCommandRouter.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditingCommandRouter.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10textfields20EditingCommandRouterE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::textfields::EditingCommandRouter::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10textfields20EditingCommandRouterE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::textfields::EditingCommandRouter",
        "activeTargetChanged",
        "",
        "hasActiveTarget",
        "commandCapabilityChanged",
        "fluent::textfields::EditingCommandRouter::Command",
        "command",
        "enabled",
        "Command",
        "Undo",
        "Redo",
        "Cut",
        "Copy",
        "Paste",
        "Delete",
        "SelectAll"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'activeTargetChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'commandCapabilityChanged'
        QtMocHelpers::SignalData<void(fluent::textfields::EditingCommandRouter::Command, bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { QMetaType::Bool, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Command'
        QtMocHelpers::EnumData<enum Command>(8, 8, QMC::EnumIsScoped).add({
            {    9, Command::Undo },
            {   10, Command::Redo },
            {   11, Command::Cut },
            {   12, Command::Copy },
            {   13, Command::Paste },
            {   14, Command::Delete },
            {   15, Command::SelectAll },
        }),
    };
    return QtMocHelpers::metaObjectData<EditingCommandRouter, qt_meta_tag_ZN6fluent10textfields20EditingCommandRouterE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::textfields::EditingCommandRouter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields20EditingCommandRouterE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields20EditingCommandRouterE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10textfields20EditingCommandRouterE_t>.metaTypes,
    nullptr
} };

void fluent::textfields::EditingCommandRouter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditingCommandRouter *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activeTargetChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->commandCapabilityChanged((*reinterpret_cast<std::add_pointer_t<fluent::textfields::EditingCommandRouter::Command>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fluent::textfields::EditingCommandRouter::Command >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (EditingCommandRouter::*)(bool )>(_a, &EditingCommandRouter::activeTargetChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (EditingCommandRouter::*)(fluent::textfields::EditingCommandRouter::Command , bool )>(_a, &EditingCommandRouter::commandCapabilityChanged, 1))
            return;
    }
}

const QMetaObject *fluent::textfields::EditingCommandRouter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::textfields::EditingCommandRouter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields20EditingCommandRouterE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int fluent::textfields::EditingCommandRouter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void fluent::textfields::EditingCommandRouter::activeTargetChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::textfields::EditingCommandRouter::commandCapabilityChanged(fluent::textfields::EditingCommandRouter::Command _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}
QT_WARNING_POP
