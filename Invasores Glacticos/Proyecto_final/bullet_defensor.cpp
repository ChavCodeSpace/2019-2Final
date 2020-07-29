#include "bullet_defensor.h"
#include <QDebug>


extern Panel *p;//Objeto global del panel principal del juego

//Bala del defensor
Bullet_defensor::Bullet_defensor(double px, double py)
{
    posx = px;
    posy = py;
    vel = 60.0;
    ang = 45.0;
    setRect(posx,posy,20,20);

    bala_timer = new QTimer();
    connect(bala_timer,SIGNAL(timeout()),this,SLOT(move()));

    bala_timer->start(50);

}

//Funcion para detener el movimiento de la bala
void Bullet_defensor::detener()
{
   bala_timer->stop();
   sonido_choque->stop();
}

//Funcion del movimiento de la bala: Parabolico + gravitacional
void Bullet_defensor::move()
{
    sonido_choque = new QMediaPlayer();

    vel_x=vel*cos(ang);
    vel_y=vel*sin(ang)-g*delta;
    ang=atan2(vel_y,vel_x);
    vel= sqrt(vel_x*vel_x+ vel_y*vel_y);
    posx=posx+vel_x*delta;
    posy=posy+vel_y*delta-(0.5*g*delta*delta);
    setPos(posx,-posy);
    //qDebug() << "bala en " << this->y();
    //Coliciones con los jugadores
    QList <QGraphicsItem *> colliding_items = collidingItems();
    for (int i=0, n=colliding_items.size(); i < n; i++){
        if (typeid (*(colliding_items[i])) == typeid (Player)){
           p->decrease(1);
           sonido_choque->setMedia(QUrl("qrc:/sounds/explocion.mp3"));
           sonido_choque->play();
           scene()->removeItem(this);
           delete this;           
        }
    }
    //Se elimina el item cuando sale de la escena
    if (pos().y() > 400){
        scene()->removeItem(this);
        delete this;
        //qDebug() << "se elimino la bala";
    }
}
