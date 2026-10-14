#include "LAB6.h"
#include <QPushButton>
#include <QString>

LAB6::LAB6(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.btnCalcular, &QPushButton::clicked,
        this, &LAB6::calcularTotal);
    connect(ui.btnLimpiar, &QPushButton::clicked,
        this, &LAB6::limpiarFormulario);
}

void LAB6::calcularTotal()
{
    double precio = ui.spnPrecio->value();
    int cantidad = ui.spnCantidad->value();
    double total = precio * cantidad;
    ui.lblTotal->setText(
        QString("el Total: CRC %1").arg(total, 0, 'f', 2)
    );
}

LAB6::~LAB6()
{
   
}

void LAB6::limpiarFormulario()
{
    ui.spnPrecio->setValue(0);
    ui.spnCantidad->setValue(1);
    ui.lblTotal->setText("Total: CRC 0.00");
    ui.spnPrecio->setFocus();
}