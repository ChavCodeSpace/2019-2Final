/********************************************************************************
** Form generated from reading UI file 'instrucciones.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCCIONES_H
#define UI_INSTRUCCIONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Instrucciones
{
public:
    QLabel *titulo;
    QLabel *label;
    QPushButton *atras;

    void setupUi(QDialog *Instrucciones)
    {
        if (Instrucciones->objectName().isEmpty())
            Instrucciones->setObjectName(QString::fromUtf8("Instrucciones"));
        Instrucciones->resize(400, 300);
        titulo = new QLabel(Instrucciones);
        titulo->setObjectName(QString::fromUtf8("titulo"));
        titulo->setGeometry(QRect(50, 10, 261, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Perpetua"));
        font.setPointSize(40);
        titulo->setFont(font);
        label = new QLabel(Instrucciones);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 90, 361, 181));
        label->setTextFormat(Qt::AutoText);
        label->setWordWrap(true);
        atras = new QPushButton(Instrucciones);
        atras->setObjectName(QString::fromUtf8("atras"));
        atras->setGeometry(QRect(310, 270, 80, 21));

        retranslateUi(Instrucciones);

        QMetaObject::connectSlotsByName(Instrucciones);
    } // setupUi

    void retranslateUi(QDialog *Instrucciones)
    {
        Instrucciones->setWindowTitle(QApplication::translate("Instrucciones", "Dialog", nullptr));
        titulo->setText(QApplication::translate("Instrucciones", "Instrucciones", nullptr));
        label->setText(QApplication::translate("Instrucciones", "Bienvenido a Invasores Galacticos; un juego de jugador contra jugador en el que un bando representa la tierra y el otro representa los invasores galacticos.\n"
"El jugador del lado izquierdo es el terrestre, este jugador se mueve a arriba con la tecla W, abajo con la tecla S y dispara con la tecla D.\n"
"El jugador del lado derecho es el invasor, este se mueve a arriba con la tecla I, abajo con la tecla K y dispara con la tecla J.\n"
"En el juego hay un aliado de cada bando, el cual aparece en pantalla y dispara un proyectil a su adversario.\n"
"Gana quien deje sin puntos de vida al rival.", nullptr));
        atras->setText(QApplication::translate("Instrucciones", "Atras", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Instrucciones: public Ui_Instrucciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCCIONES_H
