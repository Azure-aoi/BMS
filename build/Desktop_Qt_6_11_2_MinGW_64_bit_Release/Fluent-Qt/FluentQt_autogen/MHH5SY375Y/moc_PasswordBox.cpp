/****************************************************************************
** Meta object code from reading C++ file 'PasswordBox.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/textfields/PasswordBox.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PasswordBox.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent10textfields11PasswordBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::textfields::PasswordBox::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent10textfields11PasswordBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::textfields::PasswordBox",
        "passwordChanged",
        "",
        "password",
        "headerChanged",
        "passwordRevealModeChanged",
        "setPassword",
        "header",
        "passwordRevealMode",
        "PasswordRevealMode",
        "Peek",
        "Hidden",
        "Visible"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'passwordChanged'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'headerChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'passwordRevealModeChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setPassword'
        QtMocHelpers::SlotData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'password'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'header'
        QtMocHelpers::PropertyData<QString>(7, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'passwordRevealMode'
        QtMocHelpers::PropertyData<enum PasswordRevealMode>(8, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'PasswordRevealMode'
        QtMocHelpers::EnumData<enum PasswordRevealMode>(9, 9, QMC::EnumIsScoped).add({
            {   10, PasswordRevealMode::Peek },
            {   11, PasswordRevealMode::Hidden },
            {   12, PasswordRevealMode::Visible },
        }),
    };
    return QtMocHelpers::metaObjectData<PasswordBox, qt_meta_tag_ZN6fluent10textfields11PasswordBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::textfields::PasswordBox::staticMetaObject = { {
    QMetaObject::SuperData::link<LineEdit::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields11PasswordBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields11PasswordBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent10textfields11PasswordBoxE_t>.metaTypes,
    nullptr
} };

void fluent::textfields::PasswordBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PasswordBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->passwordChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->headerChanged(); break;
        case 2: _t->passwordRevealModeChanged(); break;
        case 3: _t->setPassword((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PasswordBox::*)(const QString & )>(_a, &PasswordBox::passwordChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PasswordBox::*)()>(_a, &PasswordBox::headerChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PasswordBox::*)()>(_a, &PasswordBox::passwordRevealModeChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->password(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->header(); break;
        case 2: *reinterpret_cast<enum PasswordRevealMode*>(_v) = _t->passwordRevealMode(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPassword(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setHeader(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setPasswordRevealMode(*reinterpret_cast<enum PasswordRevealMode*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::textfields::PasswordBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::textfields::PasswordBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent10textfields11PasswordBoxE_t>.strings))
        return static_cast<void*>(this);
    return LineEdit::qt_metacast(_clname);
}

int fluent::textfields::PasswordBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void fluent::textfields::PasswordBox::passwordChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::textfields::PasswordBox::headerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::textfields::PasswordBox::passwordRevealModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
