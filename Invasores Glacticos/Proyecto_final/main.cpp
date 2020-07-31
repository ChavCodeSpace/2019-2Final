#include "login.h"
#include "panel.h"
#include <stdlib.h>

#include <QApplication>

/*
 * Nombre del Juego: Invasores Espaciales
 * Semestre: 2019-2
 * Desarrollado como proyecto final de la materia Informatica II
 * Christian Gallego Chaverra
 */

Panel *p;//Objeto global del panel principal del juego

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    srand(time(NULL));//Para que los numeros aleatorios sean diferentes con cada ejecucion
    Login w;
    w.show();
    return a.exec();
}
