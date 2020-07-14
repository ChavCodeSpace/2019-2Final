#include "player1.h"
#include <QDebug>

Player1::Player1()
{
    this->setRect(10,300,50,50);
}

void Player1::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_W){
        if (pos().y() > -200){
            setPos(x(),y()-20);
            //qDebug() << "pos subiendo"<<this->y();
        }
    }
    if (event->key() == Qt::Key_S){
        if (pos().y()+50 < 290){
            setPos(x(),y()+20);
            //qDebug() << "pos bajando"<<this->y();
        }
    }

}
