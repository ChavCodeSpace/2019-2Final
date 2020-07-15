#include "panel.h"
#include "ui_panel.h"
#include <QDebug>

Panel::Panel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Panel)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(20,100,770,360);
    ui->view->setScene(scene);

    ui->view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    ui->view->show();

    p1 = new Player1();
    p1->setFlag(QGraphicsItem::ItemIsFocusable);
    p1->setFocus();
    jugadores.append(p1);
}

Panel::~Panel()
{
    delete ui;
}

void Panel::on_Iniciar_clicked()
{
    ui->lbl_nombre1->setText(nombre1);
    ui->lbl_nombre2->setText(nombre2);
    ui->Iniciar->setVisible(false);

    p1->setPos(30,200);
    scene->addItem(p1);


}

void Panel::setNombre2(const QString &value)
{
    nombre2 = value;
}

void Panel::setNombre1(const QString &value)
{
    nombre1 = value;
}
