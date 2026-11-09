/****************************************************************************
** Meta object code from reading C++ file 'TitleBar.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/windowing/TitleBar.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TitleBar.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent9windowing8TitleBarE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::windowing::TitleBar::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent9windowing8TitleBarE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::windowing::TitleBar",
        "contentWidgetChanged",
        "",
        "QWidget*",
        "widget",
        "systemReservedLeadingWidthChanged",
        "width",
        "systemReservedTrailingWidthChanged",
        "titleBarHeightChanged",
        "height",
        "windowActiveChanged",
        "active",
        "dragStarted",
        "QPoint",
        "globalPos",
        "dragMoved",
        "dragFinished",
        "doubleClicked",
        "contextMenuRequested",
        "chromeGeometryChanged",
        "contentWidget",
        "systemReservedLeadingWidth",
        "systemReservedTrailingWidth",
        "titleBarHeight",
        "windowActive"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'contentWidgetChanged'
        QtMocHelpers::SignalData<void(QWidget *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'systemReservedLeadingWidthChanged'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Signal 'systemReservedTrailingWidthChanged'
        QtMocHelpers::SignalData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Signal 'titleBarHeightChanged'
        QtMocHelpers::SignalData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Signal 'windowActiveChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Signal 'dragStarted'
        QtMocHelpers::SignalData<void(const QPoint &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'dragMoved'
        QtMocHelpers::SignalData<void(const QPoint &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'dragFinished'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'doubleClicked'
        QtMocHelpers::SignalData<void(const QPoint &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'contextMenuRequested'
        QtMocHelpers::SignalData<void(const QPoint &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'chromeGeometryChanged'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'contentWidget'
        QtMocHelpers::PropertyData<QWidget*>(20, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'systemReservedLeadingWidth'
        QtMocHelpers::PropertyData<int>(21, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'systemReservedTrailingWidth'
        QtMocHelpers::PropertyData<int>(22, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'titleBarHeight'
        QtMocHelpers::PropertyData<int>(23, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'windowActive'
        QtMocHelpers::PropertyData<bool>(24, QMetaType::Bool, QMC::DefaultPropertyFlags, 4),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TitleBar, qt_meta_tag_ZN6fluent9windowing8TitleBarE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::windowing::TitleBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9windowing8TitleBarE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9windowing8TitleBarE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent9windowing8TitleBarE_t>.metaTypes,
    nullptr
} };

void fluent::windowing::TitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TitleBar *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->contentWidgetChanged((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 1: _t->systemReservedLeadingWidthChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->systemReservedTrailingWidthChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->titleBarHeightChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->windowActiveChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->dragStarted((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 6: _t->dragMoved((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 7: _t->dragFinished(); break;
        case 8: _t->doubleClicked((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 9: _t->contextMenuRequested((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 10: _t->chromeGeometryChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TitleBar::*)(QWidget * )>(_a, &TitleBar::contentWidgetChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TitleBar::*)(int )>(_a, &TitleBar::systemReservedLeadingWidthChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TitleBar::*)(int )>(_a, &TitleBar::systemReservedTrailingWidthChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TitleBar::*)(int )>(_a, &TitleBar::titleBarHeightChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TitleBar::*)(bool )>(_a, &TitleBar::windowActiveChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TitleBar::*)(const QPoint & )>(_a, &TitleBar::dragStarted, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (TitleBar::*)(const QPoint & )>(_a, &TitleBar::dragMoved, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (TitleBar::*)()>(_a, &TitleBar::dragFinished, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (TitleBar::*)(const QPoint & )>(_a, &TitleBar::doubleClicked, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (TitleBar::*)(const QPoint & )>(_a, &TitleBar::contextMenuRequested, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (TitleBar::*)()>(_a, &TitleBar::chromeGeometryChanged, 10))
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
        case 1: *reinterpret_cast<int*>(_v) = _t->systemReservedLeadingWidth(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->systemReservedTrailingWidth(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->titleBarHeight(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isWindowActive(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setContentWidget(*reinterpret_cast<QWidget**>(_v)); break;
        case 1: _t->setSystemReservedLeadingWidth(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setSystemReservedTrailingWidth(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setTitleBarHeight(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::windowing::TitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::windowing::TitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9windowing8TitleBarE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::windowing::TitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
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
void fluent::windowing::TitleBar::contentWidgetChanged(QWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::windowing::TitleBar::systemReservedLeadingWidthChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::windowing::TitleBar::systemReservedTrailingWidthChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::windowing::TitleBar::titleBarHeightChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::windowing::TitleBar::windowActiveChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::windowing::TitleBar::dragStarted(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::windowing::TitleBar::dragMoved(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::windowing::TitleBar::dragFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void fluent::windowing::TitleBar::doubleClicked(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::windowing::TitleBar::contextMenuRequested(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void fluent::windowing::TitleBar::chromeGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
