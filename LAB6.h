#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LAB6.h"

class LAB6 : public QMainWindow
{
    Q_OBJECT

public:
    LAB6(QWidget *parent = nullptr);
    ~LAB6();

private:
    void calcularTotal();
    void limpiarFormulario();
    Ui::LAB6Class ui;
};

