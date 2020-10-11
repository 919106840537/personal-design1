#ifndef TRANS_H
#define TRANS_H

#include <QMainWindow>
#include "mainwindow.h"
#include "cal_func.h"
#include <QPushButton>
#include <QLineEdit>
#include <QRadioButton>


namespace Ui {
class trans;
}

class trans : public QMainWindow
{
    Q_OBJECT

    QString text;
    QString temp1;
    QString temp2;
    QString answer;
    QString ys;
    QString num_temp;
    int tran1 = 10;
    int tran2 = 10;
    int tran3 = 10;

public:
    explicit trans(QWidget *parent = 0);
    ~trans();

private slots:
    void on_pushButton_2_clicked();

    void on_base_cal_clicked();

    void on_add_clicked();

    void on_sub_clicked();

    void on_multi_clicked();

    void on_div_clicked();

    void on_clear_clicked();

    void on_two_clicked();

    void on_ten_clicked();

    void on_sixteen_clicked();

    void on_two_1_clicked();

    void on_ten_1_clicked();

    void on_radioButton_8_clicked();

    void on_two_2_clicked();

    void on_ten_2_clicked();

    void on_radioButton_3_clicked();

    void on_compare_clicked();

    void on_yueshu_clicked();

    void on_gongbei_clicked();

private:
    Ui::trans *ui;
};

#endif // TRANS_H
