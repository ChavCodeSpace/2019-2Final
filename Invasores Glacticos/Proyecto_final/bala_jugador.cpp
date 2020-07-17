#include "bala_jugador.h"
#include <QDebug>

//Balas de los jugadores
Bala_jugador::Bala_jugador(int t)
{
    setRect(0,0,30,10);

    QTimer *b_timer = new QTimer();
    //Dependiendo si es el jugador 1 o 2, se conecta el timer a una funcion de movimiento diferente.
    if (t == 1){
       connect(b_timer,SIGNAL(timeout()),this, SLOT(bullet_move_rigth()));//balas hacia la derecha
    }
    else if (t == 2){
        connect(b_timer,SIGNAL(timeout()),this, SLOT(bullet_move_left()));//balas hacia la izquierda
    }

    b_timer->start(50);
}

//Funcion para la accion despues de la colicion de la bala normal a un jugador
void Bala_jugador::choque(int p)
{
    if (p == 1){
        qDebug ()<<"b2 crash p1";
    }
    if (p == 2){
        qDebug()<<"b1 crash p2";
    }
}

//Funcion del movimiento de la bala hacia la izquierda
void Bala_jugador::bullet_move_left()
{
    setPos(x()-40,y());
    //this->choque(1);
    if(this->pos().x()<0){
        scene()->removeItem(this);
        delete this;
        //qDebug() <<"se elimino la bala";
    }
    //Coliciones con los jugadores
    QList <QGraphicsItem *> colliding_items = collidingItems();
    for (int i=0, n=colliding_items.size(); i < n; i++){
        if (typeid (*(colliding_items[i])) == typeid (Player)){
           choque(1);
        }
    }

}

//Funcion del movimiento de la bala hacia la derecha
void Bala_jugador::bullet_move_rigth()
{
    setPos(x()+40,y());
    //this->choque(2);
    if(this->pos().x()>770){
        scene()->removeItem(this);
        delete this;
        //qDebug() <<"se elimino la bala";
    }
    //Coliciones con los jugadores
    QList <QGraphicsItem *> colliding_items = collidingItems();
    for (int i=0, n=colliding_items.size(); i < n; i++){
        if (typeid (*(colliding_items[i])) == typeid (Player)){
           choque(2);
        }
    }
}
