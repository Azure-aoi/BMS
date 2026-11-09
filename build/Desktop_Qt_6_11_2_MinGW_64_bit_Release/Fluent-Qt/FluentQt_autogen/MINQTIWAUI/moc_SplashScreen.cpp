/****************************************************************************
** Meta object code from reading C++ file 'SplashScreen.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/status_info/SplashScreen.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SplashScreen.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent11status_info12SplashScreenE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::status_info::SplashScreen::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11status_info12SplashScreenE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::status_info::SplashScreen",
        "presentationChanged",
        "",
        "Presentation",
        "presentation",
        "iconChanged",
        "QIcon",
        "icon",
        "iconSizeChanged",
        "QSize",
        "size",
        "textChanged",
        "text",
        "titleChanged",
        "title",
        "subtitleChanged",
        "subtitle",
        "transitionTargetChanged",
        "QWidget*",
        "target",
        "progressChanged",
        "progress",
        "indeterminateChanged",
        "indeterminate",
        "dismissed",
        "replaced",
        "iconSize",
        "transitionTarget",
        "Branded",
        "Simple"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'presentationChanged'
        QtMocHelpers::SignalData<void(enum Presentation)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'iconChanged'
        QtMocHelpers::SignalData<void(const QIcon &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'iconSizeChanged'
        QtMocHelpers::SignalData<void(const QSize &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Signal 'textChanged'
        QtMocHelpers::SignalData<void(const QString &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Signal 'titleChanged'
        QtMocHelpers::SignalData<void(const QString &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 14 },
        }}),
        // Signal 'subtitleChanged'
        QtMocHelpers::SignalData<void(const QString &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 16 },
        }}),
        // Signal 'transitionTargetChanged'
        QtMocHelpers::SignalData<void(QWidget *)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Signal 'progressChanged'
        QtMocHelpers::SignalData<void(int)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 21 },
        }}),
        // Signal 'indeterminateChanged'
        QtMocHelpers::SignalData<void(bool)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Signal 'dismissed'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'replaced'
        QtMocHelpers::SignalData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'presentation'
        QtMocHelpers::PropertyData<enum Presentation>(4, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'icon'
        QtMocHelpers::PropertyData<QIcon>(7, 0x80000000 | 6, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'iconSize'
        QtMocHelpers::PropertyData<QSize>(26, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'text'
        QtMocHelpers::PropertyData<QString>(12, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'title'
        QtMocHelpers::PropertyData<QString>(14, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'subtitle'
        QtMocHelpers::PropertyData<QString>(16, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'transitionTarget'
        QtMocHelpers::PropertyData<QWidget*>(27, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 6),
        // property 'progress'
        QtMocHelpers::PropertyData<int>(21, QMetaType::Int, QMC::DefaultPropertyFlags, 7),
        // property 'indeterminate'
        QtMocHelpers::PropertyData<bool>(23, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Presentation'
        QtMocHelpers::EnumData<enum Presentation>(3, 3, QMC::EnumIsScoped).add({
            {   28, Presentation::Branded },
            {   29, Presentation::Simple },
        }),
    };
    return QtMocHelpers::metaObjectData<SplashScreen, qt_meta_tag_ZN6fluent11status_info12SplashScreenE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::status_info::SplashScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info12SplashScreenE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info12SplashScreenE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent11status_info12SplashScreenE_t>.metaTypes,
    nullptr
} };

void fluent::status_info::SplashScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SplashScreen *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->presentationChanged((*reinterpret_cast<std::add_pointer_t<enum Presentation>>(_a[1]))); break;
        case 1: _t->iconChanged((*reinterpret_cast<std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 2: _t->iconSizeChanged((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 3: _t->textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->titleChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->subtitleChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->transitionTargetChanged((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 7: _t->progressChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->indeterminateChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->dismissed(); break;
        case 10: _t->replaced(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SplashScreen::*)(Presentation )>(_a, &SplashScreen::presentationChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplashScreen::*)(const QIcon & )>(_a, &SplashScreen::iconChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplashScreen::*)(const QSize & )>(_a, &SplashScreen::iconSizeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplashScreen::*)(const QString & )>(_a, &SplashScreen::textChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplashScreen::*)(const QString & )>(_a, &SplashScreen::titleChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplashScreen::*)(const QString & )>(_a, &SplashScreen::subtitleChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplashScreen::*)(QWidget * )>(_a, &SplashScreen::transitionTargetChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplashScreen::*)(int )>(_a, &SplashScreen::progressChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplashScreen::*)(bool )>(_a, &SplashScreen::indeterminateChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplashScreen::*)()>(_a, &SplashScreen::dismissed, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplashScreen::*)()>(_a, &SplashScreen::replaced, 10))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<enum Presentation*>(_v) = _t->presentation(); break;
        case 1: *reinterpret_cast<QIcon*>(_v) = _t->icon(); break;
        case 2: *reinterpret_cast<QSize*>(_v) = _t->iconSize(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->text(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->title(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->subtitle(); break;
        case 6: *reinterpret_cast<QWidget**>(_v) = _t->transitionTarget(); break;
        case 7: *reinterpret_cast<int*>(_v) = _t->progress(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->isIndeterminate(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPresentation(*reinterpret_cast<enum Presentation*>(_v)); break;
        case 1: _t->setIcon(*reinterpret_cast<QIcon*>(_v)); break;
        case 2: _t->setIconSize(*reinterpret_cast<QSize*>(_v)); break;
        case 3: _t->setText(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setTitle(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setSubtitle(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setTransitionTarget(*reinterpret_cast<QWidget**>(_v)); break;
        case 8: _t->setIndeterminate(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::status_info::SplashScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::status_info::SplashScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info12SplashScreenE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::status_info::SplashScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void fluent::status_info::SplashScreen::presentationChanged(Presentation _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::status_info::SplashScreen::iconChanged(const QIcon & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::status_info::SplashScreen::iconSizeChanged(const QSize & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::status_info::SplashScreen::textChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::status_info::SplashScreen::titleChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::status_info::SplashScreen::subtitleChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::status_info::SplashScreen::transitionTargetChanged(QWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::status_info::SplashScreen::progressChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void fluent::status_info::SplashScreen::indeterminateChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void fluent::status_info::SplashScreen::dismissed()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void fluent::status_info::SplashScreen::replaced()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
