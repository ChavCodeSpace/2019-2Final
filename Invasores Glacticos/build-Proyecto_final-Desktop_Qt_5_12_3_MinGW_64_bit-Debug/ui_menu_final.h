/********************************************************************************
** Form generated from reading UI file 'menu_final.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_FINAL_H
#define UI_MENU_FINAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Menu_final
{
public:
    QLabel *label;
    QLabel *lbl_ganador;
    QPushButton *nuevo_juego;
    QPushButton *salir;
    QPushButton *tablon;

    void setupUi(QDialog *Menu_final)
    {
        if (Menu_final->objectName().isEmpty())
            Menu_final->setObjectName(QString::fromUtf8("Menu_final"));
        Menu_final->resize(400, 300);
        label = new QLabel(Menu_final);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 40, 141, 41));
        lbl_ganador = new QLabel(Menu_final);
        lbl_ganador->setObjectName(QString::fromUtf8("lbl_ganador"));
        lbl_ganador->setGeometry(QRect(140, 110, 131, 31));
        nuevo_juego = new QPushButton(Menu_final);
        nuevo_juego->setObjectName(QString::fromUtf8("nuevo_juego"));
        nuevo_juego->setGeometry(QRect(40, 200, 80, 21));
        salir = new QPushButton(Menu_final);
        salir->setObjectName(QString::fromUtf8("salir"));
        salir->setGeometry(QRect(170, 250, 80, 21));
        tablon = new QPushButton(Menu_final);
        tablon->setObjectName(QString::fromUtf8("tablon"));
        tablon->setGeometry(QRect(290, 200, 80, 21));

        retranslateUi(Menu_final);

        QMetaObject::connectSlotsByName(Menu_final);
    } // setupUi

    void retranslateUi(QDialog *Menu_final)
    {
        Menu_final->setWindowTitle(QApplication::translate("Menu_final", "Dialog", nullptr));
        label->setText(QApplication::translate("Menu_final", "Ganador", nullptr));
        lbl_ganador->setText(QApplication::translate("Menu_final", "TextLabel", nullptr));
        nuevo_juego->setText(QApplication::translate("Menu_final", "Nuevo juego", nullptr));
        salir->setText(QApplication::translate("Menu_final", "Salir", nullptr));
        tablon->setText(QApplication::translate("Menu_final", "Ver tablon", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu_final: public Ui_Menu_final {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_FINAL_H
