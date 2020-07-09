/********************************************************************************
** Form generated from reading UI file 'nuevouser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUEVOUSER_H
#define UI_NUEVOUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Nuevouser
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_2;
    QLineEdit *pass;
    QPushButton *crearuser;
    QPushButton *atras;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Nuevouser)
    {
        if (Nuevouser->objectName().isEmpty())
            Nuevouser->setObjectName(QString::fromUtf8("Nuevouser"));
        Nuevouser->resize(294, 369);
        centralwidget = new QWidget(Nuevouser);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 50, 101, 31));
        name = new QLineEdit(centralwidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(70, 90, 113, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 140, 111, 21));
        pass = new QLineEdit(centralwidget);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setGeometry(QRect(70, 180, 113, 21));
        crearuser = new QPushButton(centralwidget);
        crearuser->setObjectName(QString::fromUtf8("crearuser"));
        crearuser->setGeometry(QRect(20, 260, 80, 21));
        atras = new QPushButton(centralwidget);
        atras->setObjectName(QString::fromUtf8("atras"));
        atras->setGeometry(QRect(170, 260, 80, 21));
        Nuevouser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Nuevouser);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 294, 20));
        Nuevouser->setMenuBar(menubar);
        statusbar = new QStatusBar(Nuevouser);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Nuevouser->setStatusBar(statusbar);

        retranslateUi(Nuevouser);

        QMetaObject::connectSlotsByName(Nuevouser);
    } // setupUi

    void retranslateUi(QMainWindow *Nuevouser)
    {
        Nuevouser->setWindowTitle(QApplication::translate("Nuevouser", "MainWindow", nullptr));
        label->setText(QApplication::translate("Nuevouser", "Nombre de Usuario", nullptr));
        label_2->setText(QApplication::translate("Nuevouser", "Contrase\303\261a", nullptr));
        crearuser->setText(QApplication::translate("Nuevouser", "Crear Usuario", nullptr));
        atras->setText(QApplication::translate("Nuevouser", "Atras", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Nuevouser: public Ui_Nuevouser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUEVOUSER_H
