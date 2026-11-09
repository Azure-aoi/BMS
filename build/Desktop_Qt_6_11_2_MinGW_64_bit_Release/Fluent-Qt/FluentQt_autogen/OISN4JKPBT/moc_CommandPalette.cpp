/****************************************************************************
** Meta object code from reading C++ file 'CommandPalette.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/menus_toolbars/CommandPalette.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommandPalette.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent14menus_toolbars14CommandPaletteE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::menus_toolbars::CommandPalette::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent14menus_toolbars14CommandPaletteE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::menus_toolbars::CommandPalette",
        "queryChanged",
        "",
        "query",
        "placeholderTextChanged",
        "text",
        "emptyTextChanged",
        "resultCountChanged",
        "count",
        "currentActionChanged",
        "QAction*",
        "action",
        "triggerCurrent",
        "placeholderText",
        "emptyText",
        "resultCount",
        "currentAction"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'queryChanged'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'placeholderTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'emptyTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'resultCountChanged'
        QtMocHelpers::SignalData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Signal 'currentActionChanged'
        QtMocHelpers::SignalData<void(QAction *)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Slot 'triggerCurrent'
        QtMocHelpers::SlotData<bool()>(12, 2, QMC::AccessPublic, QMetaType::Bool),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'query'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'placeholderText'
        QtMocHelpers::PropertyData<QString>(13, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'emptyText'
        QtMocHelpers::PropertyData<QString>(14, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'resultCount'
        QtMocHelpers::PropertyData<int>(15, QMetaType::Int, QMC::DefaultPropertyFlags, 3),
        // property 'currentAction'
        QtMocHelpers::PropertyData<QAction*>(16, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CommandPalette, qt_meta_tag_ZN6fluent14menus_toolbars14CommandPaletteE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::menus_toolbars::CommandPalette::staticMetaObject = { {
    QMetaObject::SuperData::link<dialogs_flyouts::Popup::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent14menus_toolbars14CommandPaletteE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent14menus_toolbars14CommandPaletteE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent14menus_toolbars14CommandPaletteE_t>.metaTypes,
    nullptr
} };

void fluent::menus_toolbars::CommandPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CommandPalette *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->queryChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->placeholderTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->emptyTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->resultCountChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->currentActionChanged((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 5: { bool _r = _t->triggerCurrent();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CommandPalette::*)(const QString & )>(_a, &CommandPalette::queryChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CommandPalette::*)(const QString & )>(_a, &CommandPalette::placeholderTextChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CommandPalette::*)(const QString & )>(_a, &CommandPalette::emptyTextChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (CommandPalette::*)(int )>(_a, &CommandPalette::resultCountChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (CommandPalette::*)(QAction * )>(_a, &CommandPalette::currentActionChanged, 4))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->query(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->placeholderText(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->emptyText(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->resultCount(); break;
        case 4: *reinterpret_cast<QAction**>(_v) = _t->currentAction(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setQuery(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setPlaceholderText(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setEmptyText(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setCurrentAction(*reinterpret_cast<QAction**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::menus_toolbars::CommandPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::menus_toolbars::CommandPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent14menus_toolbars14CommandPaletteE_t>.strings))
        return static_cast<void*>(this);
    return dialogs_flyouts::Popup::qt_metacast(_clname);
}

int fluent::menus_toolbars::CommandPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = dialogs_flyouts::Popup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void fluent::menus_toolbars::CommandPalette::queryChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::menus_toolbars::CommandPalette::placeholderTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::menus_toolbars::CommandPalette::emptyTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::menus_toolbars::CommandPalette::resultCountChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::menus_toolbars::CommandPalette::currentActionChanged(QAction * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
