/****************************************************************************
** Meta object code from reading C++ file 'Avatar.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/status_info/Avatar.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Avatar.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent11status_info6AvatarE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::status_info::Avatar::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11status_info6AvatarE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::status_info::Avatar",
        "nameChanged",
        "",
        "name",
        "initialsChanged",
        "initials",
        "imageChanged",
        "QPixmap",
        "image",
        "shapeChanged",
        "AvatarShape",
        "shape",
        "avatarSizeChanged",
        "AvatarSize",
        "size",
        "presenceChanged",
        "PresenceStatus",
        "presence",
        "backgroundColorChanged",
        "QColor",
        "color",
        "foregroundColorChanged",
        "avatarSize",
        "backgroundColor",
        "foregroundColor",
        "Circular",
        "Square",
        "Small",
        "Medium",
        "Large",
        "ExtraLarge",
        "None",
        "Available",
        "Away",
        "Busy",
        "DoNotDisturb",
        "Offline"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'nameChanged'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'initialsChanged'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'imageChanged'
        QtMocHelpers::SignalData<void(const QPixmap &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'shapeChanged'
        QtMocHelpers::SignalData<void(enum AvatarShape)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Signal 'avatarSizeChanged'
        QtMocHelpers::SignalData<void(enum AvatarSize)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'presenceChanged'
        QtMocHelpers::SignalData<void(enum PresenceStatus)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
        // Signal 'backgroundColorChanged'
        QtMocHelpers::SignalData<void(const QColor &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Signal 'foregroundColorChanged'
        QtMocHelpers::SignalData<void(const QColor &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'name'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'initials'
        QtMocHelpers::PropertyData<QString>(5, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'image'
        QtMocHelpers::PropertyData<QPixmap>(8, 0x80000000 | 7, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 2),
        // property 'shape'
        QtMocHelpers::PropertyData<enum AvatarShape>(11, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
        // property 'avatarSize'
        QtMocHelpers::PropertyData<enum AvatarSize>(22, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 4),
        // property 'presence'
        QtMocHelpers::PropertyData<enum PresenceStatus>(17, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 5),
        // property 'backgroundColor'
        QtMocHelpers::PropertyData<QColor>(23, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 6),
        // property 'foregroundColor'
        QtMocHelpers::PropertyData<QColor>(24, 0x80000000 | 19, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 7),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'AvatarShape'
        QtMocHelpers::EnumData<enum AvatarShape>(10, 10, QMC::EnumIsScoped).add({
            {   25, AvatarShape::Circular },
            {   26, AvatarShape::Square },
        }),
        // enum 'AvatarSize'
        QtMocHelpers::EnumData<enum AvatarSize>(13, 13, QMC::EnumIsScoped).add({
            {   27, AvatarSize::Small },
            {   28, AvatarSize::Medium },
            {   29, AvatarSize::Large },
            {   30, AvatarSize::ExtraLarge },
        }),
        // enum 'PresenceStatus'
        QtMocHelpers::EnumData<enum PresenceStatus>(16, 16, QMC::EnumIsScoped).add({
            {   31, PresenceStatus::None },
            {   32, PresenceStatus::Available },
            {   33, PresenceStatus::Away },
            {   34, PresenceStatus::Busy },
            {   35, PresenceStatus::DoNotDisturb },
            {   36, PresenceStatus::Offline },
        }),
    };
    return QtMocHelpers::metaObjectData<Avatar, qt_meta_tag_ZN6fluent11status_info6AvatarE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::status_info::Avatar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info6AvatarE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info6AvatarE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent11status_info6AvatarE_t>.metaTypes,
    nullptr
} };

void fluent::status_info::Avatar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Avatar *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->initialsChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->imageChanged((*reinterpret_cast<std::add_pointer_t<QPixmap>>(_a[1]))); break;
        case 3: _t->shapeChanged((*reinterpret_cast<std::add_pointer_t<enum AvatarShape>>(_a[1]))); break;
        case 4: _t->avatarSizeChanged((*reinterpret_cast<std::add_pointer_t<enum AvatarSize>>(_a[1]))); break;
        case 5: _t->presenceChanged((*reinterpret_cast<std::add_pointer_t<enum PresenceStatus>>(_a[1]))); break;
        case 6: _t->backgroundColorChanged((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        case 7: _t->foregroundColorChanged((*reinterpret_cast<std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Avatar::*)(const QString & )>(_a, &Avatar::nameChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Avatar::*)(const QString & )>(_a, &Avatar::initialsChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Avatar::*)(const QPixmap & )>(_a, &Avatar::imageChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Avatar::*)(AvatarShape )>(_a, &Avatar::shapeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Avatar::*)(AvatarSize )>(_a, &Avatar::avatarSizeChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Avatar::*)(PresenceStatus )>(_a, &Avatar::presenceChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Avatar::*)(const QColor & )>(_a, &Avatar::backgroundColorChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Avatar::*)(const QColor & )>(_a, &Avatar::foregroundColorChanged, 7))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->initials(); break;
        case 2: *reinterpret_cast<QPixmap*>(_v) = _t->image(); break;
        case 3: *reinterpret_cast<enum AvatarShape*>(_v) = _t->shape(); break;
        case 4: *reinterpret_cast<enum AvatarSize*>(_v) = _t->avatarSize(); break;
        case 5: *reinterpret_cast<enum PresenceStatus*>(_v) = _t->presence(); break;
        case 6: *reinterpret_cast<QColor*>(_v) = _t->backgroundColor(); break;
        case 7: *reinterpret_cast<QColor*>(_v) = _t->foregroundColor(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setInitials(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setImage(*reinterpret_cast<QPixmap*>(_v)); break;
        case 3: _t->setShape(*reinterpret_cast<enum AvatarShape*>(_v)); break;
        case 4: _t->setAvatarSize(*reinterpret_cast<enum AvatarSize*>(_v)); break;
        case 5: _t->setPresence(*reinterpret_cast<enum PresenceStatus*>(_v)); break;
        case 6: _t->setBackgroundColor(*reinterpret_cast<QColor*>(_v)); break;
        case 7: _t->setForegroundColor(*reinterpret_cast<QColor*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::status_info::Avatar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::status_info::Avatar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11status_info6AvatarE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FluentElement"))
        return static_cast< FluentElement*>(this);
    if (!strcmp(_clname, "QMLPlus"))
        return static_cast< QMLPlus*>(this);
    return QWidget::qt_metacast(_clname);
}

int fluent::status_info::Avatar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void fluent::status_info::Avatar::nameChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::status_info::Avatar::initialsChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::status_info::Avatar::imageChanged(const QPixmap & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void fluent::status_info::Avatar::shapeChanged(AvatarShape _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void fluent::status_info::Avatar::avatarSizeChanged(AvatarSize _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void fluent::status_info::Avatar::presenceChanged(PresenceStatus _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void fluent::status_info::Avatar::backgroundColorChanged(const QColor & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void fluent::status_info::Avatar::foregroundColorChanged(const QColor & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}
QT_WARNING_POP
