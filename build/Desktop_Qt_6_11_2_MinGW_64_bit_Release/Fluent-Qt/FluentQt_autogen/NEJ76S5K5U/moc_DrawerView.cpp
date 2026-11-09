/****************************************************************************
** Meta object code from reading C++ file 'DrawerView.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/collections/DrawerView.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DrawerView.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent11collections10DrawerViewE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::collections::DrawerView::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11collections10DrawerViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::collections::DrawerView",
        "isOpenChanged",
        "",
        "open",
        "edgeChanged",
        "DrawerEdge",
        "edge",
        "positionChanged",
        "position",
        "drawerLengthChanged",
        "length",
        "availableMarginsChanged",
        "QMargins",
        "margins",
        "modalChanged",
        "modal",
        "dimChanged",
        "dim",
        "dimOpacityChanged",
        "opacity",
        "backdropBlurRadiusChanged",
        "radius",
        "closePolicyChanged",
        "ClosePolicy",
        "policy",
        "interactiveChanged",
        "interactive",
        "dragMarginChanged",
        "margin",
        "outerCornerRadiusChanged",
        "animationEnabledChanged",
        "enabled",
        "contentWidgetChanged",
        "QWidget*",
        "widget",
        "contentOwnershipChanged",
        "WidgetOwnership",
        "ownership",
        "aboutToShow",
        "aboutToHide",
        "opened",
        "closed",
        "refreshBackdrop",
        "close",
        "isOpen",
        "drawerLength",
        "availableMargins",
        "dimOpacity",
        "backdropBlurRadius",
        "closePolicy",
        "dragMargin",
        "outerCornerRadius",
        "animationEnabled",
        "contentWidget",
        "contentOwnership",
        "fluent::WidgetOwnership",
        "Left",
        "Right",
        "Top",
        "Bottom",
        "CloseFlag",
        "NoAutoClose",
        "CloseOnPressOutside",
        "CloseOnEscape"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'isOpenChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'edgeChanged'
        QtMocHelpers::SignalData<void(enum DrawerEdge)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'positionChanged'
        QtMocHelpers::SignalData<void(qreal)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 8 },
        }}),
        // Signal 'drawerLengthChanged'
        QtMocHelpers::SignalData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Signal 'availableMarginsChanged'
        QtMocHelpers::SignalData<void(const QMargins &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Signal 'modalChanged'
        QtMocHelpers::SignalData<void(bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Signal 'dimChanged'
        QtMocHelpers::SignalData<void(bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 17 },
        }}),
        // Signal 'dimOpacityChanged'
        QtMocHelpers::SignalData<void(double)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 19 },
        }}),
        // Signal 'backdropBlurRadiusChanged'
        QtMocHelpers::SignalData<void(double)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 21 },
        }}),
        // Signal 'closePolicyChanged'
        QtMocHelpers::SignalData<void(ClosePolicy)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 23, 24 },
        }}),
        // Signal 'interactiveChanged'
        QtMocHelpers::SignalData<void(bool)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 26 },
        }}),
        // Signal 'dragMarginChanged'
        QtMocHelpers::SignalData<void(int)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 28 },
        }}),
        // Signal 'outerCornerRadiusChanged'
        QtMocHelpers::SignalData<void(int)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 21 },
        }}),
        // Signal 'animationEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 31 },
        }}),
        // Signal 'contentWidgetChanged'
        QtMocHelpers::SignalData<void(QWidget *)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 33, 34 },
        }}),
        // Signal 'contentOwnershipChanged'
        QtMocHelpers::SignalData<void(WidgetOwnership)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 36, 37 },
        }}),
        // Signal 'aboutToShow'
        QtMocHelpers::SignalData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'aboutToHide'
        QtMocHelpers::SignalData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'opened'
        QtMocHelpers::SignalData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'closed'
        QtMocHelpers::SignalData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'refreshBackdrop'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'open'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'close'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'isOpen'
        QtMocHelpers::PropertyData<bool>(44, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'edge'
        QtMocHelpers::PropertyData<enum DrawerEdge>(6, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'position'
        QtMocHelpers::PropertyData<qreal>(8, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'drawerLength'
        QtMocHelpers::PropertyData<int>(45, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'availableMargins'
        QtMocHelpers::PropertyData<QMargins>(46, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
        // property 'modal'
        QtMocHelpers::PropertyData<bool>(15, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'dim'
        QtMocHelpers::PropertyData<bool>(17, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'dimOpacity'
        QtMocHelpers::PropertyData<double>(47, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'backdropBlurRadius'
        QtMocHelpers::PropertyData<double>(48, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'closePolicy'
        QtMocHelpers::PropertyData<ClosePolicy>(49, 0x80000000 | 23, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 9),
        // property 'interactive'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'dragMargin'
        QtMocHelpers::PropertyData<int>(50, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'outerCornerRadius'
        QtMocHelpers::PropertyData<int>(51, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 12),
        // property 'animationEnabled'
        QtMocHelpers::PropertyData<bool>(52, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 13),
        // property 'contentWidget'
        QtMocHelpers::PropertyData<QWidget*>(53, 0x80000000 | 33, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 14),
        // property 'contentOwnership'
        QtMocHelpers::PropertyData<fluent::WidgetOwnership>(54, 0x80000000 | 55, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 15),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'DrawerEdge'
        QtMocHelpers::EnumData<enum DrawerEdge>(5, 5, QMC::EnumIsScoped).add({
            {   56, DrawerEdge::Left },
            {   57, DrawerEdge::Right },
            {   58, DrawerEdge::Top },
            {   59, DrawerEdge::Bottom },
        }),
        // flag 'ClosePolicy'
        QtMocHelpers::EnumData<ClosePolicy>(23, 60, QMC::EnumIsFlag).add({
            {   61, CloseFlag::NoAutoClose },
            {   62, CloseFlag::CloseOnPressOutside },
            {   63, CloseFlag::CloseOnEscape },
        }),
    };
    return QtMocHelpers::metaObjectData<DrawerView, qt_meta_tag_ZN6fluent11collections10DrawerViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN6fluent11collections10DrawerViewE[] = {
    QMetaObject::SuperData::link<fluent::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject fluent::collections::DrawerView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections10DrawerViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections10DrawerViewE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN6fluent11collections10DrawerViewE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent11collections10DrawerViewE_t>.metaTypes,
    nullptr
} };

void fluent::collections::DrawerView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DrawerView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->isOpenChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->edgeChanged((*reinterpret_cast<std::add_pointer_t<enum DrawerEdge>>(_a[1]))); break;
        case 2: _t->positionChanged((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 3: _t->drawerLengthChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->availableMarginsChanged((*reinterpret_cast<std::add_pointer_t<QMargins>>(_a[1]))); break;
        case 5: _t->modalChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->dimChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->dimOpacityChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 8: _t->backdropBlurRadiusChanged((*reinterpret_cast<std::add_pointer_t<double>>(_a[1]))); break;
        case 9: _t->closePolicyChanged((*reinterpret_cast<std::add_pointer_t<ClosePolicy>>(_a[1]))); break;
        case 10: _t->interactiveChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->dragMarginChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->outerCornerRadiusChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->animationEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->contentWidgetChanged((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 15: _t->contentOwnershipChanged((*reinterpret_cast<std::add_pointer_t<WidgetOwnership>>(_a[1]))); break;
        case 16: _t->aboutToShow(); break;
        case 17: _t->aboutToHide(); break;
        case 18: _t->opened(); break;
        case 19: _t->closed(); break;
        case 20: _t->refreshBackdrop(); break;
        case 21: _t->open(); break;
        case 22: _t->close(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)(bool )>(_a, &DrawerView::isOpenChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)(DrawerEdge )>(_a, &DrawerView::edgeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)(qreal )>(_a, &DrawerView::positionChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)(int )>(_a, &DrawerView::drawerLengthChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)(const QMargins & )>(_a, &DrawerView::availableMarginsChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)(bool )>(_a, &DrawerView::modalChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)(bool )>(_a, &DrawerView::dimChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)(double )>(_a, &DrawerView::dimOpacityChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)(double )>(_a, &DrawerView::backdropBlurRadiusChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)(ClosePolicy )>(_a, &DrawerView::closePolicyChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)(bool )>(_a, &DrawerView::interactiveChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)(int )>(_a, &DrawerView::dragMarginChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)(int )>(_a, &DrawerView::outerCornerRadiusChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)(bool )>(_a, &DrawerView::animationEnabledChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)(QWidget * )>(_a, &DrawerView::contentWidgetChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)(WidgetOwnership )>(_a, &DrawerView::contentOwnershipChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)()>(_a, &DrawerView::aboutToShow, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)()>(_a, &DrawerView::aboutToHide, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)()>(_a, &DrawerView::opened, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (DrawerView::*)()>(_a, &DrawerView::closed, 19))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
        case 15:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< fluent::WidgetOwnership >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isOpen(); break;
        case 1: *reinterpret_cast<enum DrawerEdge*>(_v) = _t->edge(); break;
        case 2: *reinterpret_cast<qreal*>(_v) = _t->position(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->drawerLength(); break;
        case 4: *reinterpret_cast<QMargins*>(_v) = _t->availableMargins(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->isModal(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->isDim(); break;
        case 7: *reinterpret_cast<double*>(_v) = _t->dimOpacity(); break;
        case 8: *reinterpret_cast<double*>(_v) = _t->backdropBlurRadius(); break;
        case 9: QtMocHelpers::assignFlags<ClosePolicy>(_v, _t->closePolicy()); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->isInteractive(); break;
        case 11: *reinterpret_cast<int*>(_v) = _t->dragMargin(); break;
        case 12: *reinterpret_cast<int*>(_v) = _t->outerCornerRadius(); break;
        case 13: *reinterpret_cast<bool*>(_v) = _t->isAnimationEnabled(); break;
        case 14: *reinterpret_cast<QWidget**>(_v) = _t->contentWidget(); break;
        case 15: *reinterpret_cast<fluent::WidgetOwnership*>(_v) = _t->contentOwnership(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsOpen(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setEdge(*reinterpret_cast<enum DrawerEdge*>(_v)); break;
        case 2: _t->setPosition(*reinterpret_cast<qreal*>(_v)); break;
        case 3: _t->setDrawerLength(*reinterpret_cast<int*>(_v)); break;
        case 4: _t->setAvailableMargins(*reinterpret_cast<QMargins*>(_v)); break;
        case 5: _t->setModal(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setDim(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setDimOpacity(*reinterpret_cast<double*>(_v)); break;
        case 8: _t->setBackdropBlurRadius(*reinterpret_cast<double*>(_v)); break;
        case 9: _t->setClosePolicy(*reinterpret_cast<ClosePolicy*>(_v)); break;
        case 10: _t->setInteractive(*reinterpret_cast<bool*>(_v)); break;
        case 11: _t->setDragMargin(*reinterpret_cast<int*>(_v)); break;
        case 12: _t->setOuterCornerRadius(*reinterpret_cast<int*>(_v)); break;
        case 13: _t->setAnimationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 14: _t->setContentWidget(*reinterpret_cast<QWidget**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::collections::DrawerView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::collections::DrawerView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections10DrawerViewE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::collections::DrawerView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void fluent::collections::DrawerView::isOpenChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::collections::DrawerView::edgeChanged(DrawerEdge _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::collections::DrawerView::positionChanged(qreal _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::collections::DrawerView::drawerLengthChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::collections::DrawerView::availableMarginsChanged(const QMargins & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::collections::DrawerView::modalChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::collections::DrawerView::dimChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::collections::DrawerView::dimOpacityChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::collections::DrawerView::backdropBlurRadiusChanged(double _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::collections::DrawerView::closePolicyChanged(ClosePolicy _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void fluent::collections::DrawerView::interactiveChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void fluent::collections::DrawerView::dragMarginChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void fluent::collections::DrawerView::outerCornerRadiusChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void fluent::collections::DrawerView::animationEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void fluent::collections::DrawerView::contentWidgetChanged(QWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void fluent::collections::DrawerView::contentOwnershipChanged(WidgetOwnership _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void fluent::collections::DrawerView::aboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void fluent::collections::DrawerView::aboutToHide()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void fluent::collections::DrawerView::opened()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void fluent::collections::DrawerView::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}
QT_WARNING_POP
