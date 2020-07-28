#include "proyectil_invasor.h"

extern Panel *p;//Panel del general universo del juego

//Bala del invasor
Proyectil_invasor::Proyectil_invasor(double px, double py)
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
void Proyectil_invasor::detener()
{
    b_a_timer->stop();
}

//Funcion del movimiento de la bala: Movimiento Acelerado
void Proyectil_invasor::move()
{
    w = w + alfa * delta;
    fi = fi + w * alfa + 0.5 * alfa * delta * delta;
    setPos(-fi,y());
    //Coliciones con los jugadores
    QList <QGraphicsItem *> colliding_items = collidingItems();
    for (int i=0, n=colliding_items.size(); i < n; i++){
        if (typeid (*(colliding_items[i])) == typeid (Player)){
           scene()->removeItem(this);
           delete this;
           p->decrease(2);
        }
    }
    //Se elimina el item cuando sale de la escena
    if (pos().x() < -700){
        scene()->removeItem(this);
        delete this;
    }
}
