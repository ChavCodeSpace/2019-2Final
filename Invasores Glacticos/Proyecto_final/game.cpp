#include "game.h"
#include <QDebug>

//Universo del juego
Game::Game(QWidget *parent)
{
    scene = new  QGraphicsScene(0,0,1000,600);
    setScene(scene);

    //scrollbar desactivadas
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    setFixedSize(1000,600);

    //Linea superior
    QPen pen = QPen(Qt::cyan);
    pen.setWidth(10);
    QLineF TopLine(0,100,1000,100);
    scene->addLine(TopLine,pen);

    //qDebug() << l->getName();
    //qDebug() << o->getNombre_oponente();

    //Nombres de jugadores
    //QGraphicsTextItem *nombre_1 = new QGraphicsTextItem(l->getName());
    //nombre_1->setDefaultTextColor(Qt::black);
    //nombre_1->setFont(QFont("arial",20));
    //scene->addItem(nombre_1);

    //nombre_1->setPos(0,0);
    //QGraphicsTextItem *nombre_2 = new QGraphicsTextItem();
    //nombre_2->setPlainText(o->getNombre_oponente());
    //nombre_2->setDefaultTextColor(Qt::black);
    //nombre_2->setFont(QFont("arial",20));
    //scene->addItem(nombre_2);
    //qDebug()<< nombre_2;
    //nombre_2->setPos(800,0);

    //Jugador 1 - lado izquierdo
    Player1 *p1 = new Player1();
    scene->addItem(p1);
    p1->setFlag(QGraphicsItem::ItemIsFocusable);
    p1->setFocus();

    Player2 *p2 = new Player2();
    scene->addItem(p2);
    p2->setFlag(QGraphicsItem::ItemIsFocusable);
    p2->setFocus();


    show();

}

