/****************************************************************************
** Meta object code from reading C++ file 'NavigationView.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/navigation/NavigationView.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NavigationView.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10navigation14NavigationViewE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::navigation::NavigationView::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10navigation14NavigationViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::navigation::NavigationView",
        "displayModeChanged",
        "",
        "DisplayMode",
        "mode",
        "effectiveDisplayModeChanged",
        "paneOpenChanged",
        "open",
        "compactModeThresholdWidthChanged",
        "width",
        "expandedModeThresholdWidthChanged",
        "expandedPaneWidthChanged",
        "compactPaneWidthChanged",
        "topBarHeightChanged",
        "height",
        "animationEnabledChanged",
        "enabled",
        "headerChromeWidgetChanged",
        "QWidget*",
        "widget",
        "mainChromeWidgetChanged",
        "footerChromeWidgetChanged",
        "displayMode",
        "effectiveDisplayMode",
        "paneOpen",
        "compactModeThresholdWidth",
        "expandedModeThresholdWidth",
        "expandedPaneWidth",
        "compactPaneWidth",
        "topBarHeight",
        "animationEnabled",
        "layoutTransitionProgress",
        "Auto",
        "Left",
        "LeftCompact",
        "LeftMinimal",
        "Top"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'displayModeChanged'
        QtMocHelpers::SignalData<void(enum DisplayMode)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'effectiveDisplayModeChanged'
        QtMocHelpers::SignalData<void(enum DisplayMode)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'paneOpenChanged'
        QtMocHelpers::SignalData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Signal 'compactModeThresholdWidthChanged'
        QtMocHelpers::SignalData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Signal 'expandedModeThresholdWidthChanged'
        QtMocHelpers::SignalData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Signal 'expandedPaneWidthChanged'
        QtMocHelpers::SignalData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Signal 'compactPaneWidthChanged'
        QtMocHelpers::SignalData<void(int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Signal 'topBarHeightChanged'
        QtMocHelpers::SignalData<void(int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 14 },
        }}),
        // Signal 'animationEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 16 },
        }}),
        // Signal 'headerChromeWidgetChanged'
        QtMocHelpers::SignalData<void(QWidget *)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Signal 'mainChromeWidgetChanged'
        QtMocHelpers::SignalData<void(QWidget *)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Signal 'footerChromeWidgetChanged'
        QtMocHelpers::SignalData<void(QWidget *)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'displayMode'
        QtMocHelpers::PropertyData<enum DisplayMode>(22, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'effectiveDisplayMode'
        QtMocHelpers::PropertyData<enum DisplayMode>(23, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 1),
        // property 'paneOpen'
        QtMocHelpers::PropertyData<bool>(24, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'compactModeThresholdWidth'
        QtMocHelpers::PropertyData<int>(25, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'expandedModeThresholdWidth'
        QtMocHelpers::PropertyData<int>(26, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'expandedPaneWidth'
        QtMocHelpers::PropertyData<int>(27, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'compactPaneWidth'
        QtMocHelpers::PropertyData<int>(28, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'topBarHeight'
        QtMocHelpers::PropertyData<int>(29, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'animationEnabled'
        QtMocHelpers::PropertyData<bool>(30, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'layoutTransitionProgress'
        QtMocHelpers::PropertyData<qreal>(31, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'DisplayMode'
        QtMocHelpers::EnumData<enum DisplayMode>(3, 3, QMC::EnumIsScoped).add({
            {   32, DisplayMode::Auto },
            {   33, DisplayMode::Left },
            {   34, DisplayMode::LeftCompact },
            {   35, DisplayMode::LeftMinimal },
            {   36, DisplayMode::Top },
        }),
    };
    return QtMocHelpers::metaObjectData<NavigationView, qt_meta_tag_ZN6fluent10navigation14NavigationViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::navigation::NavigationView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10navigation14NavigationViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10navigation14NavigationViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10navigation14NavigationViewE_t>.metaTypes,
    nullptr
} };

void fluent::navigation::NavigationView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NavigationView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->displayModeChanged((*reinterpret_cast<std::add_pointer_t<enum DisplayMode>>(_a[1]))); break;
        case 1: _t->effectiveDisplayModeChanged((*reinterpret_cast<std::add_pointer_t<enum DisplayMode>>(_a[1]))); break;
        case 2: _t->paneOpenChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->compactModeThresholdWidthChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->expandedModeThresholdWidthChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->expandedPaneWidthChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->compactPaneWidthChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->topBarHeightChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->animationEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->headerChromeWidgetChanged((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 10: _t->mainChromeWidgetChanged((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 11: _t->footerChromeWidgetChanged((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (NavigationView::*)(DisplayMode )>(_a, &NavigationView::displayModeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationView::*)(DisplayMode )>(_a, &NavigationView::effectiveDisplayModeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationView::*)(bool )>(_a, &NavigationView::paneOpenChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationView::*)(int )>(_a, &NavigationView::compactModeThresholdWidthChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationView::*)(int )>(_a, &NavigationView::expandedModeThresholdWidthChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationView::*)(int )>(_a, &NavigationView::expandedPaneWidthChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationView::*)(int )>(_a, &NavigationView::compactPaneWidthChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationView::*)(int )>(_a, &NavigationView::topBarHeightChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationView::*)(bool )>(_a, &NavigationView::animationEnabledChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationView::*)(QWidget * )>(_a, &NavigationView::headerChromeWidgetChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationView::*)(QWidget * )>(_a, &NavigationView::mainChromeWidgetChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (NavigationView::*)(QWidget * )>(_a, &NavigationView::footerChromeWidgetChanged, 11))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum DisplayMode*>(_v) = _t->displayMode(); break;
        case 1: *reinterpret_cast<enum DisplayMode*>(_v) = _t->effectiveDisplayMode(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isPaneOpen(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->compactModeThresholdWidth(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->expandedModeThresholdWidth(); break;
        case 5: *reinterpret_cast<int*>(_v) = _t->expandedPaneWidth(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->compactPaneWidth(); break;
        case 7: *reinterpret_cast<int*>(_v) = _t->topBarHeight(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->isAnimationEnabled(); break;
        case 9: *reinterpret_cast<qreal*>(_v) = _t->layoutTransitionProgress(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDisplayMode(*reinterpret_cast<enum DisplayMode*>(_v)); break;
        case 2: _t->setPaneOpen(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setCompactModeThresholdWidth(*reinterpret_cast<int*>(_v)); break;
        case 4: _t->setExpandedModeThresholdWidth(*reinterpret_cast<int*>(_v)); break;
        case 5: _t->setExpandedPaneWidth(*reinterpret_cast<int*>(_v)); break;
        case 6: _t->setCompactPaneWidth(*reinterpret_cast<int*>(_v)); break;
        case 7: _t->setTopBarHeight(*reinterpret_cast<int*>(_v)); break;
        case 8: _t->setAnimationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 9: _t->setLayoutTransitionProgress(*reinterpret_cast<qreal*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::navigation::NavigationView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::navigation::NavigationView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10navigation14NavigationViewE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::navigation::NavigationView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void fluent::navigation::NavigationView::displayModeChanged(DisplayMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::navigation::NavigationView::effectiveDisplayModeChanged(DisplayMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::navigation::NavigationView::paneOpenChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::navigation::NavigationView::compactModeThresholdWidthChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::navigation::NavigationView::expandedModeThresholdWidthChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::navigation::NavigationView::expandedPaneWidthChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::navigation::NavigationView::compactPaneWidthChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::navigation::NavigationView::topBarHeightChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::navigation::NavigationView::animationEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::navigation::NavigationView::headerChromeWidgetChanged(QWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void fluent::navigation::NavigationView::mainChromeWidgetChanged(QWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void fluent::navigation::NavigationView::footerChromeWidgetChanged(QWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}
QT_WARNING_POP
