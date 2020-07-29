#include "login.h"
#include "ui_login.h"
#include "nuevouser.h"
#include "instrucciones.h"
#include "oponente.h"
#include <QFile>
#include <QDebug>
#include <QMessageBox>

//Login de usuarios al juego
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

//Boton para Validar el usuario ingresado
void Login::on_Validar_clicked()
{
    //Toma los valores en los campos
    name = ui->nombre->text();
    pass = ui->pass->text();

    QByteArray contenido;//Vector de bytes necesario para los QFile

    QFile archivo("../data/"+name+".txt");//busca el archivo
    if (!archivo.exists()){
        //qDebug() << "El Usuario no existe";
        QMessageBox::information(this,"Usuario","El Usuario no esta registrado");
        ui->nombre->clear();
        ui->pass->clear();
    }
    //Abre el archivo en modo de lectura
    archivo.open(QIODevice::ReadOnly | QIODevice::Text);
    if (!archivo.isOpen()){
        qDebug() << "No se pudo abrir el archivo";
    }else{
        contenido = archivo.readAll();//ReadAll devuelve un QByteArray. por eso era necesario definirlo
        if (contenido == pass){//Si el contenido es igual a la contraseña, se valida el usuario
            //qDebug() << "Clave correcta";
            QMessageBox::information(this,"Contraseña","Usuario Correcto");
            this->hide();
            Oponente *o = new Oponente();
            o->setModal(true);
            o->setNombre_jugador(name);
            o->show();
        }else{//Si la clave es incorrecta saca un mensaje y limpia los campos
            //qDebug() << "Clave incorrecta";
            QMessageBox::information(this,"Contraseña","Contraseña incorrecta");
            ui->nombre->clear();
            ui->pass->clear();
        }
    }
    archivo.close();//Cierra el archivo
}

//Boton para mostrar las instrucciones
void Login::on_instrucciones_clicked()
{
    this->hide();//Esconde esta ventana
    Instrucciones *I = new Instrucciones();
    I->setModal(true);//Cuando esta instruccion es verdadera, la ventana es emergente
    I->show();

}

//Boton para mostrar ventana de registro de nuevo usuario
void Login::on_n_user_clicked()
{
    this->hide();//Esconde esta ventana
    Nuevouser *w = new Nuevouser();//Crea la ventana de registro de usuario
    w->show();//la muestra
}

//Boton para cerrar la aplicacion
void Login::on_salir_clicked()
{
    this->close();//Cierra la aplicacion.
}

QString Login::getName() const
{
    return name;
}

void Login::setName(const QString &value)
{
    name = value;
}
