#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>



QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_Validar_clicked();

    void on_instrucciones_clicked();

    void on_n_user_clicked();

    void on_salir_clicked();

private:
    Ui::Login *ui;
    QString name;
    QString pass;
};
#endif // LOGIN_H
