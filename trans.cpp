#include "trans.h"
#include "ui_trans.h"

trans::trans(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::trans)
{
    ui->setupUi(this);
}

trans::~trans()
{
    delete ui;
}

void trans::on_pushButton_2_clicked()
{
    cal_func* win = new cal_func;
    win->show();
    win->setWindowTitle("函数计算器");
    delete this;
}

void trans::on_base_cal_clicked()
{
    MainWindow* win = new MainWindow;
    win->show();
    win->setWindowTitle("基础计算器");
    delete this;
}

void trans::on_add_clicked()
{
    bool ok;
    int num1, num2;
    switch(tran1){
    case 2:{
        num1 = ui->lineEdit->text().toInt(&ok, 2);
        temp1 = QString::number(num1, 10);
        num1 = temp1.toInt(&ok, 10);
        break;
    }case 10:{
        num1 = ui->lineEdit->text().toInt(&ok, 10);
        break;
    }case 16:{
        num1 = ui->lineEdit->text().toInt(&ok, 16);
        temp1 = QString::number(num1, 10);
        num1 = temp1.toInt(&ok, 10);
        break;
    }
    }
    switch (tran2){
    case 2:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 2);
        temp2 = QString::number(num2, 10);
        num2= temp2.toInt(&ok, 10);
        break;
    }case 10:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 10);
        break;
    }case 16:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 16);
        temp2 = QString::number(num2, 10);
        num2 = temp2.toInt(&ok, 10);
        break;
    }
    }
    int num = num1 + num2;
    text.clear();
    ui->lineEdit->setText(text);
    ui->lineEdit_2->setText(text);
    switch (tran3){
    case 2:{
        answer = QString::number(num, 2);
        ui->lineEdit_3->setText(answer);
        answer.clear();
        break;
    }case 10:{
        answer = QString::number(num, 10);
        ui->lineEdit_3->setText(answer);
        answer.clear();
        break;
    }case 16:{
        answer = QString::number(num, 16);
        ui->lineEdit_3->setText(answer);
        answer.clear();
        break;
    }
    }

}

void trans::on_sub_clicked()
{
    bool ok;
    int num1, num2;
    switch(tran1){
    case 2:{
        num1 = ui->lineEdit->text().toInt(&ok, 2);
        temp1 = QString::number(num1, 10);
        num1 = temp1.toInt(&ok, 10);
        break;
    }case 10:{
        num1 = ui->lineEdit->text().toInt(&ok, 10);
        break;
    }case 16:{
        num1 = ui->lineEdit->text().toInt(&ok, 16);
        temp1 = QString::number(num1, 10);
        num1 = temp1.toInt(&ok, 10);
        break;
    }
    }
    switch (tran2){
    case 2:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 2);
        temp2 = QString::number(num2, 10);
        num2= temp2.toInt(&ok, 10);
        break;
    }case 10:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 10);
        break;
    }case 16:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 16);
        temp2 = QString::number(num2, 10);
        num2 = temp2.toInt(&ok, 10);
        break;
    }
    }
    int num = num1 - num2;
    text.clear();
    ui->lineEdit->setText(text);
    ui->lineEdit_2->setText(text);
    switch (tran3){
    case 2:{
        answer = QString::number(num, 2);
        ui->lineEdit_3->setText(answer);
        answer.clear();
        break;
    }case 10:{
        answer = QString::number(num, 10);
        ui->lineEdit_3->setText(answer);
        answer.clear();
        break;
    }case 16:{
        answer = QString::number(num, 16);
        ui->lineEdit_3->setText(answer);
        answer.clear();
        break;
    }
    }

}

