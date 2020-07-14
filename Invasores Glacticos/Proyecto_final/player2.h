#ifndef PLAYER2_H
#define PLAYER2_H

#include <QObject>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsRectItem>


class Player2: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Player2();
    void keyPressEvent(QKeyEvent * event);
};

#endif // PLAYER2_H
