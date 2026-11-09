/****************************************************************************
** Meta object code from reading C++ file 'GridView.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/collections/GridView.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GridView.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent11collections8GridViewE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::collections::GridView::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11collections8GridViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::collections::GridView",
        "selectionModeChanged",
        "",
        "fontRoleChanged",
        "viewportHoveredChanged",
        "borderVisibleChanged",
        "backgroundVisibleChanged",
        "headerTextChanged",
        "placeholderTextChanged",
        "cellSizeChanged",
        "horizontalSpacingChanged",
        "verticalSpacingChanged",
        "maxColumnsChanged",
        "canReorderItemsChanged",
        "scrollChainingEnabledChanged",
        "overscrollEnabledChanged",
        "itemReordered",
        "fromIndex",
        "toIndex",
        "itemClicked",
        "index",
        "selectionMode",
        "SelectionMode",
        "fontRole",
        "Typography::FontRole",
        "viewportHovered",
        "canReorderItems",
        "scrollChainingEnabled",
        "overscrollEnabled",
        "borderVisible",
        "backgroundVisible",
        "headerText",
        "placeholderText",
        "cellSize",
        "QSize",
        "horizontalSpacing",
        "verticalSpacing",
        "maxColumns"
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
        // Signal 'cellSizeChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'horizontalSpacingChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'verticalSpacingChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'maxColumnsChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'canReorderItemsChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scrollChainingEnabledChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'overscrollEnabledChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'itemReordered'
        QtMocHelpers::SignalData<void(int, int)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 17 }, { QMetaType::Int, 18 },
        }}),
        // Signal 'itemClicked'
        QtMocHelpers::SignalData<void(int)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 20 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'selectionMode'
        QtMocHelpers::PropertyData<SelectionMode>(21, 0x80000000 | 22, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'fontRole'
        QtMocHelpers::PropertyData<Typography::FontRole>(23, 0x80000000 | 24, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'viewportHovered'
        QtMocHelpers::PropertyData<bool>(25, QMetaType::Bool, QMC::DefaultPropertyFlags, 2),
        // property 'canReorderItems'
        QtMocHelpers::PropertyData<bool>(26, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'scrollChainingEnabled'
        QtMocHelpers::PropertyData<bool>(27, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 12),
        // property 'overscrollEnabled'
        QtMocHelpers::PropertyData<bool>(28, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 13),
        // property 'borderVisible'
        QtMocHelpers::PropertyData<bool>(29, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'backgroundVisible'
        QtMocHelpers::PropertyData<bool>(30, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'headerText'
        QtMocHelpers::PropertyData<QString>(31, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'placeholderText'
        QtMocHelpers::PropertyData<QString>(32, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'cellSize'
        QtMocHelpers::PropertyData<QSize>(33, 0x80000000 | 34, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 7),
        // property 'horizontalSpacing'
        QtMocHelpers::PropertyData<int>(35, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
        // property 'verticalSpacing'
        QtMocHelpers::PropertyData<int>(36, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'maxColumns'
        QtMocHelpers::PropertyData<int>(37, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GridView, qt_meta_tag_ZN6fluent11collections8GridViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN6fluent11collections8GridViewE[] = {
    QMetaObject::SuperData::link<Typography::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject fluent::collections::GridView::staticMetaObject = { {
    QMetaObject::SuperData::link<QListView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections8GridViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections8GridViewE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN6fluent11collections8GridViewE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent11collections8GridViewE_t>.metaTypes,
    nullptr
} };

void fluent::collections::GridView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GridView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectionModeChanged(); break;
        case 1: _t->fontRoleChanged(); break;
        case 2: _t->viewportHoveredChanged(); break;
        case 3: _t->borderVisibleChanged(); break;
        case 4: _t->backgroundVisibleChanged(); break;
        case 5: _t->headerTextChanged(); break;
        case 6: _t->placeholderTextChanged(); break;
        case 7: _t->cellSizeChanged(); break;
        case 8: _t->horizontalSpacingChanged(); break;
        case 9: _t->verticalSpacingChanged(); break;
        case 10: _t->maxColumnsChanged(); break;
        case 11: _t->canReorderItemsChanged(); break;
        case 12: _t->scrollChainingEnabledChanged(); break;
        case 13: _t->overscrollEnabledChanged(); break;
        case 14: _t->itemReordered((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 15: _t->itemClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GridView::*)()>(_a, &GridView::selectionModeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (GridView::*)()>(_a, &GridView::fontRoleChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (GridView::*)()>(_a, &GridView::viewportHoveredChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (GridView::*)()>(_a, &GridView::borderVisibleChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (GridView::*)()>(_a, &GridView::backgroundVisibleChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (GridView::*)()>(_a, &GridView::headerTextChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (GridView::*)()>(_a, &GridView::placeholderTextChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (GridView::*)()>(_a, &GridView::cellSizeChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (GridView::*)()>(_a, &GridView::horizontalSpacingChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (GridView::*)()>(_a, &GridView::verticalSpacingChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (GridView::*)()>(_a, &GridView::maxColumnsChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (GridView::*)()>(_a, &GridView::canReorderItemsChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (GridView::*)()>(_a, &GridView::scrollChainingEnabledChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (GridView::*)()>(_a, &GridView::overscrollEnabledChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (GridView::*)(int , int )>(_a, &GridView::itemReordered, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (GridView::*)(int )>(_a, &GridView::itemClicked, 15))
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
        case 3: *reinterpret_cast<bool*>(_v) = _t->canReorderItems(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isScrollChainingEnabled(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->isOverscrollEnabled(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->borderVisible(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->backgroundVisible(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->headerText(); break;
        case 9: *reinterpret_cast<QString*>(_v) = _t->placeholderText(); break;
        case 10: *reinterpret_cast<QSize*>(_v) = _t->cellSize(); break;
        case 11: *reinterpret_cast<int*>(_v) = _t->horizontalSpacing(); break;
        case 12: *reinterpret_cast<int*>(_v) = _t->verticalSpacing(); break;
        case 13: *reinterpret_cast<int*>(_v) = _t->maxColumns(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelectionMode(*reinterpret_cast<SelectionMode*>(_v)); break;
        case 1: _t->setFontRole(*reinterpret_cast<Typography::FontRole*>(_v)); break;
        case 3: _t->setCanReorderItems(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setScrollChainingEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setOverscrollEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setBorderVisible(*reinterpret_cast<bool*>(_v)); break;
        case 7: _t->setBackgroundVisible(*reinterpret_cast<bool*>(_v)); break;
        case 8: _t->setHeaderText(*reinterpret_cast<QString*>(_v)); break;
        case 9: _t->setPlaceholderText(*reinterpret_cast<QString*>(_v)); break;
        case 10: _t->setCellSize(*reinterpret_cast<QSize*>(_v)); break;
        case 11: _t->setHorizontalSpacing(*reinterpret_cast<int*>(_v)); break;
        case 12: _t->setVerticalSpacing(*reinterpret_cast<int*>(_v)); break;
        case 13: _t->setMaxColumns(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::collections::GridView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::collections::GridView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections8GridViewE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QListView::qt_metacast(_clname);
}

int fluent::collections::GridView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void fluent::collections::GridView::selectionModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fluent::collections::GridView::fontRoleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::collections::GridView::viewportHoveredChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void fluent::collections::GridView::borderVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void fluent::collections::GridView::backgroundVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void fluent::collections::GridView::headerTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void fluent::collections::GridView::placeholderTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void fluent::collections::GridView::cellSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void fluent::collections::GridView::horizontalSpacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void fluent::collections::GridView::verticalSpacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void fluent::collections::GridView::maxColumnsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void fluent::collections::GridView::canReorderItemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void fluent::collections::GridView::scrollChainingEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void fluent::collections::GridView::overscrollEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void fluent::collections::GridView::itemReordered(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1, _t2);
}

// SIGNAL 15
void fluent::collections::GridView::itemClicked(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}
QT_WARNING_POP
