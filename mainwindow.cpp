#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_2->setReadOnly(true);
    ui->lineEdit->setReadOnly(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_num_1_clicked()
{
    if (cal == 0){
        ui->lineEdit->setText(text);
        answer.clear();
        ui->lineEdit_2->setText(answer);
    }
    if (text == "0")
       text = "1";
    else
        text += "1";
    ui->lineEdit->setText(text);
}

void MainWindow::on_num_2_clicked()
{
    if (cal == 0){
        ui->lineEdit->setText(text);
        answer.clear();
        ui->lineEdit_2->setText(answer);
    }
    if (text == "0")
       text = "2";
    else
        text += "2";
    ui->lineEdit->setText(text);
}

void MainWindow::on_num_3_clicked()
{
    if (cal == 0){
        ui->lineEdit->setText(text);
        answer.clear();
        ui->lineEdit_2->setText(answer);
    }
    if (text == "0")
       text = "3";
    else
        text += "3";
    ui->lineEdit->setText(text);
}

void MainWindow::on_num_4_clicked()
{
    if (cal == 0){
        ui->lineEdit->setText(text);
        answer.clear();
        ui->lineEdit_2->setText(answer);
    }
    if (text == "0")
       text = "4";
    else
        text += "4";
    ui->lineEdit->setText(text);
}

void MainWindow::on_num_5_clicked()
{
    if (cal == 0){
        ui->lineEdit->setText(text);
        answer.clear();
        ui->lineEdit_2->setText(answer);
    }
    if (text == "0")
       text = "5";
    else
        text += "5";
    ui->lineEdit->setText(text);
}

void MainWindow::on_num_6_clicked()
{
    if (cal == 0){
        ui->lineEdit->setText(text);
        answer.clear();
        ui->lineEdit_2->setText(answer);
    }
    if (text == "0")
       text = "6";
    else
        text += "6";
    ui->lineEdit->setText(text);
}

void MainWindow::on_num_7_clicked()
{
    if (cal == 0){
        ui->lineEdit->setText(text);
        answer.clear();
        ui->lineEdit_2->setText(answer);
    }
    if (text == "0")
       text = "7";
    else
        text += "7";
    ui->lineEdit->setText(text);
}

void MainWindow::on_num_8_clicked()
{
    if (cal == 0){
        ui->lineEdit->setText(text);
        answer.clear();
        ui->lineEdit_2->setText(answer);
    }
    if (text == "0")
       text = "8";
    else
        text += "8";
    ui->lineEdit->setText(text);
}

void MainWindow::on_num_9_clicked()
{
    if (cal == 0){
        ui->lineEdit->setText(text);
        answer.clear();
        ui->lineEdit_2->setText(answer);
    }
    if (text == "0")
       text = "9";
    else
        text += "9";
    ui->lineEdit->setText(text);
}

void MainWindow::on_num_0_clicked()
{
    if (cal == 0){
        ui->lineEdit->setText(text);
        answer.clear();
        ui->lineEdit_2->setText(answer);
    }
    if (text == "0")
       text = "0";
    else
        text += "0";
    ui->lineEdit->setText(text);
}

void MainWindow::on_point_clicked()
{
    if (cal == 0){
        ui->lineEdit->setText(text);
        answer.clear();
        ui->lineEdit_2->setText(answer);
    }
    if (text.isEmpty())
        text = "0.";
    else if (text.right(1) == ".")
        text = text;
    else if (text == "0")
       text = "0.";
    else
        text += ".";
    ui->lineEdit->setText(text);
}

void MainWindow::on_cot_clicked()
{
    if (text.isEmpty() && !answer.isEmpty()){
       text = answer;
        ui->lineEdit->setText(text);
        double t = text.toDouble();
        double ans = getcot(t);
        answer = QString::number(ans, 10, 6);
        ui->lineEdit_2->setText(answer);
    }
    else if (!text.isEmpty()){
        temp = text;
        text.clear();
        double t = temp.toDouble();
        double ans = getcot(t);
        answer = QString::number(ans, 10, 6);
        ui->lineEdit_2->setText(answer);
    }
    if (text.isEmpty() && answer.isEmpty()){
        ui->lineEdit_2->setText("Error");
    }
}

void MainWindow::on_tan_clicked()
{
    if (text.isEmpty() && !answer.isEmpty()){
        text = answer;
        ui->lineEdit->setText(text);
        double t = text.toDouble();
        double ans = gettan(t);
        answer = QString::number(ans, 10, 6);
        ui->lineEdit_2->setText(answer);
    }
    else if (!text.isEmpty()){
        temp = text;
        text.clear();
        double t = temp.toDouble();
        double ans = gettan(t);
        answer = QString::number(ans, 10, 6);
        ui->lineEdit_2->setText(answer);
    }
    if (text.isEmpty() && answer.isEmpty()){
        ui->lineEdit_2->setText("Error");
    }
}

void MainWindow::on_cos_clicked()
{
    if (text.isEmpty() && !answer.isEmpty()){
        text = answer;
        ui->lineEdit->setText(text);
        double t = text.toDouble();
        double ans = getcos(t);
        answer = QString::number(ans, 10, 6);
        ui->lineEdit_2->setText(answer);
    }
    else if (!text.isEmpty()){
        temp = text;
        text.clear();
        double t = temp.toDouble();
        double ans = getcos(t);
        answer = QString::number(ans, 10, 6);
        ui->lineEdit_2->setText(answer);
    }
    if (text.isEmpty() && answer.isEmpty()){
        ui->lineEdit_2->setText("Error");
    }
}

void MainWindow::on_sin_clicked()
{
    if (text.isEmpty() && !answer.isEmpty()){
        ui->lineEdit->setText(text);
        double t = text.toDouble();
        double ans = getsin(t);
        answer = QString::number(ans, 10, 6);
        ui->lineEdit_2->setText(answer);
    }
    else if (!text.isEmpty()){
        temp = text;
        text.clear();
        double t = temp.toDouble();
        double ans = getsin(t);
        answer = QString::number(ans, 10, 6);
        ui->lineEdit_2->setText(answer);
    }
    if (text.isEmpty() && answer.isEmpty()){
        ui->lineEdit_2->setText("Error");
    }
}

void MainWindow::on_pow_clicked()
{
    if (text.isEmpty() && answer.isEmpty()){
        ui->lineEdit_2->setText("Error");
    }
    else if (!text.isEmpty() && !answer.isEmpty()){
        switch(cal){
        case 1:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num1 + num2;
            cal = 5;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        case 2:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num2 - num1;
            cal = 5;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        case 3:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num2 * num1;
            cal = 5;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        case 4:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num2 / num1;
            cal = 5;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        case 5:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = getpow(num1, num2);
            cal = 5;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        }
    }
    else if (!text.isEmpty() && answer.isEmpty()){
        answer = text;
        text.clear();
        ui->lineEdit_2->setText(answer);
        ui->lineEdit->setText(text);
        cal = 5;
    }


}

void MainWindow::on_sqrt_clicked()
{
    if (text.isEmpty() && answer.isEmpty())
    {
        ui->lineEdit_2->setText("Error");
    }else if (!text.isEmpty()){
        temp = text;
        text.clear();
        double num = temp.toDouble();
        double ans = getsqrt(num);
        answer = QString::number(ans, 10, 6);
        ui->lineEdit_2->setText(answer);
    }
        else if (text.isEmpty() && !answer.isEmpty()){
             text = answer;
             temp = text;
             ui->lineEdit->setText(text);
             double num = temp.toDouble();
             double ans = getsqrt(num);
             answer =QString::number(ans, 10, 6);
             ui->lineEdit_2->setText(answer);
    }
}

void MainWindow::on_add_clicked()
{
    if (!text.isEmpty() && !answer.isEmpty()){
        switch(cal){
        case 1:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num1 + num2;
            cal = 1;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        case 2:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num2 - num1;
            cal = 1;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        case 3:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num2 * num1;
            cal = 1;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        case 4:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num2 / num1;
            cal = 1;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        case 5:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = getpow(num1, num2);
            cal = 1;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        }
    }else if (text.isEmpty() && answer.isEmpty()){
        ui->lineEdit_2->setText("Error");
    }else if (!text.isEmpty() && answer.isEmpty()){
        answer = text;
        ui->lineEdit_2->setText(answer);
        text.clear();
        ui->lineEdit->setText(text);
        cal = 1;
    }
}

void MainWindow::on_sub_clicked()
{
    if (!text.isEmpty() && !answer.isEmpty()){
        switch(cal){
        case 1:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num1 + num2;
            cal = 2;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        case 2:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num2 - num1;
            cal = 2;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        case 3:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num2 * num1;
            cal = 2;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        case 4:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num2 / num1;
            cal = 2;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        case 5:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = getpow(num1, num2);
            cal = 2;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        }
    }else if (text.isEmpty() && answer.isEmpty()){
        ui->lineEdit_2->setText("Error");
    }else if (!text.isEmpty() && answer.isEmpty()){
        answer = text;
        ui->lineEdit_2->setText(answer);
        text.clear();
        ui->lineEdit->setText(text);
        cal = 2;
    }
}

void MainWindow::on_multi_clicked()
{
    if (!text.isEmpty() && !answer.isEmpty()){
        switch(cal){
        case 1:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num1 + num2;
            cal = 3;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        case 2:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num2 - num1;
            cal = 3;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        case 3:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num2 * num1;
            cal = 3;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        case 4:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num2 / num1;
            cal = 3;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        case 5:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = getpow(num1, num2);
            cal = 3;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        }
    }else if (text.isEmpty() && answer.isEmpty()){
        ui->lineEdit_2->setText("Error");
    }else if (!text.isEmpty() && answer.isEmpty()){
        answer = text;
        ui->lineEdit_2->setText(answer);
        text.clear();
        ui->lineEdit->setText(text);
        cal = 3;
    }
}

void MainWindow::on_div_clicked()
{
    if (!text.isEmpty() && !answer.isEmpty()){
        switch(cal){
        case 1:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num1 + num2;
            cal = 4;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        case 2:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num2 - num1;
            cal = 4;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;}
        case 3:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num2 * num1;
            cal = 4;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        case 4:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num2 / num1;
            cal = 4;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        case 5:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = getpow(num1, num2);
            cal = 4;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            break;
        }
        }
    }else if (text.isEmpty() && answer.isEmpty()){
        ui->lineEdit_2->setText("Error");
    }else if (!text.isEmpty() && answer.isEmpty()){
        answer = text;
        ui->lineEdit_2->setText(answer);
        text.clear();
        ui->lineEdit->setText(text);
        cal = 4;
    }
}

