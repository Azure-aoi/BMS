/****************************************************************************
** Meta object code from reading C++ file 'SplitView.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/collections/SplitView.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SplitView.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent11collections9SplitViewE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::collections::SplitView::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11collections9SplitViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::collections::SplitView",
        "orientationChanged",
        "",
        "Qt::Orientation",
        "orientation",
        "resizingChanged",
        "resizing",
        "handleWidthChanged",
        "width",
        "handleVisualThicknessChanged",
        "thickness",
        "fillPaneIndexChanged",
        "index",
        "defaultSizeHintChanged",
        "QSize",
        "size",
        "defaultMinimumSizeHintChanged",
        "paneCountChanged",
        "count",
        "paneAdded",
        "QWidget*",
        "pane",
        "paneRemoved",
        "paneConfigurationChanged",
        "paneSizeChanged",
        "handleWidth",
        "handleVisualThickness",
        "fillPaneIndex",
        "defaultSizeHint",
        "defaultMinimumSizeHint"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'orientationChanged'
        QtMocHelpers::SignalData<void(Qt::Orientation)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'resizingChanged'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'handleWidthChanged'
        QtMocHelpers::SignalData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Signal 'handleVisualThicknessChanged'
        QtMocHelpers::SignalData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Signal 'fillPaneIndexChanged'
        QtMocHelpers::SignalData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Signal 'defaultSizeHintChanged'
        QtMocHelpers::SignalData<void(const QSize &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Signal 'defaultMinimumSizeHintChanged'
        QtMocHelpers::SignalData<void(const QSize &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Signal 'paneCountChanged'
        QtMocHelpers::SignalData<void(int)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 18 },
        }}),
        // Signal 'paneAdded'
        QtMocHelpers::SignalData<void(int, QWidget *)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { 0x80000000 | 20, 21 },
        }}),
        // Signal 'paneRemoved'
        QtMocHelpers::SignalData<void(int, QWidget *)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { 0x80000000 | 20, 21 },
        }}),
        // Signal 'paneConfigurationChanged'
        QtMocHelpers::SignalData<void(int)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Signal 'paneSizeChanged'
        QtMocHelpers::SignalData<void(int, int)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { QMetaType::Int, 15 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'orientation'
        QtMocHelpers::PropertyData<Qt::Orientation>(4, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'resizing'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags, 1),
        // property 'handleWidth'
        QtMocHelpers::PropertyData<int>(25, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'handleVisualThickness'
        QtMocHelpers::PropertyData<int>(26, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'fillPaneIndex'
        QtMocHelpers::PropertyData<int>(27, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'defaultSizeHint'
        QtMocHelpers::PropertyData<QSize>(28, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 5),
        // property 'defaultMinimumSizeHint'
        QtMocHelpers::PropertyData<QSize>(29, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 6),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SplitView, qt_meta_tag_ZN6fluent11collections9SplitViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::collections::SplitView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections9SplitViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections9SplitViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent11collections9SplitViewE_t>.metaTypes,
    nullptr
} };

void fluent::collections::SplitView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SplitView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->orientationChanged((*reinterpret_cast<std::add_pointer_t<Qt::Orientation>>(_a[1]))); break;
        case 1: _t->resizingChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->handleWidthChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->handleVisualThicknessChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->fillPaneIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->defaultSizeHintChanged((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 6: _t->defaultMinimumSizeHintChanged((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 7: _t->paneCountChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->paneAdded((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[2]))); break;
        case 9: _t->paneRemoved((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[2]))); break;
        case 10: _t->paneConfigurationChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->paneSizeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SplitView::*)(Qt::Orientation )>(_a, &SplitView::orientationChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplitView::*)(bool )>(_a, &SplitView::resizingChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplitView::*)(int )>(_a, &SplitView::handleWidthChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplitView::*)(int )>(_a, &SplitView::handleVisualThicknessChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplitView::*)(int )>(_a, &SplitView::fillPaneIndexChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplitView::*)(const QSize & )>(_a, &SplitView::defaultSizeHintChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplitView::*)(const QSize & )>(_a, &SplitView::defaultMinimumSizeHintChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplitView::*)(int )>(_a, &SplitView::paneCountChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplitView::*)(int , QWidget * )>(_a, &SplitView::paneAdded, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplitView::*)(int , QWidget * )>(_a, &SplitView::paneRemoved, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplitView::*)(int )>(_a, &SplitView::paneConfigurationChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplitView::*)(int , int )>(_a, &SplitView::paneSizeChanged, 11))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<Qt::Orientation*>(_v) = _t->orientation(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->resizing(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->handleWidth(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->handleVisualThickness(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->fillPaneIndex(); break;
        case 5: *reinterpret_cast<QSize*>(_v) = _t->defaultSizeHint(); break;
        case 6: *reinterpret_cast<QSize*>(_v) = _t->defaultMinimumSizeHint(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOrientation(*reinterpret_cast<Qt::Orientation*>(_v)); break;
        case 2: _t->setHandleWidth(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setHandleVisualThickness(*reinterpret_cast<int*>(_v)); break;
        case 4: _t->setFillPaneIndex(*reinterpret_cast<int*>(_v)); break;
        case 5: _t->setDefaultSizeHint(*reinterpret_cast<QSize*>(_v)); break;
        case 6: _t->setDefaultMinimumSizeHint(*reinterpret_cast<QSize*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::collections::SplitView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::collections::SplitView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections9SplitViewE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::collections::SplitView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void fluent::collections::SplitView::orientationChanged(Qt::Orientation _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::collections::SplitView::resizingChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::collections::SplitView::handleWidthChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::collections::SplitView::handleVisualThicknessChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::collections::SplitView::fillPaneIndexChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::collections::SplitView::defaultSizeHintChanged(const QSize & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::collections::SplitView::defaultMinimumSizeHintChanged(const QSize & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::collections::SplitView::paneCountChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::collections::SplitView::paneAdded(int _t1, QWidget * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1, _t2);
}

// SIGNAL 9
void fluent::collections::SplitView::paneRemoved(int _t1, QWidget * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1, _t2);
}

// SIGNAL 10
void fluent::collections::SplitView::paneConfigurationChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void fluent::collections::SplitView::paneSizeChanged(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1, _t2);
}
QT_WARNING_POP
