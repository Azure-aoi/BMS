/****************************************************************************
** Meta object code from reading C++ file 'StackView.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/collections/StackView.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StackView.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent11collections9StackViewE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::collections::StackView::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11collections9StackViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::collections::StackView",
        "depthChanged",
        "",
        "depth",
        "currentItemChanged",
        "QWidget*",
        "item",
        "initialItemChanged",
        "busyChanged",
        "busy",
        "orientationChanged",
        "Qt::Orientation",
        "orientation",
        "transitionAnimationEnabledChanged",
        "enabled",
        "transitionDurationChanged",
        "durationMs",
        "transitionTypeChanged",
        "StackViewTransitionType",
        "type",
        "defaultItemOwnershipChanged",
        "WidgetOwnership",
        "ownership",
        "itemPushed",
        "itemPopped",
        "itemReplaced",
        "oldItem",
        "newItem",
        "itemStatusChanged",
        "StackViewItemStatus",
        "status",
        "transitionStarted",
        "StackViewTransitionOperation",
        "operation",
        "fromItem",
        "toItem",
        "transitionFinished",
        "setCurrentIndex",
        "index",
        "setCurrentWidget",
        "widget",
        "currentItem",
        "initialItem",
        "transitionAnimationEnabled",
        "transitionDuration",
        "transitionType",
        "defaultItemOwnership",
        "fluent::WidgetOwnership",
        "Inactive",
        "Activating",
        "Active",
        "Deactivating",
        "Push",
        "Pop",
        "Replace",
        "Clear",
        "None",
        "SlideFade",
        "ScaleFade",
        "Immediate"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'depthChanged'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'currentItemChanged'
        QtMocHelpers::SignalData<void(QWidget *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'initialItemChanged'
        QtMocHelpers::SignalData<void(QWidget *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'busyChanged'
        QtMocHelpers::SignalData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Signal 'orientationChanged'
        QtMocHelpers::SignalData<void(Qt::Orientation)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'transitionAnimationEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 14 },
        }}),
        // Signal 'transitionDurationChanged'
        QtMocHelpers::SignalData<void(int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 16 },
        }}),
        // Signal 'transitionTypeChanged'
        QtMocHelpers::SignalData<void(enum StackViewTransitionType)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Signal 'defaultItemOwnershipChanged'
        QtMocHelpers::SignalData<void(WidgetOwnership)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Signal 'itemPushed'
        QtMocHelpers::SignalData<void(QWidget *)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'itemPopped'
        QtMocHelpers::SignalData<void(QWidget *)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'itemReplaced'
        QtMocHelpers::SignalData<void(QWidget *, QWidget *)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 26 }, { 0x80000000 | 5, 27 },
        }}),
        // Signal 'itemStatusChanged'
        QtMocHelpers::SignalData<void(QWidget *, enum StackViewItemStatus)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 29, 30 },
        }}),
        // Signal 'transitionStarted'
        QtMocHelpers::SignalData<void(enum StackViewTransitionOperation, QWidget *, QWidget *)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 32, 33 }, { 0x80000000 | 5, 34 }, { 0x80000000 | 5, 35 },
        }}),
        // Signal 'transitionFinished'
        QtMocHelpers::SignalData<void(enum StackViewTransitionOperation, QWidget *, QWidget *)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 32, 33 }, { 0x80000000 | 5, 34 }, { 0x80000000 | 5, 35 },
        }}),
        // Slot 'setCurrentIndex'
        QtMocHelpers::SlotData<void(int)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 38 },
        }}),
        // Slot 'setCurrentWidget'
        QtMocHelpers::SlotData<void(QWidget *)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 40 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'depth'
        QtMocHelpers::PropertyData<int>(3, QMetaType::Int, QMC::DefaultPropertyFlags, 0),
        // property 'currentItem'
        QtMocHelpers::PropertyData<QWidget*>(41, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 1),
        // property 'initialItem'
        QtMocHelpers::PropertyData<QWidget*>(42, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'busy'
        QtMocHelpers::PropertyData<bool>(9, QMetaType::Bool, QMC::DefaultPropertyFlags, 3),
        // property 'orientation'
        QtMocHelpers::PropertyData<Qt::Orientation>(12, 0x80000000 | 11, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
        // property 'transitionAnimationEnabled'
        QtMocHelpers::PropertyData<bool>(43, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'transitionDuration'
        QtMocHelpers::PropertyData<int>(44, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'transitionType'
        QtMocHelpers::PropertyData<enum StackViewTransitionType>(45, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 7),
        // property 'defaultItemOwnership'
        QtMocHelpers::PropertyData<fluent::WidgetOwnership>(46, 0x80000000 | 47, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 8),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'StackViewItemStatus'
        QtMocHelpers::EnumData<enum StackViewItemStatus>(29, 29, QMC::EnumIsScoped).add({
            {   48, StackViewItemStatus::Inactive },
            {   49, StackViewItemStatus::Activating },
            {   50, StackViewItemStatus::Active },
            {   51, StackViewItemStatus::Deactivating },
        }),
        // enum 'StackViewTransitionOperation'
        QtMocHelpers::EnumData<enum StackViewTransitionOperation>(32, 32, QMC::EnumIsScoped).add({
            {   52, StackViewTransitionOperation::Push },
            {   53, StackViewTransitionOperation::Pop },
            {   54, StackViewTransitionOperation::Replace },
            {   55, StackViewTransitionOperation::Clear },
            {   56, StackViewTransitionOperation::None },
        }),
        // enum 'StackViewTransitionType'
        QtMocHelpers::EnumData<enum StackViewTransitionType>(18, 18, QMC::EnumIsScoped).add({
            {   57, StackViewTransitionType::SlideFade },
            {   58, StackViewTransitionType::ScaleFade },
            {   59, StackViewTransitionType::Immediate },
        }),
    };
    return QtMocHelpers::metaObjectData<StackView, qt_meta_tag_ZN6fluent11collections9StackViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN6fluent11collections9StackViewE[] = {
    QMetaObject::SuperData::link<fluent::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject fluent::collections::StackView::staticMetaObject = { {
    QMetaObject::SuperData::link<QStackedWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections9StackViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections9StackViewE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN6fluent11collections9StackViewE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent11collections9StackViewE_t>.metaTypes,
    nullptr
} };

void fluent::collections::StackView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<StackView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->depthChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->currentItemChanged((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 2: _t->initialItemChanged((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 3: _t->busyChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->orientationChanged((*reinterpret_cast<std::add_pointer_t<Qt::Orientation>>(_a[1]))); break;
        case 5: _t->transitionAnimationEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->transitionDurationChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->transitionTypeChanged((*reinterpret_cast<std::add_pointer_t<enum StackViewTransitionType>>(_a[1]))); break;
        case 8: _t->defaultItemOwnershipChanged((*reinterpret_cast<std::add_pointer_t<WidgetOwnership>>(_a[1]))); break;
        case 9: _t->itemPushed((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 10: _t->itemPopped((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 11: _t->itemReplaced((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[2]))); break;
        case 12: _t->itemStatusChanged((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum StackViewItemStatus>>(_a[2]))); break;
        case 13: _t->transitionStarted((*reinterpret_cast<std::add_pointer_t<enum StackViewTransitionOperation>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[3]))); break;
        case 14: _t->transitionFinished((*reinterpret_cast<std::add_pointer_t<enum StackViewTransitionOperation>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[3]))); break;
        case 15: _t->setCurrentIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->setCurrentWidget((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
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
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (StackView::*)(int )>(_a, &StackView::depthChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (StackView::*)(QWidget * )>(_a, &StackView::currentItemChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (StackView::*)(QWidget * )>(_a, &StackView::initialItemChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (StackView::*)(bool )>(_a, &StackView::busyChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (StackView::*)(Qt::Orientation )>(_a, &StackView::orientationChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (StackView::*)(bool )>(_a, &StackView::transitionAnimationEnabledChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (StackView::*)(int )>(_a, &StackView::transitionDurationChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (StackView::*)(StackViewTransitionType )>(_a, &StackView::transitionTypeChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (StackView::*)(WidgetOwnership )>(_a, &StackView::defaultItemOwnershipChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (StackView::*)(QWidget * )>(_a, &StackView::itemPushed, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (StackView::*)(QWidget * )>(_a, &StackView::itemPopped, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (StackView::*)(QWidget * , QWidget * )>(_a, &StackView::itemReplaced, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (StackView::*)(QWidget * , StackViewItemStatus )>(_a, &StackView::itemStatusChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (StackView::*)(StackViewTransitionOperation , QWidget * , QWidget * )>(_a, &StackView::transitionStarted, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (StackView::*)(StackViewTransitionOperation , QWidget * , QWidget * )>(_a, &StackView::transitionFinished, 14))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< fluent::WidgetOwnership >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->depth(); break;
        case 1: *reinterpret_cast<QWidget**>(_v) = _t->currentItem(); break;
        case 2: *reinterpret_cast<QWidget**>(_v) = _t->initialItem(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->busy(); break;
        case 4: *reinterpret_cast<Qt::Orientation*>(_v) = _t->orientation(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->transitionAnimationEnabled(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->transitionDuration(); break;
        case 7: *reinterpret_cast<enum StackViewTransitionType*>(_v) = _t->transitionType(); break;
        case 8: *reinterpret_cast<fluent::WidgetOwnership*>(_v) = _t->defaultItemOwnership(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setInitialItem(*reinterpret_cast<QWidget**>(_v)); break;
        case 4: _t->setOrientation(*reinterpret_cast<Qt::Orientation*>(_v)); break;
        case 5: _t->setTransitionAnimationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setTransitionDuration(*reinterpret_cast<int*>(_v)); break;
        case 7: _t->setTransitionType(*reinterpret_cast<enum StackViewTransitionType*>(_v)); break;
        case 8: _t->setDefaultItemOwnership(*reinterpret_cast<fluent::WidgetOwnership*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::collections::StackView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::collections::StackView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections9StackViewE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QStackedWidget::qt_metacast(_clname);
}

int fluent::collections::StackView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void fluent::collections::StackView::depthChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::collections::StackView::currentItemChanged(QWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::collections::StackView::initialItemChanged(QWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::collections::StackView::busyChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::collections::StackView::orientationChanged(Qt::Orientation _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::collections::StackView::transitionAnimationEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::collections::StackView::transitionDurationChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::collections::StackView::transitionTypeChanged(StackViewTransitionType _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::collections::StackView::defaultItemOwnershipChanged(WidgetOwnership _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::collections::StackView::itemPushed(QWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void fluent::collections::StackView::itemPopped(QWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void fluent::collections::StackView::itemReplaced(QWidget * _t1, QWidget * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1, _t2);
}

// SIGNAL 12
void fluent::collections::StackView::itemStatusChanged(QWidget * _t1, StackViewItemStatus _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1, _t2);
}

// SIGNAL 13
void fluent::collections::StackView::transitionStarted(StackViewTransitionOperation _t1, QWidget * _t2, QWidget * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1, _t2, _t3);
}

// SIGNAL 14
void fluent::collections::StackView::transitionFinished(StackViewTransitionOperation _t1, QWidget * _t2, QWidget * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP
