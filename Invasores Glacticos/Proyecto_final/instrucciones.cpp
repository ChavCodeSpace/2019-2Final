#include "instrucciones.h"
#include "ui_instrucciones.h"
#include "login.h"

//Instrucciones del juego
Instrucciones::Instrucciones(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Instrucciones)
{
    ui->setupUi(this);
}

Instrucciones::~Instrucciones()
{
    delete ui;
}

void Instrucciones::on_atras_clicked()
{
    //Esconde esta ventana y abre una nueva de Login
    this->hide();
    Login *w = new Login();
    w->show();
}
