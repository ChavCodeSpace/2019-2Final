/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_Login
{
public:
    QWidget *centralwidget;
    QLineEdit *nombre;
    QLineEdit *pass;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Validar;
    QPushButton *n_user;
    QPushButton *instrucciones;
    QPushButton *salir;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(472, 370);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        nombre = new QLineEdit(centralwidget);
        nombre->setObjectName(QString::fromUtf8("nombre"));
        nombre->setGeometry(QRect(170, 80, 121, 31));
        pass = new QLineEdit(centralwidget);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setGeometry(QRect(170, 180, 121, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 60, 121, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 160, 121, 16));
        Validar = new QPushButton(centralwidget);
        Validar->setObjectName(QString::fromUtf8("Validar"));
        Validar->setGeometry(QRect(40, 250, 80, 21));
        n_user = new QPushButton(centralwidget);
        n_user->setObjectName(QString::fromUtf8("n_user"));
        n_user->setGeometry(QRect(330, 250, 80, 21));
        instrucciones = new QPushButton(centralwidget);
        instrucciones->setObjectName(QString::fromUtf8("instrucciones"));
        instrucciones->setGeometry(QRect(190, 250, 80, 21));
        salir = new QPushButton(centralwidget);
        salir->setObjectName(QString::fromUtf8("salir"));
        salir->setGeometry(QRect(190, 300, 80, 21));
        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 472, 20));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", nullptr));
        label->setText(QApplication::translate("Login", "Nombre de Usuario", nullptr));
        label_2->setText(QApplication::translate("Login", "Contrase\303\261a", nullptr));
        Validar->setText(QApplication::translate("Login", "Iniciar", nullptr));
        n_user->setText(QApplication::translate("Login", "Nuevo Usuario", nullptr));
        instrucciones->setText(QApplication::translate("Login", "Instrucciones", nullptr));
        salir->setText(QApplication::translate("Login", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
