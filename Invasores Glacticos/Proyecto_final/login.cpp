#include "login.h"
#include "ui_login.h"
#include "nuevouser.h"
#include <QFile>
#include <QDebug>

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

//Validar el usuario ingresado
void Login::on_Validar_clicked()
{
    //Toma los valores en los campos
    name = ui->nombre->text();
    pass = ui->pass->text();
    QByteArray contenido;//Vector de bytes necesario para los QFile

    QFile archivo("../data/"+name+".txt");//busca el archivo
    if (!archivo.exists()){
        qDebug() << "El archivo no existe";
    }
    //Abre el archivo en modo de lectura
    archivo.open(QIODevice::ReadOnly | QIODevice::Text);
    if (!archivo.isOpen()){
        qDebug() << "No se pudo abrir el archivo";
    }else{
        contenido = archivo.readAll();//ReadAll devuelve un QByteArray. por eso era necesario definirlo
        if (contenido == pass){//Si el contenido es igual a la contraseña, se valida el usuario
            qDebug() << "Usuario existente";
        }else{
            qDebug() << "El usuario no existe";
        }
    }
    archivo.close();
}

void Login::on_instrucciones_clicked()
{

}

void Login::on_n_user_clicked()
{
    this->hide();//Esconde esta ventana
    Nuevouser *w = new Nuevouser();//Crea la ventana de registro de usuario
    w->show();//la muestra
}

void Login::on_salir_clicked()
{
    this->close();//Cierra la aplicacion.
}