void trans::on_multi_clicked()
{
    bool ok;
    int num1, num2;
    switch(tran1){
    case 2:{
        num1 = ui->lineEdit->text().toInt(&ok, 2);
        temp1 = QString::number(num1, 10);
        num1 = temp1.toInt(&ok, 10);
        break;
    }case 10:{
        num1 = ui->lineEdit->text().toInt(&ok, 10);
        break;
    }case 16:{
        num1 = ui->lineEdit->text().toInt(&ok, 16);
        temp1 = QString::number(num1, 10);
        num1 = temp1.toInt(&ok, 10);
        break;
    }
    }
    switch (tran2){
    case 2:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 2);
        temp2 = QString::number(num2, 10);
        num2= temp2.toInt(&ok, 10);
        break;
    }case 10:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 10);
        break;
    }case 16:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 16);
        temp2 = QString::number(num2, 10);
        num2 = temp2.toInt(&ok, 10);
        break;
    }
    }
    int num = num1 * num2;
    text.clear();
    ui->lineEdit->setText(text);
    ui->lineEdit_2->setText(text);
    switch (tran3){
    case 2:{
        answer = QString::number(num, 2);
        ui->lineEdit_3->setText(answer);
        answer.clear();
        break;
    }case 10:{
        answer = QString::number(num, 10);
        ui->lineEdit_3->setText(answer);
        answer.clear();
        break;
    }case 16:{
        answer = QString::number(num, 16);
        ui->lineEdit_3->setText(answer);
        answer.clear();
        break;
    }
    }

}

void trans::on_div_clicked()
{
    bool ok;
    int num1, num2;
    switch(tran1){
    case 2:{
        num1 = ui->lineEdit->text().toInt(&ok, 2);
        temp1 = QString::number(num1, 10);
        num1 = temp1.toInt(&ok, 10);
        break;
    }case 10:{
        num1 = ui->lineEdit->text().toInt(&ok, 10);
        break;
    }case 16:{
        num1 = ui->lineEdit->text().toInt(&ok, 16);
        temp1 = QString::number(num1, 10);
        num1 = temp1.toInt(&ok, 10);
        break;
    }
    }
    switch (tran2){
    case 2:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 2);
        temp2 = QString::number(num2, 10);
        num2= temp2.toInt(&ok, 10);
        break;
    }case 10:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 10);
        break;
    }case 16:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 16);
        temp2 = QString::number(num2, 10);
        num2 = temp2.toInt(&ok, 10);
        break;
    }
    }
    int num = num1 / num2;
    text.clear();
    ui->lineEdit->setText(text);
    ui->lineEdit_2->setText(text);
    switch (tran3){
    case 2:{
        answer = QString::number(num, 2);
        ui->lineEdit_3->setText(answer);
        answer.clear();
        break;
    }case 10:{
        answer = QString::number(num, 10);
        ui->lineEdit_3->setText(answer);
        answer.clear();
        break;
    }case 16:{
        answer = QString::number(num, 16);
        ui->lineEdit_3->setText(answer);
        answer.clear();
        break;
    }
    }

}

void trans::on_clear_clicked()
{
    text.clear();
    temp1.clear();
    temp2.clear();
    answer.clear();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    tran1 = 10;
    tran2 = 10;
    tran3 = 10;
}

void trans::on_two_clicked()
{
    bool ok;
    if (tran1 == 2){
        text = ui->lineEdit->text();
        ui->lineEdit->setText(text);
        text.clear();
    }else if (tran1 == 10){
        int num = ui->lineEdit->text().toInt(&ok, 10);
        text = QString::number(num, 2);
        ui->lineEdit->setText(text);
        text.clear();
    }else if (tran1 == 16){
        int num = ui->lineEdit->text().toInt(&ok, 16);
        text = QString::number(num, 2);
        ui->lineEdit->setText(text);
        text.clear();
    }
    tran1 = 2;
}

void trans::on_ten_clicked()
{
    bool ok;
    if (tran1 == 2){
        int num = ui->lineEdit->text().toInt(&ok, 2);
        text = QString::number(num, 10);
        ui->lineEdit->setText(text);
        text.clear();
    }else if (tran1 == 10){
        text = ui->lineEdit->text();
        ui->lineEdit->setText(text);
        text.clear();
    }else if (tran1 == 16){
        int num = ui->lineEdit->text().toInt(&ok, 16);
        text = QString::number(num, 10);
        ui->lineEdit->setText(text);
        text.clear();
    }
    tran1 = 10;
}

void trans::on_sixteen_clicked()
{
    bool ok;
    if (tran1 == 2){
        int num = ui->lineEdit->text().toInt(&ok, 2);
        text = QString::number(num, 16);
        ui->lineEdit->setText(text);
        text.clear();
    }else if (tran1 == 10){
        int num = ui->lineEdit->text().toInt(&ok, 10);
        text = QString::number(num, 16);
        ui->lineEdit->setText(text);
        text.clear();
    }else if(tran1 == 16){
        text = ui->lineEdit->text();
        ui->lineEdit->setText(text);
        text.clear();
    }
    tran1 = 16;
}

