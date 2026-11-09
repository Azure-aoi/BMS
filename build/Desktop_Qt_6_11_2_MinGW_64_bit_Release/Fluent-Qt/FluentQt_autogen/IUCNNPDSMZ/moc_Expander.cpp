/****************************************************************************
** Meta object code from reading C++ file 'Expander.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/layout/Expander.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Expander.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent6layout8ExpanderE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::layout::Expander::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent6layout8ExpanderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::layout::Expander",
        "headerTextChanged",
        "",
        "text",
        "contentWidgetChanged",
        "QWidget*",
        "widget",
        "contentOwnershipChanged",
        "WidgetOwnership",
        "ownership",
        "expandedChanged",
        "expanded",
        "animationEnabledChanged",
        "enabled",
        "expansionTransitionStarted",
        "expanding",
        "expansionTransitionFinished",
        "layoutHeightChanged",
        "height",
        "headerText",
        "contentWidget",
        "animationEnabled"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'headerTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'contentWidgetChanged'
        QtMocHelpers::SignalData<void(QWidget *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'contentOwnershipChanged'
        QtMocHelpers::SignalData<void(WidgetOwnership)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Signal 'expandedChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Signal 'animationEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Signal 'expansionTransitionStarted'
        QtMocHelpers::SignalData<void(bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Signal 'expansionTransitionFinished'
        QtMocHelpers::SignalData<void(bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Signal 'layoutHeightChanged'
        QtMocHelpers::SignalData<void(int)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 18 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'headerText'
        QtMocHelpers::PropertyData<QString>(19, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'contentWidget'
        QtMocHelpers::PropertyData<QWidget*>(20, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'expanded'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'animationEnabled'
        QtMocHelpers::PropertyData<bool>(21, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Expander, qt_meta_tag_ZN6fluent6layout8ExpanderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::layout::Expander::staticMetaObject = { {
    QMetaObject::SuperData::link<Card::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout8ExpanderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout8ExpanderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent6layout8ExpanderE_t>.metaTypes,
    nullptr
} };

void fluent::layout::Expander::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Expander *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->headerTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->contentWidgetChanged((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 2: _t->contentOwnershipChanged((*reinterpret_cast<std::add_pointer_t<WidgetOwnership>>(_a[1]))); break;
        case 3: _t->expandedChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->animationEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->expansionTransitionStarted((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->expansionTransitionFinished((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->layoutHeightChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
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
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Expander::*)(const QString & )>(_a, &Expander::headerTextChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Expander::*)(QWidget * )>(_a, &Expander::contentWidgetChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Expander::*)(WidgetOwnership )>(_a, &Expander::contentOwnershipChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Expander::*)(bool )>(_a, &Expander::expandedChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Expander::*)(bool )>(_a, &Expander::animationEnabledChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Expander::*)(bool )>(_a, &Expander::expansionTransitionStarted, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Expander::*)(bool )>(_a, &Expander::expansionTransitionFinished, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Expander::*)(int )>(_a, &Expander::layoutHeightChanged, 7))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->headerText(); break;
        case 1: *reinterpret_cast<QWidget**>(_v) = _t->contentWidget(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isExpanded(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isAnimationEnabled(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHeaderText(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setContentWidget(*reinterpret_cast<QWidget**>(_v)); break;
        case 2: _t->setExpanded(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setAnimationEnabled(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::layout::Expander::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::layout::Expander::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent6layout8ExpanderE_t>.strings))
        return static_cast<void*>(this);
    return Card::qt_metacast(_clname);
}

int fluent::layout::Expander::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Card::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
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
void fluent::layout::Expander::headerTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::layout::Expander::contentWidgetChanged(QWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::layout::Expander::contentOwnershipChanged(WidgetOwnership _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::layout::Expander::expandedChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::layout::Expander::animationEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::layout::Expander::expansionTransitionStarted(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::layout::Expander::expansionTransitionFinished(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::layout::Expander::layoutHeightChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}
QT_WARNING_POP
