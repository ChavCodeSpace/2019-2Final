#include "bala_aliado_inferior.h"
#include <QDebug>

extern Panel *p;//Panel del juego.

//Bala del aliado inferior derecho
Bala_aliado_inferior::Bala_aliado_inferior(double px, double py)
{
    fi = 3.14;
    w = 2.5;
    alfa = 2.5;
    delta = 0.1;
    posx = px;
    posy = py;
    setRect(px,py,15,15);

    b_a_timer = new QTimer();
    connect(b_a_timer,SIGNAL(timeout()),this,SLOT(move()));

    b_a_timer->start(50);
}

//Funcion para detener el movimiento de la bala
void Bala_aliado_inferior::detener()
{
    b_a_timer->stop();
}

//Funcion de movimiento: Movimiento Acelerado
void Bala_aliado_inferior::move()
{
    w = w + alfa * delta;
    fi = fi + w*alfa + 0.5*alfa*delta*delta;
    setPos(-fi,y());
    //qDebug()<<this->x();
    QList <QGraphicsItem *> colliding_items = collidingItems();
    for (int i=0, n=colliding_items.size(); i < n; i++){
        if (typeid (*(colliding_items[i])) == typeid (Player)){
           //Cuando las balas impactan, quitan vida y desaparecen
           p->decrease(2);
           scene()->removeItem(this);
           delete this;
        }
    }
    //Se elimina el item cuando sale de la escena
    if (pos().x() < -700){
        scene()->removeItem(this);
        delete this;
        //qDebug()<<"se elimino la bala del aliado 2";
    }
}
