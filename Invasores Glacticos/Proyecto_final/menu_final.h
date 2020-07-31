#ifndef MENU_FINAL_H
#define MENU_FINAL_H

#include <QDialog>

//Clase del menu final del juego
namespace Ui {
class Menu_final;
}

class Menu_final : public QDialog
{
    Q_OBJECT

public:
    explicit Menu_final(QWidget *parent = nullptr);
    ~Menu_final();

    //Metodos get y set
    void setNombre_ganador(const QString &value);
    QString getNombre_ganador() const;

    QString getNombre_perdedor() const;
    void setNombre_perdedor(const QString &value);

private slots:    
    void on_nuevo_juego_clicked();
    void on_tablon_clicked();
    void on_salir_clicked();

private:
    Ui::Menu_final *ui;
    //variables para guardar el archivo
    QString nombre_ganador;
    QString nombre_perdedor;
};

#endif // MENU_FINAL_H
