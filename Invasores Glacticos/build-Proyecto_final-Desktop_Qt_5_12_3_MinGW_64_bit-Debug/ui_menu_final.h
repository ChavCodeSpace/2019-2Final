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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Menu_final
{
public:
    QPushButton *nuevo_juego;
    QPushButton *salir;
    QPushButton *tablon;
    QTextEdit *resultados;

    void setupUi(QDialog *Menu_final)
    {
        if (Menu_final->objectName().isEmpty())
            Menu_final->setObjectName(QString::fromUtf8("Menu_final"));
        Menu_final->resize(400, 300);
        nuevo_juego = new QPushButton(Menu_final);
        nuevo_juego->setObjectName(QString::fromUtf8("nuevo_juego"));
        nuevo_juego->setGeometry(QRect(40, 200, 80, 21));
        salir = new QPushButton(Menu_final);
        salir->setObjectName(QString::fromUtf8("salir"));
        salir->setGeometry(QRect(280, 200, 80, 21));
        tablon = new QPushButton(Menu_final);
        tablon->setObjectName(QString::fromUtf8("tablon"));
        tablon->setGeometry(QRect(40, 30, 80, 21));
        resultados = new QTextEdit(Menu_final);
        resultados->setObjectName(QString::fromUtf8("resultados"));
        resultados->setGeometry(QRect(90, 70, 201, 101));

        retranslateUi(Menu_final);

        QMetaObject::connectSlotsByName(Menu_final);
    } // setupUi

    void retranslateUi(QDialog *Menu_final)
    {
        Menu_final->setWindowTitle(QApplication::translate("Menu_final", "Dialog", nullptr));
        nuevo_juego->setText(QApplication::translate("Menu_final", "Nuevo juego", nullptr));
        salir->setText(QApplication::translate("Menu_final", "Salir", nullptr));
        tablon->setText(QApplication::translate("Menu_final", "Ver Resultados", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu_final: public Ui_Menu_final {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_FINAL_H
