/****************************************************************************
** Meta object code from reading C++ file 'ListDetailView.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/layout/ListDetailView.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ListDetailView.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent6layout14ListDetailViewE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::layout::ListDetailView::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent6layout14ListDetailViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::layout::ListDetailView",
        "compactChanged",
        "",
        "compact",
        "compactThresholdChanged",
        "width",
        "listPaneWidthChanged",
        "currentPaneChanged",
        "Pane",
        "pane",
        "showList",
        "showDetail",
        "compactThreshold",
        "listPaneWidth",
        "currentPane",
        "List",
        "Detail"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'compactChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'compactThresholdChanged'
        QtMocHelpers::SignalData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Signal 'listPaneWidthChanged'
        QtMocHelpers::SignalData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Signal 'currentPaneChanged'
        QtMocHelpers::SignalData<void(enum Pane)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'showList'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showDetail'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'compact'
        QtMocHelpers::PropertyData<bool>(3, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'compactThreshold'
        QtMocHelpers::PropertyData<int>(12, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'listPaneWidth'
        QtMocHelpers::PropertyData<int>(13, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'currentPane'
        QtMocHelpers::PropertyData<enum Pane>(14, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Pane'
        QtMocHelpers::EnumData<enum Pane>(8, 8, QMC::EnumFlags{}).add({
            {   15, Pane::List },
            {   16, Pane::Detail },
        }),
    };
    return QtMocHelpers::metaObjectData<ListDetailView, qt_meta_tag_ZN6fluent6layout14ListDetailViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::layout::ListDetailView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout14ListDetailViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout14ListDetailViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent6layout14ListDetailViewE_t>.metaTypes,
    nullptr
} };

void fluent::layout::ListDetailView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ListDetailView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->compactChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->compactThresholdChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->listPaneWidthChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->currentPaneChanged((*reinterpret_cast<std::add_pointer_t<enum Pane>>(_a[1]))); break;
        case 4: _t->showList(); break;
        case 5: _t->showDetail(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ListDetailView::*)(bool )>(_a, &ListDetailView::compactChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListDetailView::*)(int )>(_a, &ListDetailView::compactThresholdChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListDetailView::*)(int )>(_a, &ListDetailView::listPaneWidthChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ListDetailView::*)(Pane )>(_a, &ListDetailView::currentPaneChanged, 3))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isCompact(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->compactThreshold(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->listPaneWidth(); break;
        case 3: *reinterpret_cast<enum Pane*>(_v) = _t->currentPane(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCompactThreshold(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setListPaneWidth(*reinterpret_cast<int*>(_v)); break;
        case 3: _t->setCurrentPane(*reinterpret_cast<enum Pane*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::layout::ListDetailView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::layout::ListDetailView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout14ListDetailViewE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::layout::ListDetailView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void fluent::layout::ListDetailView::compactChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::layout::ListDetailView::compactThresholdChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::layout::ListDetailView::listPaneWidthChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::layout::ListDetailView::currentPaneChanged(Pane _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