void trans::on_two_1_clicked()
{
    bool ok;
    if (tran2 == 2){
        text = ui->lineEdit_2->text();
        ui->lineEdit_2->setText(text);
        text.clear();
    }else if (tran2 == 10){
        int num = ui->lineEdit_2->text().toInt(&ok, 10);
        text = QString::number(num, 2);
        ui->lineEdit_2->setText(text);
        text.clear();
    }else if (tran2 == 16){
        int num = ui->lineEdit_2->text().toInt(&ok, 16);
        text = QString::number(num, 2);
        ui->lineEdit_2->setText(text);
        text.clear();
    }
    tran2 = 2;
}

void trans::on_ten_1_clicked()
{
    bool ok;
    if (tran2 == 2){
        int num = ui->lineEdit_2->text().toInt(&ok, 2);
        text = QString::number(num, 10);
        ui->lineEdit_2->setText(text);
        text.clear();
    }else if (tran2 == 10){
        int num = ui->lineEdit_2->text().toInt(&ok, 10);
        text = QString::number(num, 10);
        ui->lineEdit_2->setText(text);
        text.clear();
    }else if (tran2 == 16){
        int num = ui->lineEdit_2->text().toInt(&ok, 16);
        text = QString::number(num, 10);
        ui->lineEdit_2->setText(text);
        text.clear();
    }
    tran2 = 10;
}

void trans::on_radioButton_8_clicked()
{
    bool ok;
    if (tran2 == 2){
        int num = ui->lineEdit_2->text().toInt(&ok, 2);
        text = QString::number(num, 16);
        ui->lineEdit_2->setText(text);
        text.clear();
    }else if (tran2 == 10){
        int num = ui->lineEdit_2->text().toInt(&ok, 10);
        text = QString::number(num, 16);
        ui->lineEdit_2->setText(text);
        text.clear();
    }else if (tran2 == 16){
        int num = ui->lineEdit_2->text().toInt(&ok, 16);
        text = QString::number(num, 16);
        ui->lineEdit_2->setText(text);
        text.clear();
    }
    tran2 = 16;
}

void trans::on_two_2_clicked()
{
    bool ok;
    if (tran3 == 2){
        text = ui->lineEdit_3->text();
        ui->lineEdit_3->setText(text);
        text.clear();
    }else if (tran3 == 10){
        int num = ui->lineEdit_3->text().toInt(&ok, 10);
        text = QString::number(num, 2);
        ui->lineEdit_3->setText(text);
        text.clear();
    }else if (tran2 == 16){
        int num = ui->lineEdit_3->text().toInt(&ok, 16);
        text = QString::number(num, 2);
        ui->lineEdit_3->setText(text);
        text.clear();
    }
    tran3 = 2;
}

void trans::on_ten_2_clicked()
{
    bool ok;
    if (tran3 == 2){
        int num = ui->lineEdit_3->text().toInt(&ok, 2);
        text = QString::number(num, 10);
        ui->lineEdit_3->setText(text);
        text.clear();
    }else if (tran3 == 10){
        int num = ui->lineEdit_3->text().toInt(&ok, 10);
        text = QString::number(num, 10);
        ui->lineEdit_3->setText(text);
        text.clear();
    }else if (tran3 == 16){
        int num = ui->lineEdit_3->text().toInt(&ok, 16);
        text = QString::number(num, 10);
        ui->lineEdit_3->setText(text);
        text.clear();
    }
    tran3 = 10;
}

void trans::on_radioButton_3_clicked()
{
    bool ok;
    if (tran3 == 2){
        int num = ui->lineEdit_3->text().toInt(&ok, 2);
        text = QString::number(num, 16);
        ui->lineEdit_3->setText(text);
        text.clear();
    }else if (tran3 == 10){
        int num = ui->lineEdit_3->text().toInt(&ok, 10);
        text = QString::number(num, 16);
        ui->lineEdit_3->setText(text);
        text.clear();
    }else if (tran3 == 16){
        int num = ui->lineEdit_3->text().toInt(&ok, 16);
        text = QString::number(num, 16);
        ui->lineEdit_3->setText(text);
        text.clear();
    }
    tran3 = 16;
}

