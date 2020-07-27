#include "aliado_superior.h"
#include <QDebug>

Aliado_superior::Aliado_superior()
{
    setRect(0,0,30,70);

    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(1000);
}

void Aliado_superior::move()
{
    setPos(x(),y()+70);
    //qDebug() << "dispara";
    Bala_aliado_superior *bala = new Bala_aliado_superior(1,this->x()+30,this->y());
    scene()->addItem(bala);
    if (pos().y() > 420.0){
       scene()->removeItem(this);
       delete this;
       //qDebug() << "aliado dispara";

    }

}
