#include "aliado_superior.h"
#include <QDebug>

//Aliado superior izquierdo: Lado de los defensores
Aliado_superior::Aliado_superior()
{
    setRect(0,0,30,70);

    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(1000);
}

//Funcion para detener los tiempos del movimiento y la bala
void Aliado_superior::detener()
{
    timer->stop();
    bala->detener();
}

//Funcion para mover el aliado, este se mueve de arriba a abajo
void Aliado_superior::move()
{
    //Se mueve y dispara
    setPos(x(),y()+70);
    //qDebug() << "dispara";
    bala = new Bala_aliado_superior(this->x()+30,this->y());
    scene()->addItem(bala);
    if (pos().y() > 420.0){
       scene()->removeItem(this);
       delete this;
       //qDebug() << "aliado dispara";

    }

}
