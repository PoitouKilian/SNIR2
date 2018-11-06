/****************************************************************************
** Meta object code from reading C++ file 'dab_mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ClientBanque/dab_mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dab_mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DAB_MainWindow_t {
    QByteArrayData data[11];
    char stringdata0[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DAB_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DAB_MainWindow_t qt_meta_stringdata_DAB_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DAB_MainWindow"
QT_MOC_LITERAL(1, 15, 30), // "on_pushButtonConnexion_clicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 26), // "on_pushButtonEnvoi_clicked"
QT_MOC_LITERAL(4, 74, 27), // "on_pushButtonNumero_clicked"
QT_MOC_LITERAL(5, 102, 22), // "onQTcpSocket_connected"
QT_MOC_LITERAL(6, 125, 25), // "onQTcpSocket_disconnected"
QT_MOC_LITERAL(7, 151, 18), // "onQTcpSocket_error"
QT_MOC_LITERAL(8, 170, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(9, 199, 11), // "socketError"
QT_MOC_LITERAL(10, 211, 22) // "onQTcpSocket_readyRead"

    },
    "DAB_MainWindow\0on_pushButtonConnexion_clicked\0"
    "\0on_pushButtonEnvoi_clicked\0"
    "on_pushButtonNumero_clicked\0"
    "onQTcpSocket_connected\0onQTcpSocket_disconnected\0"
    "onQTcpSocket_error\0QAbstractSocket::SocketError\0"
    "socketError\0onQTcpSocket_readyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DAB_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void DAB_MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DAB_MainWindow *_t = static_cast<DAB_MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonConnexion_clicked(); break;
        case 1: _t->on_pushButtonEnvoi_clicked(); break;
        case 2: _t->on_pushButtonNumero_clicked(); break;
        case 3: _t->onQTcpSocket_connected(); break;
        case 4: _t->onQTcpSocket_disconnected(); break;
        case 5: _t->onQTcpSocket_error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 6: _t->onQTcpSocket_readyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DAB_MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DAB_MainWindow.data,
      qt_meta_data_DAB_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DAB_MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DAB_MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DAB_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int DAB_MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
