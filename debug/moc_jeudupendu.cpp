/****************************************************************************
** Meta object code from reading C++ file 'jeudupendu.h'
**
** Created: Tue 6. Mar 12:02:12 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../jeudupendu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jeudupendu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_JeuDuPendu[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      29,   11,   11,   11, 0x08,
      44,   11,   11,   11, 0x08,
      73,   11,   11,   11, 0x08,
      98,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_JeuDuPendu[] = {
    "JeuDuPendu\0\0nouvellePartie()\0"
    "fermerPartie()\0observateurProposition(bool)\0"
    "observateurPotence(bool)\0afficherAide()\0"
};

const QMetaObject JeuDuPendu::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_JeuDuPendu,
      qt_meta_data_JeuDuPendu, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &JeuDuPendu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *JeuDuPendu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *JeuDuPendu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JeuDuPendu))
        return static_cast<void*>(const_cast< JeuDuPendu*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int JeuDuPendu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: nouvellePartie(); break;
        case 1: fermerPartie(); break;
        case 2: observateurProposition((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: observateurPotence((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: afficherAide(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
