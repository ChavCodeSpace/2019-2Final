#include "aliado_superior.h"
#include <QDebug>

Aliado_superior::Aliado_superior()
{
    setRect(0,0,30,70);

    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(2000);
}

void Aliado_superior::move()
{
    setPos(x(),y()+70);
    if (pos().y() > 100.0){
       qDebug() << "aliado dispara";
       setPos(x(),y()-70);
       if (pos().y() < 70.0){
          qDebug()<<"elimino aliado";
   //       scene()->removeItem(this);
   //       delete this;
       }
    }

}
