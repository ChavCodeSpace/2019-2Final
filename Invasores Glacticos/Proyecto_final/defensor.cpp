#include "defensor.h"

//Aliado defensor
Defensor::Defensor()
{
    //Dibuja el defensor
    //setRect(0,0,30,60);
    setPixmap(QPixmap(":/images/Aliado Terrestre.png"));

    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(1000);

}

//Funcion para detener el movimiento del defensor y su bala
void Defensor::detener()
{    
    timer->stop();
    bala->detener();
//    for(QList<Bullet_defensor*>::Iterator it= balas.begin(); it!=balas.end(); it++)
//    {
//        (*it)->detener();
//    }
}

//Funcion para el movimiento del defensor
void Defensor::move()
{
    //Se mueve y dispara
    setPos(x(),y()+60);
    bala = new Bullet_defensor(this->x()+30,this->y());
    //bala->setPixmap(QPixmap(":/images/Bala pasiva terrestre.png"));
    //balas.push_back(bala);
    scene()->addItem(bala);
    //Se elimina el objeto cuando sale de los limites de la escena
    if (pos().y() > 420.0){
        scene()->removeItem(this);
        delete this;
    }
}

//QList<Bullet_defensor *> Defensor::getBalas() const
//{
//    return balas;
//}
