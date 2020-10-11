#include "function_window.h"
#include "ui_function.h"

Function::Function(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Function)
{
    ui->setupUi(this);
}

Function::~Function()
{
    delete ui;
}
