#include "meteor.h"
#include <QDebug>

Meteor::Meteor()
{
    setRect(0,0,30,30);

    int random_number = (rand() % 600) + 100;
    setPos(random_number,0);

    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(Caer()));

    timer->start(50);
}

void Meteor::Caer()
{
    setPos(x(),y()+5);

    if (pos().y() > 430.0){
        scene()->removeItem(this);
        delete this;
        //qDebug() << "se elimino el meteorito";
    }
}
