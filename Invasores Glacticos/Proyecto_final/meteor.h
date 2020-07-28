#ifndef METEOR_H
#define METEOR_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QTimer>
#include <stdlib.h>

class Meteor: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Meteor();

public slots:
    void Caer();

private:
    QTimer *timer;
};

#endif // METEOR_H
