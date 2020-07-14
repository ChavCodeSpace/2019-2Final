#ifndef PLAYER1_H
#define PLAYER1_H

#include <QObject>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsRectItem>

class Player1: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Player1();
    void keyPressEvent(QKeyEvent * event);
};

#endif // PLAYER1_H
