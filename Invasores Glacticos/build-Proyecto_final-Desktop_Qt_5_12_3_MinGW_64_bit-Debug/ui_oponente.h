/********************************************************************************
** Form generated from reading UI file 'oponente.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPONENTE_H
#define UI_OPONENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Oponente
{
public:
    QPushButton *aceptar;
    QLineEdit *o_name;
    QLabel *label;

    void setupUi(QDialog *Oponente)
    {
        if (Oponente->objectName().isEmpty())
            Oponente->setObjectName(QString::fromUtf8("Oponente"));
        Oponente->resize(372, 263);
        aceptar = new QPushButton(Oponente);
        aceptar->setObjectName(QString::fromUtf8("aceptar"));
        aceptar->setGeometry(QRect(130, 170, 131, 31));
        o_name = new QLineEdit(Oponente);
        o_name->setObjectName(QString::fromUtf8("o_name"));
        o_name->setGeometry(QRect(120, 110, 151, 31));
        label = new QLabel(Oponente);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 60, 331, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans Pro Semibold"));
        font.setPointSize(14);
        label->setFont(font);

        retranslateUi(Oponente);

        QMetaObject::connectSlotsByName(Oponente);
    } // setupUi

    void retranslateUi(QDialog *Oponente)
    {
        Oponente->setWindowTitle(QApplication::translate("Oponente", "Dialog", nullptr));
        aceptar->setText(QApplication::translate("Oponente", "Aceptar", nullptr));
        label->setText(QApplication::translate("Oponente", "Ingresa un nombre para tu oponente", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Oponente: public Ui_Oponente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPONENTE_H
