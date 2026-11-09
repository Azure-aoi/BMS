/****************************************************************************
** Meta object code from reading C++ file 'FlowView.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/collections/FlowView.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FlowView.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent11collections8FlowViewE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::collections::FlowView::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11collections8FlowViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::collections::FlowView",
        "selectionModeChanged",
        "",
        "fontRoleChanged",
        "borderVisibleChanged",
        "headerTextChanged",
        "placeholderTextChanged",
        "defaultItemSizeChanged",
        "minimumItemSizeChanged",
        "maximumItemSizeChanged",
        "itemSizeRoleChanged",
        "horizontalSpacingChanged",
        "verticalSpacingChanged",
        "contentMarginsChanged",
        "viewportHoveredChanged",
        "canReorderItemsChanged",
        "scrollChainingEnabledChanged",
        "overscrollEnabledChanged",
        "itemClicked",
        "row",
        "itemReordered",
        "fromIndex",
        "toIndex",
        "selectionMode",
        "SelectionMode",
        "fontRole",
        "Typography::FontRole",
        "borderVisible",
        "headerText",
        "placeholderText",
        "defaultItemSize",
        "QSize",
        "minimumItemSize",
        "maximumItemSize",
        "itemSizeRole",
        "horizontalSpacing",
        "verticalSpacing",
        "contentMargins",
        "QMargins",
        "viewportHovered",
        "canReorderItems",
        "scrollChainingEnabled",
        "overscrollEnabled"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'selectionModeChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fontRoleChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'borderVisibleChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'headerTextChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'placeholderTextChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'defaultItemSizeChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'minimumItemSizeChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'maximumItemSizeChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'itemSizeRoleChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'horizontalSpacingChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'verticalSpacingChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'contentMarginsChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'viewportHoveredChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'canReorderItemsChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scrollChainingEnabledChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'overscrollEnabledChanged'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'itemClicked'
        QtMocHelpers::SignalData<void(int)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Signal 'itemReordered'
        QtMocHelpers::SignalData<void(int, int)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 21 }, { QMetaType::Int, 22 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'selectionMode'
        QtMocHelpers::PropertyData<SelectionMode>(23, 0x80000000 | 24, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'fontRole'
        QtMocHelpers::PropertyData<Typography::FontRole>(25, 0x80000000 | 26, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'borderVisible'
        QtMocHelpers::PropertyData<bool>(27, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'headerText'
        QtMocHelpers::PropertyData<QString>(28, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'placeholderText'
        QtMocHelpers::PropertyData<QString>(29, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'defaultItemSize'
        QtMocHelpers::PropertyData<QSize>(30, 0x80000000 | 31, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 5),
        // property 'minimumItemSize'
        QtMocHelpers::PropertyData<QSize>(32, 0x80000000 | 31, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 6),
        // property 'maximumItemSize'
        QtMocHelpers::PropertyData<QSize>(33, 0x80000000 | 31, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 7),
        // property 'itemSizeRole'
        QtMocHelpers::PropertyData<int>(34, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'horizontalSpacing'
        QtMocHelpers::PropertyData<int>(35, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'verticalSpacing'
        QtMocHelpers::PropertyData<int>(36, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'contentMargins'
        QtMocHelpers::PropertyData<QMargins>(37, 0x80000000 | 38, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 11),
        // property 'viewportHovered'
        QtMocHelpers::PropertyData<bool>(39, QMetaType::Bool, QMC::DefaultPropertyFlags, 12),
        // property 'canReorderItems'
        QtMocHelpers::PropertyData<bool>(40, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 13),
        // property 'scrollChainingEnabled'
        QtMocHelpers::PropertyData<bool>(41, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 14),
        // property 'overscrollEnabled'
        QtMocHelpers::PropertyData<bool>(42, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 15),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FlowView, qt_meta_tag_ZN6fluent11collections8FlowViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN6fluent11collections8FlowViewE[] = {
    QMetaObject::SuperData::link<Typography::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject fluent::collections::FlowView::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections8FlowViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections8FlowViewE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN6fluent11collections8FlowViewE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent11collections8FlowViewE_t>.metaTypes,
    nullptr
} };

void fluent::collections::FlowView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FlowView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectionModeChanged(); break;
        case 1: _t->fontRoleChanged(); break;
        case 2: _t->borderVisibleChanged(); break;
        case 3: _t->headerTextChanged(); break;
        case 4: _t->placeholderTextChanged(); break;
        case 5: _t->defaultItemSizeChanged(); break;
        case 6: _t->minimumItemSizeChanged(); break;
        case 7: _t->maximumItemSizeChanged(); break;
        case 8: _t->itemSizeRoleChanged(); break;
        case 9: _t->horizontalSpacingChanged(); break;
        case 10: _t->verticalSpacingChanged(); break;
        case 11: _t->contentMarginsChanged(); break;
        case 12: _t->viewportHoveredChanged(); break;
        case 13: _t->canReorderItemsChanged(); break;
        case 14: _t->scrollChainingEnabledChanged(); break;
        case 15: _t->overscrollEnabledChanged(); break;
        case 16: _t->itemClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->itemReordered((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FlowView::*)()>(_a, &FlowView::selectionModeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlowView::*)()>(_a, &FlowView::fontRoleChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlowView::*)()>(_a, &FlowView::borderVisibleChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlowView::*)()>(_a, &FlowView::headerTextChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlowView::*)()>(_a, &FlowView::placeholderTextChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlowView::*)()>(_a, &FlowView::defaultItemSizeChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlowView::*)()>(_a, &FlowView::minimumItemSizeChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlowView::*)()>(_a, &FlowView::maximumItemSizeChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlowView::*)()>(_a, &FlowView::itemSizeRoleChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlowView::*)()>(_a, &FlowView::horizontalSpacingChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlowView::*)()>(_a, &FlowView::verticalSpacingChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlowView::*)()>(_a, &FlowView::contentMarginsChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlowView::*)()>(_a, &FlowView::viewportHoveredChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlowView::*)()>(_a, &FlowView::canReorderItemsChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlowView::*)()>(_a, &FlowView::scrollChainingEnabledChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlowView::*)()>(_a, &FlowView::overscrollEnabledChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlowView::*)(int )>(_a, &FlowView::itemClicked, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlowView::*)(int , int )>(_a, &FlowView::itemReordered, 17))
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
        case 2: *reinterpret_cast<bool*>(_v) = _t->borderVisible(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->headerText(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->placeholderText(); break;
        case 5: *reinterpret_cast<QSize*>(_v) = _t->defaultItemSize(); break;
        case 6: *reinterpret_cast<QSize*>(_v) = _t->minimumItemSize(); break;
        case 7: *reinterpret_cast<QSize*>(_v) = _t->maximumItemSize(); break;
        case 8: *reinterpret_cast<int*>(_v) = _t->itemSizeRole(); break;
        case 9: *reinterpret_cast<int*>(_v) = _t->horizontalSpacing(); break;
        case 10: *reinterpret_cast<int*>(_v) = _t->verticalSpacing(); break;
        case 11: *reinterpret_cast<QMargins*>(_v) = _t->contentMargins(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->viewportHovered(); break;
        case 13: *reinterpret_cast<bool*>(_v) = _t->canReorderItems(); break;
        case 14: *reinterpret_cast<bool*>(_v) = _t->isScrollChainingEnabled(); break;
        case 15: *reinterpret_cast<bool*>(_v) = _t->isOverscrollEnabled(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelectionMode(*reinterpret_cast<SelectionMode*>(_v)); break;
        case 1: _t->setFontRole(*reinterpret_cast<Typography::FontRole*>(_v)); break;
        case 2: _t->setBorderVisible(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setHeaderText(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setPlaceholderText(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setDefaultItemSize(*reinterpret_cast<QSize*>(_v)); break;
        case 6: _t->setMinimumItemSize(*reinterpret_cast<QSize*>(_v)); break;
        case 7: _t->setMaximumItemSize(*reinterpret_cast<QSize*>(_v)); break;
        case 8: _t->setItemSizeRole(*reinterpret_cast<int*>(_v)); break;
        case 9: _t->setHorizontalSpacing(*reinterpret_cast<int*>(_v)); break;
        case 10: _t->setVerticalSpacing(*reinterpret_cast<int*>(_v)); break;
        case 11: _t->setContentMargins(*reinterpret_cast<QMargins*>(_v)); break;
        case 13: _t->setCanReorderItems(*reinterpret_cast<bool*>(_v)); break;
        case 14: _t->setScrollChainingEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 15: _t->setOverscrollEnabled(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::collections::FlowView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::collections::FlowView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections8FlowViewE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QAbstractItemView::qt_metacast(_clname);
}

int fluent::collections::FlowView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemView::qt_metacall(_c, _id, _a);
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
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void fluent::collections::FlowView::selectionModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fluent::collections::FlowView::fontRoleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::collections::FlowView::borderVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void fluent::collections::FlowView::headerTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void fluent::collections::FlowView::placeholderTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void fluent::collections::FlowView::defaultItemSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void fluent::collections::FlowView::minimumItemSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void fluent::collections::FlowView::maximumItemSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void fluent::collections::FlowView::itemSizeRoleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void fluent::collections::FlowView::horizontalSpacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void fluent::collections::FlowView::verticalSpacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void fluent::collections::FlowView::contentMarginsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void fluent::collections::FlowView::viewportHoveredChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void fluent::collections::FlowView::canReorderItemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void fluent::collections::FlowView::scrollChainingEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void fluent::collections::FlowView::overscrollEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void fluent::collections::FlowView::itemClicked(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void fluent::collections::FlowView::itemReordered(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1, _t2);
}
QT_WARNING_POP
