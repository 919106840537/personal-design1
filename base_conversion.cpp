#include "base_conversion.h"
#include "ui_base_conversion.h"

Base_conversion::Base_conversion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Base_conversion)
{
    ui->setupUi(this);
}

Base_conversion::~Base_conversion()
{
    delete ui;
}
