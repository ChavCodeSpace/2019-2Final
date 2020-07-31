#include "meteor.h"
#include <QDebug>

//Meteoritos
Meteor::Meteor()
{
    //Dibuja el meteorito
    //setRect(0,0,30,30);
    setPixmap(QPixmap(":/images/Meteorito.png"));

    //Toma un numero random para la posicion
    int random_number = (rand() % 600) + 100;
    setPos(random_number,0);

    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(Caer()));

    timer->start(50);
}

//Funcion del movimiento en caida libre de los meteoritos
void Meteor::Caer()
{
    setPos(x(),y()+5);
    //Se elimina el objeto cuando sale de los limites de la escena
    if (pos().y() > 430.0){
        scene()->removeItem(this);
        delete this;
        //qDebug() << "se elimino el meteorito";
    }
}
