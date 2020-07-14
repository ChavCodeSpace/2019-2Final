#include "player2.h"

Player2::Player2()
{
    this->setRect(930,300,50,50);
}

void Player2::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_I){
        if (pos().y() > -200){
            setPos(x(),y()-20);
            //qDebug() << "pos subiendo"<<this->y();
        }
    }
    if (event->key() == Qt::Key_K){
        if (pos().y()+50 < 290){
            setPos(x(),y()+20);
            //qDebug() << "pos bajando"<<this->y();
        }
    }

}
