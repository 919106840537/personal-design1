#include "cal_func.h"
#include "ui_cal_func.h"

cal_func::cal_func(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cal_func)
{
    ui->setupUi(this);
}

cal_func::~cal_func()
{
    delete ui;
}


void cal_func::on_base_cal_clicked()
{
    MainWindow * win = new MainWindow;
    this->hide();
    win->setWindowTitle("基础计算器");
    win->show();
}

void cal_func::on_trans_clicked()
{
    trans * win = new trans;
    this->hide();
    win->setWindowTitle("进制转换器");
    win->show();
}

void cal_func::on_cal_11_clicked()
{
    if (ui->a_11->text().isEmpty() || ui->b_11->text().isEmpty() || ui->x_11->text().isEmpty()){
        ui->f_11->setText("Error");
    }else{
        double a = ui->a_11->text().toDouble();
        double b = ui->b_11->text().toDouble();
        double x = ui->x_11->text().toDouble();
        double f = a * x + b;
        QString str = QString::number(f, 10, 6);
        ui->f_11->setText(str);
    }
}

void cal_func::on_cal_12_clicked()
{
    double a = ui->a_12->text().toDouble();
    double b = ui->b_12->text().toDouble();
    double c = ui->c_12->text().toDouble();
    double x = ui->x_12->text().toDouble();
    double f = getpow(a, x) + b * x + c;
    QString str = QString::number(f, 10, 6);
    ui->f_12->setText(str);
}

void cal_func::on_cal_inverse_clicked()
{
    double a = ui->a_inverse->text().toDouble();
    double x = ui->x_inverse->text().toDouble();
    double f = a / x;
    QString str = QString::number(f, 10, 6);
    ui->f_inverse->setText(str);
}

void cal_func::on_cal_index_clicked()
{
    double a = ui->a_index->text().toDouble();
    double x = ui->x_index->text().toDouble();
    double f = getpow(a, x);
    QString str = QString::number(f, 10, 6);
    ui->f_index->setText(str);
}

void cal_func::on_cal_log_clicked()
{
    double a = ui->a_log->text().toDouble();
    double x = ui->x_log->text().toDouble();
    double f = getlg(x) / getlg(a);
    QString str = QString::number(f, 10, 6);
    ui->f_log->setText(str);
}
