#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>


//Clase del Login de los Usuarios
QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

    QString getName() const;
    void setName(const QString &value);

private slots:
    void on_Validar_clicked();

    void on_instrucciones_clicked();

    void on_n_user_clicked();

    void on_salir_clicked();

private:
    Ui::Login *ui;
    //variables para el login
    QString name;
    QString pass;
};
#endif // LOGIN_H
