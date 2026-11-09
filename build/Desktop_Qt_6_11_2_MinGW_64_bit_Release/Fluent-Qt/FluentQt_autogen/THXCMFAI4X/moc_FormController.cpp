/****************************************************************************
** Meta object code from reading C++ file 'FormController.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/foundation/FormController.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FormController.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent14FormControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::FormController::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent14FormControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::FormController",
        "stateChanged",
        "",
        "validationRequested",
        "key",
        "token",
        "submitRequested",
        "submissionFinished",
        "success",
        "dirty",
        "touched",
        "validating",
        "submitting",
        "valid",
        "errorMessages",
        "submissionError"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'stateChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'validationRequested'
        QtMocHelpers::SignalData<void(const QString &, quint64)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 }, { QMetaType::ULongLong, 5 },
        }}),
        // Signal 'submitRequested'
        QtMocHelpers::SignalData<void(quint64)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::ULongLong, 5 },
        }}),
        // Signal 'submissionFinished'
        QtMocHelpers::SignalData<void(bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'dirty'
        QtMocHelpers::PropertyData<bool>(9, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'touched'
        QtMocHelpers::PropertyData<bool>(10, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'validating'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'submitting'
        QtMocHelpers::PropertyData<bool>(12, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'valid'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags, 0),
        // property 'errorMessages'
        QtMocHelpers::PropertyData<QStringList>(14, QMetaType::QStringList, QMC::DefaultPropertyFlags, 0),
        // property 'submissionError'
        QtMocHelpers::PropertyData<QString>(15, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FormController, qt_meta_tag_ZN6fluent14FormControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::FormController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent14FormControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent14FormControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent14FormControllerE_t>.metaTypes,
    nullptr
} };

void fluent::FormController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FormController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->stateChanged(); break;
        case 1: _t->validationRequested((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint64>>(_a[2]))); break;
        case 2: _t->submitRequested((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1]))); break;
        case 3: _t->submissionFinished((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FormController::*)()>(_a, &FormController::stateChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FormController::*)(const QString & , quint64 )>(_a, &FormController::validationRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (FormController::*)(quint64 )>(_a, &FormController::submitRequested, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (FormController::*)(bool )>(_a, &FormController::submissionFinished, 3))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isDirty(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isTouched(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isValidating(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->isSubmitting(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isValid(); break;
        case 5: *reinterpret_cast<QStringList*>(_v) = _t->errorMessages(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->submissionError(); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::FormController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::FormController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent14FormControllerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int fluent::FormController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void fluent::FormController::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fluent::FormController::validationRequested(const QString & _t1, quint64 _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void fluent::FormController::submitRequested(quint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::FormController::submissionFinished(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
