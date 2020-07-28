#include "invasor.h"
#include <QDebug>

//Aliado invasor
Invasor::Invasor()
{
   setRect(0,0,30,60);

   timer = new QTimer();
   connect(timer,SIGNAL(timeout()),this,SLOT(move()));

   timer->start(1000);
}

//Funcion para detener el movimiento del invasor y su bala
void Invasor::detener()
{
    timer->stop();
    bala->detener();
}

//Funcion para el movimiento; va de abajo a arriba
void Invasor::move()
{
    //Se mueve y dispara
    setPos(x(),y()-60);
    bala = new Proyectil_invasor(this->x()-20, this->y());
    scene()->addItem(bala);
    if (pos().y()<100){
        scene()->removeItem(this);
        delete this;
    }
}
