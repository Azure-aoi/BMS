/****************************************************************************
** Meta object code from reading C++ file 'TreeView.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/collections/TreeView.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TreeView.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent11collections8TreeViewE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::collections::TreeView::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11collections8TreeViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::collections::TreeView",
        "selectionModeChanged",
        "",
        "fontRoleChanged",
        "viewportHoveredChanged",
        "borderVisibleChanged",
        "backgroundVisibleChanged",
        "headerTextChanged",
        "placeholderTextChanged",
        "itemPressed",
        "QModelIndex",
        "index",
        "itemClicked",
        "canReorderItemsChanged",
        "scrollChainingEnabledChanged",
        "overscrollEnabledChanged",
        "itemReordered",
        "srcParent",
        "srcRow",
        "dstParent",
        "dstRow",
        "indicatorMotionProgressChanged",
        "indicatorMotionDirectionChanged",
        "indicatorHierarchyTransitionChanged",
        "indicatorMotionAnimationEnabledChanged",
        "selectionIndicatorStyleChanged",
        "selectionMode",
        "SelectionMode",
        "fontRole",
        "Typography::FontRole",
        "viewportHovered",
        "indicatorMotionProgress",
        "indicatorMotionDirection",
        "IndicatorVerticalDirection",
        "indicatorHierarchyTransition",
        "IndicatorHierarchyTransition",
        "indicatorMotionAnimationEnabled",
        "horizontalFluentScrollBarEnabled",
        "borderVisible",
        "backgroundVisible",
        "headerText",
        "placeholderText",
        "canReorderItems",
        "scrollChainingEnabled",
        "overscrollEnabled",
        "None",
        "Up",
        "Down",
        "SameLevel",
        "Inward",
        "Outward"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'selectionModeChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fontRoleChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'viewportHoveredChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'borderVisibleChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'backgroundVisibleChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'headerTextChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'placeholderTextChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'itemPressed'
        QtMocHelpers::SignalData<void(const QModelIndex &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Signal 'itemClicked'
        QtMocHelpers::SignalData<void(const QModelIndex &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Signal 'canReorderItemsChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scrollChainingEnabledChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'overscrollEnabledChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'itemReordered'
        QtMocHelpers::SignalData<void(const QModelIndex &, int, const QModelIndex &, int)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 17 }, { QMetaType::Int, 18 }, { 0x80000000 | 10, 19 }, { QMetaType::Int, 20 },
        }}),
        // Signal 'indicatorMotionProgressChanged'
        QtMocHelpers::SignalData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'indicatorMotionDirectionChanged'
        QtMocHelpers::SignalData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'indicatorHierarchyTransitionChanged'
        QtMocHelpers::SignalData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'indicatorMotionAnimationEnabledChanged'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'selectionIndicatorStyleChanged'
        QtMocHelpers::SignalData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'selectionMode'
        QtMocHelpers::PropertyData<SelectionMode>(26, 0x80000000 | 27, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'fontRole'
        QtMocHelpers::PropertyData<Typography::FontRole>(28, 0x80000000 | 29, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'viewportHovered'
        QtMocHelpers::PropertyData<bool>(30, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'indicatorMotionProgress'
        QtMocHelpers::PropertyData<qreal>(31, QMetaType::QReal, QMC::DefaultPropertyFlags, 13),
        // property 'indicatorMotionDirection'
        QtMocHelpers::PropertyData<enum IndicatorVerticalDirection>(32, 0x80000000 | 33, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 14),
        // property 'indicatorHierarchyTransition'
        QtMocHelpers::PropertyData<enum IndicatorHierarchyTransition>(34, 0x80000000 | 35, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 15),
        // property 'indicatorMotionAnimationEnabled'
        QtMocHelpers::PropertyData<bool>(36, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 16),
        // property 'horizontalFluentScrollBarEnabled'
        QtMocHelpers::PropertyData<bool>(37, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'borderVisible'
        QtMocHelpers::PropertyData<bool>(38, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'backgroundVisible'
        QtMocHelpers::PropertyData<bool>(39, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'headerText'
        QtMocHelpers::PropertyData<QString>(40, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'placeholderText'
        QtMocHelpers::PropertyData<QString>(41, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'canReorderItems'
        QtMocHelpers::PropertyData<bool>(42, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'scrollChainingEnabled'
        QtMocHelpers::PropertyData<bool>(43, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'overscrollEnabled'
        QtMocHelpers::PropertyData<bool>(44, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'IndicatorVerticalDirection'
        QtMocHelpers::EnumData<enum IndicatorVerticalDirection>(33, 33, QMC::EnumIsScoped).add({
            {   45, IndicatorVerticalDirection::None },
            {   46, IndicatorVerticalDirection::Up },
            {   47, IndicatorVerticalDirection::Down },
        }),
        // enum 'IndicatorHierarchyTransition'
        QtMocHelpers::EnumData<enum IndicatorHierarchyTransition>(35, 35, QMC::EnumIsScoped).add({
            {   45, IndicatorHierarchyTransition::None },
            {   48, IndicatorHierarchyTransition::SameLevel },
            {   49, IndicatorHierarchyTransition::Inward },
            {   50, IndicatorHierarchyTransition::Outward },
        }),
    };
    return QtMocHelpers::metaObjectData<TreeView, qt_meta_tag_ZN6fluent11collections8TreeViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN6fluent11collections8TreeViewE[] = {
    QMetaObject::SuperData::link<Typography::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject fluent::collections::TreeView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections8TreeViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections8TreeViewE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN6fluent11collections8TreeViewE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent11collections8TreeViewE_t>.metaTypes,
    nullptr
} };

void fluent::collections::TreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TreeView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectionModeChanged(); break;
        case 1: _t->fontRoleChanged(); break;
        case 2: _t->viewportHoveredChanged(); break;
        case 3: _t->borderVisibleChanged(); break;
        case 4: _t->backgroundVisibleChanged(); break;
        case 5: _t->headerTextChanged(); break;
        case 6: _t->placeholderTextChanged(); break;
        case 7: _t->itemPressed((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 8: _t->itemClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 9: _t->canReorderItemsChanged(); break;
        case 10: _t->scrollChainingEnabledChanged(); break;
        case 11: _t->overscrollEnabledChanged(); break;
        case 12: _t->itemReordered((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 13: _t->indicatorMotionProgressChanged(); break;
        case 14: _t->indicatorMotionDirectionChanged(); break;
        case 15: _t->indicatorHierarchyTransitionChanged(); break;
        case 16: _t->indicatorMotionAnimationEnabledChanged(); break;
        case 17: _t->selectionIndicatorStyleChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TreeView::*)()>(_a, &TreeView::selectionModeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeView::*)()>(_a, &TreeView::fontRoleChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeView::*)()>(_a, &TreeView::viewportHoveredChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeView::*)()>(_a, &TreeView::borderVisibleChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeView::*)()>(_a, &TreeView::backgroundVisibleChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeView::*)()>(_a, &TreeView::headerTextChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeView::*)()>(_a, &TreeView::placeholderTextChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeView::*)(const QModelIndex & )>(_a, &TreeView::itemPressed, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeView::*)(const QModelIndex & )>(_a, &TreeView::itemClicked, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeView::*)()>(_a, &TreeView::canReorderItemsChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeView::*)()>(_a, &TreeView::scrollChainingEnabledChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeView::*)()>(_a, &TreeView::overscrollEnabledChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeView::*)(const QModelIndex & , int , const QModelIndex & , int )>(_a, &TreeView::itemReordered, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeView::*)()>(_a, &TreeView::indicatorMotionProgressChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeView::*)()>(_a, &TreeView::indicatorMotionDirectionChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeView::*)()>(_a, &TreeView::indicatorHierarchyTransitionChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeView::*)()>(_a, &TreeView::indicatorMotionAnimationEnabledChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (TreeView::*)()>(_a, &TreeView::selectionIndicatorStyleChanged, 17))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Typography::FontRole >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<SelectionMode*>(_v) = _t->selectionMode(); break;
        case 1: *reinterpret_cast<Typography::FontRole*>(_v) = _t->fontRole(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->viewportHovered(); break;
        case 3: *reinterpret_cast<qreal*>(_v) = _t->indicatorMotionProgress(); break;
        case 4: *reinterpret_cast<enum IndicatorVerticalDirection*>(_v) = _t->indicatorMotionDirection(); break;
        case 5: *reinterpret_cast<enum IndicatorHierarchyTransition*>(_v) = _t->indicatorHierarchyTransition(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->isIndicatorMotionAnimationEnabled(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->isHorizontalFluentScrollBarEnabled(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->borderVisible(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->backgroundVisible(); break;
        case 10: *reinterpret_cast<QString*>(_v) = _t->headerText(); break;
        case 11: *reinterpret_cast<QString*>(_v) = _t->placeholderText(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->canReorderItems(); break;
        case 13: *reinterpret_cast<bool*>(_v) = _t->isScrollChainingEnabled(); break;
        case 14: *reinterpret_cast<bool*>(_v) = _t->isOverscrollEnabled(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelectionMode(*reinterpret_cast<SelectionMode*>(_v)); break;
        case 1: _t->setFontRole(*reinterpret_cast<Typography::FontRole*>(_v)); break;
        case 6: _t->setIndicatorMotionAnimationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setHorizontalFluentScrollBarEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 8: _t->setBorderVisible(*reinterpret_cast<bool*>(_v)); break;
        case 9: _t->setBackgroundVisible(*reinterpret_cast<bool*>(_v)); break;
        case 10: _t->setHeaderText(*reinterpret_cast<QString*>(_v)); break;
        case 11: _t->setPlaceholderText(*reinterpret_cast<QString*>(_v)); break;
        case 12: _t->setCanReorderItems(*reinterpret_cast<bool*>(_v)); break;
        case 13: _t->setScrollChainingEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 14: _t->setOverscrollEnabled(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::collections::TreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::collections::TreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections8TreeViewE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QTreeView::qt_metacast(_clname);
}

int fluent::collections::TreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void fluent::collections::TreeView::selectionModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fluent::collections::TreeView::fontRoleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::collections::TreeView::viewportHoveredChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void fluent::collections::TreeView::borderVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void fluent::collections::TreeView::backgroundVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void fluent::collections::TreeView::headerTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void fluent::collections::TreeView::placeholderTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void fluent::collections::TreeView::itemPressed(const QModelIndex & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::collections::TreeView::itemClicked(const QModelIndex & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::collections::TreeView::canReorderItemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void fluent::collections::TreeView::scrollChainingEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void fluent::collections::TreeView::overscrollEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void fluent::collections::TreeView::itemReordered(const QModelIndex & _t1, int _t2, const QModelIndex & _t3, int _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 13
void fluent::collections::TreeView::indicatorMotionProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void fluent::collections::TreeView::indicatorMotionDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void fluent::collections::TreeView::indicatorHierarchyTransitionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void fluent::collections::TreeView::indicatorMotionAnimationEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void fluent::collections::TreeView::selectionIndicatorStyleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}
QT_WARNING_POP
