#include "aliado_inferior.h"

//Aliado inferior derecho: Lado de los invasores
Aliado_inferior::Aliado_inferior()
{
    setRect(0,0,30,70);

    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(1000);

}

//Funcion para detener los tiempos del movimiento y la bala
void Aliado_inferior::detener()
{
    timer->stop();
    bala->detener();
}

//Funcion para el movimiento del aliado, este se mueve de abajo a arriba
void Aliado_inferior::move()
{
    //Se mueve y dispara
    setPos(x(),y()-70);
    bala = new Bala_aliado_inferior(this->x()-20,this->y());
    scene()->addItem(bala);
}
