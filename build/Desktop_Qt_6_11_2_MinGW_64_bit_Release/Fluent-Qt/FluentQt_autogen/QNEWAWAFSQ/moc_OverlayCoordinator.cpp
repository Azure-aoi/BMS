/****************************************************************************
** Meta object code from reading C++ file 'OverlayCoordinator.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/foundation/overlay/OverlayCoordinator.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OverlayCoordinator.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent7overlay18OverlayCoordinatorE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::overlay::OverlayCoordinator::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent7overlay18OverlayCoordinatorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::overlay::OverlayCoordinator",
        "hostGeometryChanged",
        "",
        "hostDestroyed",
        "scrimPressed",
        "QPoint",
        "globalPos",
        "dismissRequested",
        "DismissReason",
        "reason"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'hostGeometryChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hostDestroyed'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scrimPressed'
        QtMocHelpers::SignalData<void(const QPoint &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'dismissRequested'
        QtMocHelpers::SignalData<void(enum DismissReason)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OverlayCoordinator, qt_meta_tag_ZN6fluent7overlay18OverlayCoordinatorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::overlay::OverlayCoordinator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent7overlay18OverlayCoordinatorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent7overlay18OverlayCoordinatorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent7overlay18OverlayCoordinatorE_t>.metaTypes,
    nullptr
} };

void fluent::overlay::OverlayCoordinator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OverlayCoordinator *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->hostGeometryChanged(); break;
        case 1: _t->hostDestroyed(); break;
        case 2: _t->scrimPressed((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 3: _t->dismissRequested((*reinterpret_cast<std::add_pointer_t<enum DismissReason>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OverlayCoordinator::*)()>(_a, &OverlayCoordinator::hostGeometryChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OverlayCoordinator::*)()>(_a, &OverlayCoordinator::hostDestroyed, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (OverlayCoordinator::*)(const QPoint & )>(_a, &OverlayCoordinator::scrimPressed, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (OverlayCoordinator::*)(DismissReason )>(_a, &OverlayCoordinator::dismissRequested, 3))
            return;
    }
}

const QMetaObject *fluent::overlay::OverlayCoordinator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::overlay::OverlayCoordinator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent7overlay18OverlayCoordinatorE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int fluent::overlay::OverlayCoordinator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void fluent::overlay::OverlayCoordinator::hostGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fluent::overlay::OverlayCoordinator::hostDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::overlay::OverlayCoordinator::scrimPressed(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::overlay::OverlayCoordinator::dismissRequested(DismissReason _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
