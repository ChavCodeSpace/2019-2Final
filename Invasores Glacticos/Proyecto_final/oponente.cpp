#include "oponente.h"
#include "ui_oponente.h"
#include "game.h"

//Oponente del juego
Oponente::Oponente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Oponente)
{
    ui->setupUi(this);
}

Oponente::~Oponente()
{
    delete ui;
}

QString Oponente::getNombre_oponente() const
{
    return nombre_oponente;
}

void Oponente::setNombre_oponente(const QString &value)
{
    nombre_oponente = value;
}

//boton para capturar el nombre del oponene e iniciar el juego
void Oponente::on_aceptar_clicked()
{
    //captura el nombre ingresado y lo guarda
    QString aux;
    aux = ui->o_name->text();
    setNombre_oponente(aux);
    this->hide();//esconde esta ventana
    Game *g = new Game();//inicia el juego
    g->show();
}
