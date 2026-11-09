/****************************************************************************
** Meta object code from reading C++ file 'DropDownButton.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/basicinput/DropDownButton.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DropDownButton.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10basicinput14DropDownButtonE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::basicinput::DropDownButton::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10basicinput14DropDownButtonE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::basicinput::DropDownButton",
        "menuChanged",
        "",
        "openChanged",
        "chevronChanged",
        "menu",
        "QMenu*",
        "isOpen",
        "chevronGlyph",
        "iconFontFamily",
        "chevronSize",
        "chevronOffset",
        "QPoint",
        "pressProgress"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'menuChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'chevronChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'menu'
        QtMocHelpers::PropertyData<QMenu*>(5, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'isOpen'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'chevronGlyph'
        QtMocHelpers::PropertyData<QString>(8, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'iconFontFamily'
        QtMocHelpers::PropertyData<QString>(9, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'chevronSize'
        QtMocHelpers::PropertyData<int>(10, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'chevronOffset'
        QtMocHelpers::PropertyData<QPoint>(11, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'pressProgress'
        QtMocHelpers::PropertyData<qreal>(13, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DropDownButton, qt_meta_tag_ZN6fluent10basicinput14DropDownButtonE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::basicinput::DropDownButton::staticMetaObject = { {
    QMetaObject::SuperData::link<Button::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput14DropDownButtonE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput14DropDownButtonE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10basicinput14DropDownButtonE_t>.metaTypes,
    nullptr
} };

void fluent::basicinput::DropDownButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DropDownButton *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->menuChanged(); break;
        case 1: _t->openChanged(); break;
        case 2: _t->chevronChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DropDownButton::*)()>(_a, &DropDownButton::menuChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DropDownButton::*)()>(_a, &DropDownButton::openChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DropDownButton::*)()>(_a, &DropDownButton::chevronChanged, 2))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMenu* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QMenu**>(_v) = _t->menu(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isOpen(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->chevronGlyph(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->iconFontFamily(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->chevronSize(); break;
        case 5: *reinterpret_cast<QPoint*>(_v) = _t->chevronOffset(); break;
        case 6: *reinterpret_cast<qreal*>(_v) = _t->pressProgress(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMenu(*reinterpret_cast<QMenu**>(_v)); break;
        case 1: _t->setIsOpen(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setChevronGlyph(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setIconFontFamily(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setChevronSize(*reinterpret_cast<int*>(_v)); break;
        case 5: _t->setChevronOffset(*reinterpret_cast<QPoint*>(_v)); break;
        case 6: _t->setPressProgress(*reinterpret_cast<qreal*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::basicinput::DropDownButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::basicinput::DropDownButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10basicinput14DropDownButtonE_t>.strings))
        return static_cast<void*>(this);
    return Button::qt_metacast(_clname);
}

int fluent::basicinput::DropDownButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Button::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void fluent::basicinput::DropDownButton::menuChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fluent::basicinput::DropDownButton::openChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::basicinput::DropDownButton::chevronChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
