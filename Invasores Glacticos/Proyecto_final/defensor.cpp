#include "defensor.h"

//Aliado defensor
Defensor::Defensor()
{
    setRect(0,0,30,60);

    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(1000);

}

//Funcion para detener el movimiento del defensor y su bala
void Defensor::detener()
{    
    timer->stop();
    bala->detener();
}

//Funcion para el movimiento del defensor
void Defensor::move()
{
    //Se mueve y dispara
    setPos(x(),y()+60);
    bala = new Bullet_defensor(this->x()+30,this->y());
    scene()->addItem(bala);
    //Se elimina el objeto cuando sale de los limites de la escena
    if (pos().y() > 420.0){
        scene()->removeItem(this);
        delete this;
    }
}
