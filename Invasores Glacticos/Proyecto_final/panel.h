#ifndef PANEL_H
#define PANEL_H

#include <QWidget>
#include <QList>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "oponente.h"
#include "login.h"
#include "player1.h"
#include "bala_jugador.h"

namespace Ui {
class Panel;
}

class Panel : public QWidget
{
    Q_OBJECT

public:
    explicit Panel(QWidget *parent = nullptr);
    ~Panel();
    QGraphicsScene *scene;
    Player1 *p1;

    void setNombre1(const QString &value);
    void setNombre2(const QString &value);

private slots:
    void on_Iniciar_clicked();

private:
    Ui::Panel *ui;
    QString nombre1;
    QString nombre2;

    QList<Player1 *> jugadores;
};

#endif // PANEL_H
