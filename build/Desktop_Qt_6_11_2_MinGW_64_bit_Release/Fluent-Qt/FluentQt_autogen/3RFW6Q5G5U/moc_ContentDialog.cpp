/****************************************************************************
** Meta object code from reading C++ file 'ContentDialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/dialogs_flyouts/ContentDialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContentDialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent15dialogs_flyouts13ContentDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::dialogs_flyouts::ContentDialog::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent15dialogs_flyouts13ContentDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::dialogs_flyouts::ContentDialog",
        "primaryButtonClicked",
        "",
        "secondaryButtonClicked",
        "closeButtonClicked",
        "titleChanged",
        "text",
        "primaryButtonTextChanged",
        "secondaryButtonTextChanged",
        "closeButtonTextChanged",
        "defaultButtonChanged",
        "btn",
        "title",
        "primaryButtonText",
        "secondaryButtonText",
        "closeButtonText",
        "defaultButton",
        "ContentDialogButton",
        "None",
        "Primary",
        "Secondary",
        "Close"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'primaryButtonClicked'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'secondaryButtonClicked'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'closeButtonClicked'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'titleChanged'
        QtMocHelpers::SignalData<void(const QString &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
        // Signal 'primaryButtonTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
        // Signal 'secondaryButtonTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
        // Signal 'closeButtonTextChanged'
        QtMocHelpers::SignalData<void(const QString &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
        // Signal 'defaultButtonChanged'
        QtMocHelpers::SignalData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 11 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'title'
        QtMocHelpers::PropertyData<QString>(12, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'primaryButtonText'
        QtMocHelpers::PropertyData<QString>(13, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'secondaryButtonText'
        QtMocHelpers::PropertyData<QString>(14, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'closeButtonText'
        QtMocHelpers::PropertyData<QString>(15, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'defaultButton'
        QtMocHelpers::PropertyData<int>(16, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ContentDialogButton'
        QtMocHelpers::EnumData<enum ContentDialogButton>(17, 17, QMC::EnumFlags{}).add({
            {   18, ContentDialogButton::None },
            {   19, ContentDialogButton::Primary },
            {   20, ContentDialogButton::Secondary },
            {   21, ContentDialogButton::Close },
        }),
    };
    return QtMocHelpers::metaObjectData<ContentDialog, qt_meta_tag_ZN6fluent15dialogs_flyouts13ContentDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::dialogs_flyouts::ContentDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<Dialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent15dialogs_flyouts13ContentDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent15dialogs_flyouts13ContentDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent15dialogs_flyouts13ContentDialogE_t>.metaTypes,
    nullptr
} };

void fluent::dialogs_flyouts::ContentDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ContentDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->primaryButtonClicked(); break;
        case 1: _t->secondaryButtonClicked(); break;
        case 2: _t->closeButtonClicked(); break;
        case 3: _t->titleChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->primaryButtonTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->secondaryButtonTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->closeButtonTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->defaultButtonChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ContentDialog::*)()>(_a, &ContentDialog::primaryButtonClicked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContentDialog::*)()>(_a, &ContentDialog::secondaryButtonClicked, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContentDialog::*)()>(_a, &ContentDialog::closeButtonClicked, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContentDialog::*)(const QString & )>(_a, &ContentDialog::titleChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContentDialog::*)(const QString & )>(_a, &ContentDialog::primaryButtonTextChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContentDialog::*)(const QString & )>(_a, &ContentDialog::secondaryButtonTextChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContentDialog::*)(const QString & )>(_a, &ContentDialog::closeButtonTextChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ContentDialog::*)(int )>(_a, &ContentDialog::defaultButtonChanged, 7))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->primaryButtonText(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->secondaryButtonText(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->closeButtonText(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->defaultButton(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitle(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setPrimaryButtonText(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setSecondaryButtonText(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setCloseButtonText(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setDefaultButton(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::dialogs_flyouts::ContentDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::dialogs_flyouts::ContentDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent15dialogs_flyouts13ContentDialogE_t>.strings))
        return static_cast<void*>(this);
    return Dialog::qt_metacast(_clname);
}

int fluent::dialogs_flyouts::ContentDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Dialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
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
void fluent::dialogs_flyouts::ContentDialog::primaryButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fluent::dialogs_flyouts::ContentDialog::secondaryButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fluent::dialogs_flyouts::ContentDialog::closeButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void fluent::dialogs_flyouts::ContentDialog::titleChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::dialogs_flyouts::ContentDialog::primaryButtonTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::dialogs_flyouts::ContentDialog::secondaryButtonTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::dialogs_flyouts::ContentDialog::closeButtonTextChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::dialogs_flyouts::ContentDialog::defaultButtonChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}
QT_WARNING_POP
