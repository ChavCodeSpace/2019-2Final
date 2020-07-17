/********************************************************************************
** Form generated from reading UI file 'panel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANEL_H
#define UI_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Panel
{
public:
    QPushButton *Iniciar;
    QLabel *lbl_nombre1;
    QLabel *lbl_nombre2;
    QGraphicsView *view;
    QLabel *lbl_vida1;
    QLabel *lbl_vida2;

    void setupUi(QWidget *Panel)
    {
        if (Panel->objectName().isEmpty())
            Panel->setObjectName(QString::fromUtf8("Panel"));
        Panel->resize(812, 479);
        Iniciar = new QPushButton(Panel);
        Iniciar->setObjectName(QString::fromUtf8("Iniciar"));
        Iniciar->setGeometry(QRect(330, 30, 81, 51));
        lbl_nombre1 = new QLabel(Panel);
        lbl_nombre1->setObjectName(QString::fromUtf8("lbl_nombre1"));
        lbl_nombre1->setGeometry(QRect(40, 20, 111, 31));
        lbl_nombre2 = new QLabel(Panel);
        lbl_nombre2->setObjectName(QString::fromUtf8("lbl_nombre2"));
        lbl_nombre2->setGeometry(QRect(650, 20, 121, 31));
        view = new QGraphicsView(Panel);
        view->setObjectName(QString::fromUtf8("view"));
        view->setGeometry(QRect(20, 100, 771, 361));
        lbl_vida1 = new QLabel(Panel);
        lbl_vida1->setObjectName(QString::fromUtf8("lbl_vida1"));
        lbl_vida1->setGeometry(QRect(40, 60, 131, 31));
        lbl_vida2 = new QLabel(Panel);
        lbl_vida2->setObjectName(QString::fromUtf8("lbl_vida2"));
        lbl_vida2->setGeometry(QRect(650, 60, 121, 31));

        retranslateUi(Panel);

        QMetaObject::connectSlotsByName(Panel);
    } // setupUi

    void retranslateUi(QWidget *Panel)
    {
        Panel->setWindowTitle(QApplication::translate("Panel", "Form", nullptr));
        Iniciar->setText(QApplication::translate("Panel", "Iniciar", nullptr));
        lbl_nombre1->setText(QApplication::translate("Panel", "TextLabel", nullptr));
        lbl_nombre2->setText(QApplication::translate("Panel", "TextLabel", nullptr));
        lbl_vida1->setText(QApplication::translate("Panel", "TextLabel", nullptr));
        lbl_vida2->setText(QApplication::translate("Panel", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Panel: public Ui_Panel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANEL_H
