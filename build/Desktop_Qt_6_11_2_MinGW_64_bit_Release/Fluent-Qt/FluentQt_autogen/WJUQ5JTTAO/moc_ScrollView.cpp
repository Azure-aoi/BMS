/****************************************************************************
** Meta object code from reading C++ file 'ScrollView.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/scrolling/ScrollView.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScrollView.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent9scrolling10ScrollViewE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::scrolling::ScrollView::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent9scrolling10ScrollViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::scrolling::ScrollView",
        "horizontalScrollModeChanged",
        "",
        "verticalScrollModeChanged",
        "horizontalScrollBarVisibilityChanged",
        "verticalScrollBarVisibilityChanged",
        "zoomModeChanged",
        "zoomFactorChanged",
        "minZoomFactorChanged",
        "maxZoomFactorChanged",
        "scrollChainingEnabledChanged",
        "scrollPositionChanged",
        "horizontalOffset",
        "verticalOffset",
        "contentWidgetChanged",
        "QWidget*",
        "widget",
        "contentOwnershipChanged",
        "WidgetOwnership",
        "ownership",
        "scrollTo",
        "x",
        "y",
        "animated",
        "scrollBy",
        "dx",
        "dy",
        "zoomTo",
        "factor",
        "zoomBy",
        "factorMultiplier",
        "resetZoom",
        "horizontalScrollMode",
        "ScrollMode",
        "verticalScrollMode",
        "horizontalScrollBarVisibility",
        "ScrollBarVisibility",
        "verticalScrollBarVisibility",
        "zoomMode",
        "ZoomMode",
        "zoomFactor",
        "minZoomFactor",
        "maxZoomFactor",
        "scrollChainingEnabled",
        "contentWidget",
        "contentOwnership",
        "fluent::WidgetOwnership",
        "Disabled",
        "Enabled",
        "Auto",
        "Visible",
        "Hidden"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'horizontalScrollModeChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'verticalScrollModeChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'horizontalScrollBarVisibilityChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'verticalScrollBarVisibilityChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'zoomModeChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'zoomFactorChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'minZoomFactorChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'maxZoomFactorChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scrollChainingEnabledChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scrollPositionChanged'
        QtMocHelpers::SignalData<void(int, int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
        }}),
        // Signal 'contentWidgetChanged'
        QtMocHelpers::SignalData<void(QWidget *)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Signal 'contentOwnershipChanged'
        QtMocHelpers::SignalData<void(WidgetOwnership)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Method 'scrollTo'
        QtMocHelpers::MethodData<void(int, int, bool)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 21 }, { QMetaType::Int, 22 }, { QMetaType::Bool, 23 },
        }}),
        // Method 'scrollTo'
        QtMocHelpers::MethodData<void(int, int)>(20, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Int, 21 }, { QMetaType::Int, 22 },
        }}),
        // Method 'scrollBy'
        QtMocHelpers::MethodData<void(int, int, bool)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 25 }, { QMetaType::Int, 26 }, { QMetaType::Bool, 23 },
        }}),
        // Method 'scrollBy'
        QtMocHelpers::MethodData<void(int, int)>(24, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Int, 25 }, { QMetaType::Int, 26 },
        }}),
        // Method 'zoomTo'
        QtMocHelpers::MethodData<void(qreal, bool)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 28 }, { QMetaType::Bool, 23 },
        }}),
        // Method 'zoomTo'
        QtMocHelpers::MethodData<void(qreal)>(27, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QReal, 28 },
        }}),
        // Method 'zoomBy'
        QtMocHelpers::MethodData<void(qreal, bool)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 30 }, { QMetaType::Bool, 23 },
        }}),
        // Method 'zoomBy'
        QtMocHelpers::MethodData<void(qreal)>(29, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QReal, 30 },
        }}),
        // Method 'resetZoom'
        QtMocHelpers::MethodData<void(bool)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Method 'resetZoom'
        QtMocHelpers::MethodData<void()>(31, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'horizontalScrollMode'
        QtMocHelpers::PropertyData<enum ScrollMode>(32, 0x80000000 | 33, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'verticalScrollMode'
        QtMocHelpers::PropertyData<enum ScrollMode>(34, 0x80000000 | 33, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'horizontalScrollBarVisibility'
        QtMocHelpers::PropertyData<enum ScrollBarVisibility>(35, 0x80000000 | 36, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'verticalScrollBarVisibility'
        QtMocHelpers::PropertyData<enum ScrollBarVisibility>(37, 0x80000000 | 36, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
        // property 'zoomMode'
        QtMocHelpers::PropertyData<enum ZoomMode>(38, 0x80000000 | 39, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
        // property 'zoomFactor'
        QtMocHelpers::PropertyData<qreal>(40, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'minZoomFactor'
        QtMocHelpers::PropertyData<qreal>(41, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'maxZoomFactor'
        QtMocHelpers::PropertyData<qreal>(42, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'scrollChainingEnabled'
        QtMocHelpers::PropertyData<bool>(43, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'contentWidget'
        QtMocHelpers::PropertyData<QWidget*>(44, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 10),
        // property 'contentOwnership'
        QtMocHelpers::PropertyData<fluent::WidgetOwnership>(45, 0x80000000 | 46, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 11),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ScrollMode'
        QtMocHelpers::EnumData<enum ScrollMode>(33, 33, QMC::EnumIsScoped).add({
            {   47, ScrollMode::Disabled },
            {   48, ScrollMode::Enabled },
            {   49, ScrollMode::Auto },
        }),
        // enum 'ScrollBarVisibility'
        QtMocHelpers::EnumData<enum ScrollBarVisibility>(36, 36, QMC::EnumIsScoped).add({
            {   47, ScrollBarVisibility::Disabled },
            {   49, ScrollBarVisibility::Auto },
            {   50, ScrollBarVisibility::Visible },
            {   51, ScrollBarVisibility::Hidden },
        }),
        // enum 'ZoomMode'
        QtMocHelpers::EnumData<enum ZoomMode>(39, 39, QMC::EnumIsScoped).add({
            {   47, ZoomMode::Disabled },
            {   48, ZoomMode::Enabled },
        }),
    };
    return QtMocHelpers::metaObjectData<ScrollView, qt_meta_tag_ZN6fluent9scrolling10ScrollViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN6fluent9scrolling10ScrollViewE[] = {
    QMetaObject::SuperData::link<fluent::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject fluent::scrolling::ScrollView::staticMetaObject = { {
    QMetaObject::SuperData::link<QScrollArea::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9scrolling10ScrollViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9scrolling10ScrollViewE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN6fluent9scrolling10ScrollViewE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent9scrolling10ScrollViewE_t>.metaTypes,
    nullptr
} };

void fluent::scrolling::ScrollView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScrollView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->horizontalScrollModeChanged(); break;
        case 1: _t->verticalScrollModeChanged(); break;
        case 2: _t->horizontalScrollBarVisibilityChanged(); break;
        case 3: _t->verticalScrollBarVisibilityChanged(); break;
        case 4: _t->zoomModeChanged(); break;
        case 5: _t->zoomFactorChanged(); break;
        case 6: _t->minZoomFactorChanged(); break;
        case 7: _t->maxZoomFactorChanged(); break;
        case 8: _t->scrollChainingEnabledChanged(); break;
        case 9: _t->scrollPositionChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 10: _t->contentWidgetChanged((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 11: _t->contentOwnershipChanged((*reinterpret_cast<std::add_pointer_t<WidgetOwnership>>(_a[1]))); break;
        case 12: _t->scrollTo((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 13: _t->scrollTo((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 14: _t->scrollBy((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3]))); break;
        case 15: _t->scrollBy((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 16: _t->zoomTo((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 17: _t->zoomTo((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 18: _t->zoomBy((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 19: _t->zoomBy((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 20: _t->resetZoom((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->resetZoom(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ScrollView::*)()>(_a, &ScrollView::horizontalScrollModeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScrollView::*)()>(_a, &ScrollView::verticalScrollModeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScrollView::*)()>(_a, &ScrollView::horizontalScrollBarVisibilityChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScrollView::*)()>(_a, &ScrollView::verticalScrollBarVisibilityChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScrollView::*)()>(_a, &ScrollView::zoomModeChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScrollView::*)()>(_a, &ScrollView::zoomFactorChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScrollView::*)()>(_a, &ScrollView::minZoomFactorChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScrollView::*)()>(_a, &ScrollView::maxZoomFactorChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScrollView::*)()>(_a, &ScrollView::scrollChainingEnabledChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScrollView::*)(int , int )>(_a, &ScrollView::scrollPositionChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScrollView::*)(QWidget * )>(_a, &ScrollView::contentWidgetChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScrollView::*)(WidgetOwnership )>(_a, &ScrollView::contentOwnershipChanged, 11))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
        case 10:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< fluent::WidgetOwnership >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum ScrollMode*>(_v) = _t->horizontalScrollMode(); break;
        case 1: *reinterpret_cast<enum ScrollMode*>(_v) = _t->verticalScrollMode(); break;
        case 2: *reinterpret_cast<enum ScrollBarVisibility*>(_v) = _t->horizontalScrollBarVisibility(); break;
        case 3: *reinterpret_cast<enum ScrollBarVisibility*>(_v) = _t->verticalScrollBarVisibility(); break;
        case 4: *reinterpret_cast<enum ZoomMode*>(_v) = _t->zoomMode(); break;
        case 5: *reinterpret_cast<qreal*>(_v) = _t->zoomFactor(); break;
        case 6: *reinterpret_cast<qreal*>(_v) = _t->minZoomFactor(); break;
        case 7: *reinterpret_cast<qreal*>(_v) = _t->maxZoomFactor(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->isScrollChainingEnabled(); break;
        case 9: *reinterpret_cast<QWidget**>(_v) = _t->contentWidget(); break;
        case 10: *reinterpret_cast<fluent::WidgetOwnership*>(_v) = _t->contentOwnership(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHorizontalScrollMode(*reinterpret_cast<enum ScrollMode*>(_v)); break;
        case 1: _t->setVerticalScrollMode(*reinterpret_cast<enum ScrollMode*>(_v)); break;
        case 2: _t->setHorizontalScrollBarVisibility(*reinterpret_cast<enum ScrollBarVisibility*>(_v)); break;
        case 3: _t->setVerticalScrollBarVisibility(*reinterpret_cast<enum ScrollBarVisibility*>(_v)); break;
        case 4: _t->setZoomMode(*reinterpret_cast<enum ZoomMode*>(_v)); break;
        case 5: _t->setZoomFactor(*reinterpret_cast<qreal*>(_v)); break;
        case 6: _t->setMinZoomFactor(*reinterpret_cast<qreal*>(_v)); break;
        case 7: _t->setMaxZoomFactor(*reinterpret_cast<qreal*>(_v)); break;
        case 8: _t->setScrollChainingEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 9: _t->setContentWidget(*reinterpret_cast<QWidget**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::scrolling::ScrollView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::scrolling::ScrollView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent9scrolling10ScrollViewE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int fluent::scrolling::ScrollView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
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
void fluent::scrolling::ScrollView::horizontalScrollModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fluent::scrolling::ScrollView::verticalScrollModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::scrolling::ScrollView::horizontalScrollBarVisibilityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void fluent::scrolling::ScrollView::verticalScrollBarVisibilityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void fluent::scrolling::ScrollView::zoomModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void fluent::scrolling::ScrollView::zoomFactorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void fluent::scrolling::ScrollView::minZoomFactorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void fluent::scrolling::ScrollView::maxZoomFactorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void fluent::scrolling::ScrollView::scrollChainingEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void fluent::scrolling::ScrollView::scrollPositionChanged(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1, _t2);
}

// SIGNAL 10
void fluent::scrolling::ScrollView::contentWidgetChanged(QWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void fluent::scrolling::ScrollView::contentOwnershipChanged(WidgetOwnership _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}
QT_WARNING_POP