void MainWindow::on_back_clicked()
{
    text = text.left(text.length() - 1);
    ui->lineEdit_2->setText(text);
}

void MainWindow::on_equal_clicked()
{
    if (text.isEmpty() && answer.isEmpty()){
        ui->lineEdit_2->setText("Error");
    }else if (text.isEmpty() && !answer.isEmpty()){
        ui->lineEdit_2->setText(answer);
    }else if (!text.isEmpty() && !answer.isEmpty()){
        switch(cal){
        case 1:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num1 + num2;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            cal = 0;
            break;
        }
        case 2:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num2 - num1;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            cal = 0;
            break;}
        case 3:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num2 * num1;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            cal = 0;
            break;
        }
        case 4:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = num2 / num1;
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            cal = 0;
            break;
        }
        case 5:{
            temp = text;
            text.clear();
            double num1 = temp.toDouble();
            double num2 = answer.toDouble();
            double ans = getpow(num1, num2);
            answer = QString::number(ans, 10, 6);
            ui->lineEdit_2->setText(answer);
            ui->lineEdit->setText(text);
            cal = 0;
            break;
    }
}
    }else if (!text.isEmpty() && answer.isEmpty()){
        answer = text;
        ui->lineEdit_2->setText(answer);
        text.clear();
        ui->lineEdit->setText(text);
    }
}

void MainWindow::on_Clear_clicked()
{
    answer.clear();
    temp.clear();
    text.clear();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
}

void MainWindow::on_log_fun_clicked()
{
    if ((text.isEmpty() && answer.isEmpty()) ||(!text.isEmpty() && !answer.isEmpty())){
        ui->lineEdit_2->setText("Error");
    }else if (text.isEmpty() && !answer.isEmpty()){
        double num = answer.toDouble();
        double ans = getln(num);
        answer = QString::number(ans, 10, 6);
        ui->lineEdit_2->setText(answer);
    }else if (!text.isEmpty() && answer.isEmpty()){
        double num = text.toDouble();
        double ans = getln(num);
        answer = QString::number(ans, 10, 6);
        ui->lineEdit_2->setText(answer);
        text.clear();
        ui->lineEdit->setText(text);
    }
}

void MainWindow::on_trans_btn_clicked()
{
    trans * win =new trans;
    win->show();
    win->setWindowTitle("进制转换器");
    this->hide();
}

void MainWindow::on_func_btn_clicked()
{
    cal_func * win = new cal_func;
    win->show();
    win->setWindowTitle("函数计算器");
    this->hide();
}