void trans::on_compare_clicked()
{
    bool ok;
    int num1, num2;
    switch(tran1){
    case 2:{
        num1 = ui->lineEdit->text().toInt(&ok, 2);
        temp1 = QString::number(num1, 10);
        num1 = temp1.toInt(&ok, 10);
        break;
    }case 10:{
        num1 = ui->lineEdit->text().toInt(&ok, 10);
        break;
    }case 16:{
        num1 = ui->lineEdit->text().toInt(&ok, 16);
        temp1 = QString::number(num1, 10);
        num1 = temp1.toInt(&ok, 10);
        break;
    }
    }
    switch (tran2){
    case 2:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 2);
        temp2 = QString::number(num2, 10);
        num2= temp2.toInt(&ok, 10);
        break;
    }case 10:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 10);
        break;
    }case 16:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 16);
        temp2 = QString::number(num2, 10);
        num2 = temp2.toInt(&ok, 10);
        break;
    }
    }
    if (num1 > num2){
        ui->lineEdit_3->setText("输入1大于输入2");
    }else if (num1 < num2){
        ui->lineEdit_3->setText("输入1小于输入2");
    }else if (num1 == num2){
        ui->lineEdit_3->setText("输入1等于输入2");
    }
}

void trans::on_yueshu_clicked()
{
    bool ok;
    int num1, num2;
    switch(tran1){
    case 2:{
        num1 = ui->lineEdit->text().toInt(&ok, 2);
        temp1 = QString::number(num1, 10);
        num1 = temp1.toInt(&ok, 10);
        break;
    }case 10:{
        num1 = ui->lineEdit->text().toInt(&ok, 10);
        break;
    }case 16:{
        num1 = ui->lineEdit->text().toInt(&ok, 16);
        temp1 = QString::number(num1, 10);
        num1 = temp1.toInt(&ok, 10);
        break;
    }
    }
    switch (tran2){
    case 2:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 2);
        temp2 = QString::number(num2, 10);
        num2= temp2.toInt(&ok, 10);
        break;
    }case 10:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 10);
        break;
    }case 16:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 16);
        temp2 = QString::number(num2, 10);
        num2 = temp2.toInt(&ok, 10);
        break;
    }
    }
    int min;
    if (num1 < num2)
        min = num1;
    else
        min = num2;
    for (int i = 1; i <= min; i ++){
        if (num1 % i == 0 && num2 % i == 0){
            num_temp = QString::number(i, 10);
            ys += num_temp;
            ys += " ";
        }
    }
    ui->lineEdit_4->setText(ys);
    ys.clear();
}

void trans::on_gongbei_clicked()
{
    bool ok;
    int num1, num2;
    switch(tran1){
    case 2:{
        num1 = ui->lineEdit->text().toInt(&ok, 2);
        temp1 = QString::number(num1, 10);
        num1 = temp1.toInt(&ok, 10);
        break;
    }case 10:{
        num1 = ui->lineEdit->text().toInt(&ok, 10);
        break;
    }case 16:{
        num1 = ui->lineEdit->text().toInt(&ok, 16);
        temp1 = QString::number(num1, 10);
        num1 = temp1.toInt(&ok, 10);
        break;
    }
    }
    switch (tran2){
    case 2:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 2);
        temp2 = QString::number(num2, 10);
        num2= temp2.toInt(&ok, 10);
        break;
    }case 10:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 10);
        break;
    }case 16:{
        num2 = ui->lineEdit_2->text().toInt(&ok, 16);
        temp2 = QString::number(num2, 10);
        num2 = temp2.toInt(&ok, 10);
        break;
    }
    }
    int t;
    int temp_num1 = num1, temp_num2 = num2;
    if (num1 < num2){
        t = num1;
        num1 = num2;
        num2 = t;
    }
    while (temp_num2 != 0){
        t = temp_num1 % temp_num2;
        temp_num1 = temp_num2;
        temp_num2 = t;
    }
    int num = num1 * num2 / temp_num1;
    switch (tran3){
    case 2:{
        answer = QString::number(num, 2);
        ui->lineEdit_3->setText(answer);
        answer.clear();
        break;
    }case 10:{
        answer = QString::number(num, 10);
        ui->lineEdit_3->setText(answer);
        answer.clear();
        break;
    }case 16:{
        answer = QString::number(num, 16);
        ui->lineEdit_3->setText(answer);
        answer.clear();
        break;
    }
    }
}
