/****************************************************************************
** Meta object code from reading C++ file 'FileListView.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Fluent-Qt/src/components/collections/FileListView.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileListView.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6fluent11collections12FileListViewE_t {};
} // unnamed namespace

template <> constexpr inline auto fluent::collections::FileListView::qt_create_metaobjectdata<qt_meta_tag_ZN6fluent11collections12FileListViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "fluent::collections::FileListView",
        "animationEnabledChanged",
        "",
        "enabled",
        "removeRequested",
        "QModelIndex",
        "index",
        "retryRequested",
        "animationEnabled",
        "Status",
        "Ready",
        "Uploading",
        "Rejected",
        "DataRole",
        "MetadataRole",
        "StatusRole",
        "ProgressRole",
        "RemovableRole",
        "RetryableRole"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'animationEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'removeRequested'
        QtMocHelpers::SignalData<void(const QModelIndex &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'retryRequested'
        QtMocHelpers::SignalData<void(const QModelIndex &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'animationEnabled'
        QtMocHelpers::PropertyData<bool>(8, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Status'
        QtMocHelpers::EnumData<enum Status>(9, 9, QMC::EnumFlags{}).add({
            {   10, Status::Ready },
            {   11, Status::Uploading },
            {   12, Status::Rejected },
        }),
        // enum 'DataRole'
        QtMocHelpers::EnumData<enum DataRole>(13, 13, QMC::EnumFlags{}).add({
            {   14, DataRole::MetadataRole },
            {   15, DataRole::StatusRole },
            {   16, DataRole::ProgressRole },
            {   17, DataRole::RemovableRole },
            {   18, DataRole::RetryableRole },
        }),
    };
    return QtMocHelpers::metaObjectData<FileListView, qt_meta_tag_ZN6fluent11collections12FileListViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject fluent::collections::FileListView::staticMetaObject = { {
    QMetaObject::SuperData::link<ListView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections12FileListViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections12FileListViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6fluent11collections12FileListViewE_t>.metaTypes,
    nullptr
} };

void fluent::collections::FileListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FileListView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->animationEnabledChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->removeRequested((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->retryRequested((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FileListView::*)(bool )>(_a, &FileListView::animationEnabledChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FileListView::*)(const QModelIndex & )>(_a, &FileListView::removeRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (FileListView::*)(const QModelIndex & )>(_a, &FileListView::retryRequested, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isAnimationEnabled(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAnimationEnabled(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *fluent::collections::FileListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fluent::collections::FileListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6fluent11collections12FileListViewE_t>.strings))
        return static_cast<void*>(this);
    return ListView::qt_metacast(_clname);
}

int fluent::collections::FileListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ListView::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void fluent::collections::FileListView::animationEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void fluent::collections::FileListView::removeRequested(const QModelIndex & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void fluent::collections::FileListView::retryRequested(const QModelIndex & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
