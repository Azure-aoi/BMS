/****************************************************************************
** Meta object code from reading C++ file 'ListView.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/collections/ListView.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ListView.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent11collections8ListViewE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::collections::ListView::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11collections8ListViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::collections::ListView",
        "selectionModeChanged",
        "",
        "fontRoleChanged",
        "trailingTextRoleChanged",
        "viewportHoveredChanged",
        "flowChanged",
        "borderVisibleChanged",
        "backgroundVisibleChanged",
        "headerChanged",
        "footerChanged",
        "headerTextChanged",
        "footerTextChanged",
        "placeholderTextChanged",
        "canReorderItemsChanged",
        "scrollChainingEnabledChanged",
        "sectionEnabledChanged",
        "selectedIndicatorProgressChanged",
        "selectedIndicatorMotionDirectionChanged",
        "selectedIndicatorAnimationEnabledChanged",
        "selectionIndicatorVisibleChanged",
        "itemClicked",
        "index",
        "itemReordered",
        "fromRow",
        "toRow",
        "selectionMode",
        "SelectionMode",
        "fontRole",
        "Typography::FontRole",
        "trailingTextRole",
        "viewportHovered",
        "flow",
        "Flow",
        "selectedIndicatorProgress",
        "selectedIndicatorMotionDirection",
        "IndicatorMotionDirection",
        "selectedIndicatorAnimationEnabled",
        "selectionIndicatorVisible",
        "borderVisible",
        "backgroundVisible",
        "header",
        "QWidget*",
        "footer",
        "headerText",
        "footerText",
        "placeholderText",
        "canReorderItems",
        "scrollChainingEnabled",
        "sectionEnabled",
        "None",
        "Up",
        "Down",
        "Left",
        "Right"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'selectionModeChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fontRoleChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'trailingTextRoleChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'viewportHoveredChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'flowChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'borderVisibleChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'backgroundVisibleChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'headerChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'footerChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'headerTextChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'footerTextChanged'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'placeholderTextChanged'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'canReorderItemsChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scrollChainingEnabledChanged'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sectionEnabledChanged'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'selectedIndicatorProgressChanged'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'selectedIndicatorMotionDirectionChanged'
        QtMocHelpers::SignalData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'selectedIndicatorAnimationEnabledChanged'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'selectionIndicatorVisibleChanged'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'itemClicked'
        QtMocHelpers::SignalData<void(int)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Signal 'itemReordered'
        QtMocHelpers::SignalData<void(int, int)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 24 }, { QMetaType::Int, 25 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'selectionMode'
        QtMocHelpers::PropertyData<SelectionMode>(26, 0x80000000 | 27, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'fontRole'
        QtMocHelpers::PropertyData<Typography::FontRole>(28, 0x80000000 | 29, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'trailingTextRole'
        QtMocHelpers::PropertyData<int>(30, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'viewportHovered'
        QtMocHelpers::PropertyData<bool>(31, QMetaType::Bool, QMC::DefaultPropertyFlags, 3),
        // property 'flow'
        QtMocHelpers::PropertyData<Flow>(32, 0x80000000 | 33, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
        // property 'selectedIndicatorProgress'
        QtMocHelpers::PropertyData<qreal>(34, QMetaType::QReal, QMC::DefaultPropertyFlags, 15),
        // property 'selectedIndicatorMotionDirection'
        QtMocHelpers::PropertyData<enum IndicatorMotionDirection>(35, 0x80000000 | 36, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 16),
        // property 'selectedIndicatorAnimationEnabled'
        QtMocHelpers::PropertyData<bool>(37, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 17),
        // property 'selectionIndicatorVisible'
        QtMocHelpers::PropertyData<bool>(38, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 18),
        // property 'borderVisible'
        QtMocHelpers::PropertyData<bool>(39, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'backgroundVisible'
        QtMocHelpers::PropertyData<bool>(40, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'header'
        QtMocHelpers::PropertyData<QWidget*>(41, 0x80000000 | 42, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 7),
        // property 'footer'
        QtMocHelpers::PropertyData<QWidget*>(43, 0x80000000 | 42, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 8),
        // property 'headerText'
        QtMocHelpers::PropertyData<QString>(44, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 9),
        // property 'footerText'
        QtMocHelpers::PropertyData<QString>(45, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 10),
        // property 'placeholderText'
        QtMocHelpers::PropertyData<QString>(46, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 11),
        // property 'canReorderItems'
        QtMocHelpers::PropertyData<bool>(47, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 12),
        // property 'scrollChainingEnabled'
        QtMocHelpers::PropertyData<bool>(48, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 13),
        // property 'sectionEnabled'
        QtMocHelpers::PropertyData<bool>(49, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 14),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'IndicatorMotionDirection'
        QtMocHelpers::EnumData<enum IndicatorMotionDirection>(36, 36, QMC::EnumIsScoped).add({
            {   50, IndicatorMotionDirection::None },
            {   51, IndicatorMotionDirection::Up },
            {   52, IndicatorMotionDirection::Down },
            {   53, IndicatorMotionDirection::Left },
            {   54, IndicatorMotionDirection::Right },
        }),
    };
    return QtMocHelpers::metaObjectData<ListView, qt_meta_tag_ZN6fluent11collections8ListViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN6fluent11collections8ListViewE[] = {
    QMetaObject::SuperData::link<Typography::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject fluent::collections::ListView::staticMetaObject = { {
    QMetaObject::SuperData::link<QListView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections8ListViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections8ListViewE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN6fluent11collections8ListViewE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent11collections8ListViewE_t>.metaTypes,
    nullptr
} };

void fluent::collections::ListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ListView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectionModeChanged(); break;
        case 1: _t->fontRoleChanged(); break;
        case 2: _t->trailingTextRoleChanged(); break;
        case 3: _t->viewportHoveredChanged(); break;
        case 4: _t->flowChanged(); break;
        case 5: _t->borderVisibleChanged(); break;
        case 6: _t->backgroundVisibleChanged(); break;
        case 7: _t->headerChanged(); break;
        case 8: _t->footerChanged(); break;
        case 9: _t->headerTextChanged(); break;
        case 10: _t->footerTextChanged(); break;
        case 11: _t->placeholderTextChanged(); break;
        case 12: _t->canReorderItemsChanged(); break;
        case 13: _t->scrollChainingEnabledChanged(); break;
        case 14: _t->sectionEnabledChanged(); break;
        case 15: _t->selectedIndicatorProgressChanged(); break;
        case 16: _t->selectedIndicatorMotionDirectionChanged(); break;
        case 17: _t->selectedIndicatorAnimationEnabledChanged(); break;
        case 18: _t->selectionIndicatorVisibleChanged(); break;
        case 19: _t->itemClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->itemReordered((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ListView::*)()>(_a, &ListView::selectionModeChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)()>(_a, &ListView::fontRoleChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)()>(_a, &ListView::trailingTextRoleChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)()>(_a, &ListView::viewportHoveredChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)()>(_a, &ListView::flowChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)()>(_a, &ListView::borderVisibleChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)()>(_a, &ListView::backgroundVisibleChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)()>(_a, &ListView::headerChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)()>(_a, &ListView::footerChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)()>(_a, &ListView::headerTextChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)()>(_a, &ListView::footerTextChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)()>(_a, &ListView::placeholderTextChanged, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)()>(_a, &ListView::canReorderItemsChanged, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)()>(_a, &ListView::scrollChainingEnabledChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)()>(_a, &ListView::sectionEnabledChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)()>(_a, &ListView::selectedIndicatorProgressChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)()>(_a, &ListView::selectedIndicatorMotionDirectionChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)()>(_a, &ListView::selectedIndicatorAnimationEnabledChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)()>(_a, &ListView::selectionIndicatorVisibleChanged, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)(int )>(_a, &ListView::itemClicked, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListView::*)(int , int )>(_a, &ListView::itemReordered, 20))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
        case 11:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Typography::FontRole >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<SelectionMode*>(_v) = _t->selectionMode(); break;
        case 1: *reinterpret_cast<Typography::FontRole*>(_v) = _t->fontRole(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->trailingTextRole(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->viewportHovered(); break;
        case 4: *reinterpret_cast<Flow*>(_v) = _t->flow(); break;
        case 5: *reinterpret_cast<qreal*>(_v) = _t->selectedIndicatorProgress(); break;
        case 6: *reinterpret_cast<enum IndicatorMotionDirection*>(_v) = _t->selectedIndicatorMotionDirection(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->selectedIndicatorAnimationEnabled(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->selectionIndicatorVisible(); break;
        case 9: *reinterpret_cast<bool*>(_v) = _t->borderVisible(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->backgroundVisible(); break;
        case 11: *reinterpret_cast<QWidget**>(_v) = _t->header(); break;
        case 12: *reinterpret_cast<QWidget**>(_v) = _t->footer(); break;
        case 13: *reinterpret_cast<QString*>(_v) = _t->headerText(); break;
        case 14: *reinterpret_cast<QString*>(_v) = _t->footerText(); break;
        case 15: *reinterpret_cast<QString*>(_v) = _t->placeholderText(); break;
        case 16: *reinterpret_cast<bool*>(_v) = _t->canReorderItems(); break;
        case 17: *reinterpret_cast<bool*>(_v) = _t->isScrollChainingEnabled(); break;
        case 18: *reinterpret_cast<bool*>(_v) = _t->sectionEnabled(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelectionMode(*reinterpret_cast<SelectionMode*>(_v)); break;
        case 1: _t->setFontRole(*reinterpret_cast<Typography::FontRole*>(_v)); break;
        case 2: _t->setTrailingTextRole(*reinterpret_cast<int*>(_v)); break;
        case 4: _t->setFlow(*reinterpret_cast<Flow*>(_v)); break;
        case 7: _t->setSelectedIndicatorAnimationEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 8: _t->setSelectionIndicatorVisible(*reinterpret_cast<bool*>(_v)); break;
        case 9: _t->setBorderVisible(*reinterpret_cast<bool*>(_v)); break;
        case 10: _t->setBackgroundVisible(*reinterpret_cast<bool*>(_v)); break;
        case 11: _t->setHeader(*reinterpret_cast<QWidget**>(_v)); break;
        case 12: _t->setFooter(*reinterpret_cast<QWidget**>(_v)); break;
        case 13: _t->setHeaderText(*reinterpret_cast<QString*>(_v)); break;
        case 14: _t->setFooterText(*reinterpret_cast<QString*>(_v)); break;
        case 15: _t->setPlaceholderText(*reinterpret_cast<QString*>(_v)); break;
        case 16: _t->setCanReorderItems(*reinterpret_cast<bool*>(_v)); break;
        case 17: _t->setScrollChainingEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 18: _t->setSectionEnabled(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::collections::ListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::collections::ListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections8ListViewE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QListView::qt_metacast(_clname);
}

int fluent::collections::ListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void fluent::collections::ListView::selectionModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fluent::collections::ListView::fontRoleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::collections::ListView::trailingTextRoleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void fluent::collections::ListView::viewportHoveredChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void fluent::collections::ListView::flowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void fluent::collections::ListView::borderVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void fluent::collections::ListView::backgroundVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void fluent::collections::ListView::headerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void fluent::collections::ListView::footerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void fluent::collections::ListView::headerTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void fluent::collections::ListView::footerTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void fluent::collections::ListView::placeholderTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void fluent::collections::ListView::canReorderItemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void fluent::collections::ListView::scrollChainingEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void fluent::collections::ListView::sectionEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void fluent::collections::ListView::selectedIndicatorProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void fluent::collections::ListView::selectedIndicatorMotionDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void fluent::collections::ListView::selectedIndicatorAnimationEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void fluent::collections::ListView::selectionIndicatorVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void fluent::collections::ListView::itemClicked(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1);
}

// SIGNAL 20
void fluent::collections::ListView::itemReordered(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1, _t2);
}
QT_WARNING_POP
