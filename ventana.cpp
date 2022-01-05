#include "ventana.h"
#include "ui_ventana.h"

Ventana::Ventana(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Ventana)
{
    ui->setupUi(this);

    connect(ui->in_cent, SIGNAL(valueChanged(int)),
            this, SLOT(cent_conv(int)));

    connect(ui->in_fahr, SIGNAL(valueChanged(int)),
            this, SLOT(fahr_conv(int)));

}

Ventana::~Ventana()
{
    delete ui;
}

void Ventana::cent_conv(int i)
{
    if(ui->in_cent->hasFocus()){
        float fahr = (i * 9.0/5) + 32;
        ui->in_fahr->setValue(fahr);
    }
}

void Ventana::fahr_conv(int i)
{
    if(ui->in_fahr->hasFocus()){
        float cent = (i - 32) * 5.0/9;
        ui->in_cent->setValue(cent);
    }
}

void Ventana::kelv_conv(int i)
{
    if(ui->in_kelvin->hasFocus()){
        float cent = i - 273.15;
        ui->in_cent->setValue(cent);
    }
}

