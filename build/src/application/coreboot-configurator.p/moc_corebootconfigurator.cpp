/****************************************************************************
** Meta object code from reading C++ file 'corebootconfigurator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/application/corebootconfigurator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'corebootconfigurator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CorebootConfigurator_t {
    QByteArrayData data[12];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CorebootConfigurator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CorebootConfigurator_t qt_meta_stringdata_CorebootConfigurator = {
    {
QT_MOC_LITERAL(0, 0, 20), // "CorebootConfigurator"
QT_MOC_LITERAL(1, 21, 11), // "updateValue"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "name"
QT_MOC_LITERAL(4, 39, 16), // "showRebootWindow"
QT_MOC_LITERAL(5, 56, 12), // "saveAndClose"
QT_MOC_LITERAL(6, 69, 11), // "getSettings"
QT_MOC_LITERAL(7, 81, 11), // "getFromFile"
QT_MOC_LITERAL(8, 93, 15), // "displaySettings"
QT_MOC_LITERAL(9, 109, 13), // "writeSettings"
QT_MOC_LITERAL(10, 123, 11), // "writeToFile"
QT_MOC_LITERAL(11, 135, 8) // "out_file"

    },
    "CorebootConfigurator\0updateValue\0\0"
    "name\0showRebootWindow\0saveAndClose\0"
    "getSettings\0getFromFile\0displaySettings\0"
    "writeSettings\0writeToFile\0out_file"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CorebootConfigurator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void CorebootConfigurator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CorebootConfigurator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateValue((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->showRebootWindow(); break;
        case 2: _t->saveAndClose(); break;
        case 3: _t->getSettings(); break;
        case 4: _t->getFromFile(); break;
        case 5: _t->displaySettings(); break;
        case 6: _t->writeSettings(); break;
        case 7: _t->writeToFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CorebootConfigurator::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CorebootConfigurator::updateValue)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CorebootConfigurator::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CorebootConfigurator.data,
    qt_meta_data_CorebootConfigurator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CorebootConfigurator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CorebootConfigurator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CorebootConfigurator.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CorebootConfigurator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void CorebootConfigurator::updateValue(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
