#include "panel.h"
#include "ui_panel.h"
#include <QDebug>
#include <QGraphicsItem>

//Universo del juego
Panel::Panel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Panel)
{
    ui->setupUi(this);
    //Escena
    scene = new QGraphicsScene(20,100,770,360);
    ui->view->setScene(scene);

    ui->view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    ui->view->show();

    //Jugadores
    p1 = new Player();
    jugadores.push_back(p1);

    p2 = new Player();
    jugadores.push_back(p2);

    //Obstaculos
    Wall *muro1 = new Wall();
    muro1->setPos(130,130);
    scene->addItem(muro1);
    Wall *muro2 = new Wall();
    muro2->setPos(130,330);
    scene->addItem(muro2);
    Wall *muro3 = new Wall();
    muro3->setPos(650,130);
    scene->addItem(muro3);
    Wall *muro4 = new Wall();
    muro4->setPos(650,330);
    scene->addItem(muro4);

}

Panel::~Panel()
{
    delete ui;
}

void Panel::on_Iniciar_clicked()
{
    //Setea los nombres y las vidas
    ui->lbl_nombre1->setText(nombre1);
    ui->lbl_nombre2->setText(nombre2);
    ui->lbl_vida1->setText(QString::number(vida1));
    ui->lbl_vida2->setText(QString::number(vida2));
    ui->Iniciar->setVisible(false);//Esconde el boton

    //Muestra Personajes
    p1->setPos(30,250);
    scene->addItem(p1);
    p2->setPos(720,250);
    scene->addItem(p2);


}

//Funcion para el movimiento de los jugadores
void Panel::keyPressEvent(QKeyEvent *event)
{
    if (jugadores.size()>0 && jugadores.size()<2){
        if (event->key() == Qt::Key_W){
            if (jugadores.at(0)->pos().y() > 100){
                jugadores.at(0)->setPos(jugadores.at(0)->x(),jugadores.at(0)->y()-10);
                //qDebug() << "pos subiendo"<<this->y();
            }
        }
        if (event->key() == Qt::Key_S){
            if (jugadores.at(0)->pos().y() < 400){
                jugadores.at(0)->setPos(jugadores.at(0)->x(),jugadores.at(0)->y()+10);
                //qDebug() << "pos bajando"<<this->y();
            }
        }
        if (event->key() == Qt::Key_D){
            Bala_jugador *bala = new Bala_jugador(1);
            bala->setPos(jugadores.at(0)->x()+50,jugadores.at(0)->y());
            scene->addItem(bala);
        }
    }
    else if(jugadores.size()==2){
        if (event->key() == Qt::Key_W){
            if (jugadores.at(0)->pos().y() > 100){
                jugadores.at(0)->setPos(jugadores.at(0)->x(),jugadores.at(0)->y()-10);
                //qDebug() << "pos subiendo"<<jugadores.at(0)->y();
            }
        }
        if (event->key() == Qt::Key_S){
            if (jugadores.at(0)->pos().y() < 400){
                jugadores.at(0)->setPos(jugadores.at(0)->x(),jugadores.at(0)->y()+10);
                //qDebug() << "pos bajando"<<jugadores.at(0)->y();
            }
        }
        if (event->key() == Qt::Key_D){
            Bala_jugador *bala = new Bala_jugador(1);
            bala->setPos(jugadores.at(0)->x()+52,jugadores.at(0)->y());
            scene->addItem(bala);
        }
        if (event->key() == Qt::Key_I){
            if (jugadores.at(1)->pos().y() > 100){
                jugadores.at(1)->setPos(jugadores.at(1)->x(),jugadores.at(1)->y()-10);
                //qDebug() << "pos subiendo"<<jugadores.at(1)->y();
            }
        }
        if (event->key() == Qt::Key_K){
            if (jugadores.at(1)->pos().y() < 400){
                jugadores.at(1)->setPos(jugadores.at(1)->x(),jugadores.at(1)->y()+10);
                //qDebug() << "pos bajando"<<jugadores.at(1)->y();
            }
        }
        if (event->key() == Qt::Key_J){
            Bala_jugador *bala = new Bala_jugador(2);
            bala->setPos(jugadores.at(1)->x()-32,jugadores.at(1)->y());
            scene->addItem(bala);            
        }
    }
}

//Funcion para restar vida
void Panel::decrease(int t)
{
    if (t == 1){
       vida1 -= 10;
       ui->lbl_vida1->setText(QString::number(vida1));
    }
    else if (t == 2){
       vida2 -= 10;
       ui->lbl_vida2->setText(QString::number(vida2));
    }
}

void Panel::setNombre1(const QString &value)
{
    nombre1 = value;
}

void Panel::setNombre2(const QString &value)
{
    nombre2 = value;
}
