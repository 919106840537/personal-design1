#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include "func.h"
#include "cal_func.h"
#include "trans.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    QString text;
    QString answer;
    QString temp;
    int cal = 0;
    /*
     * cal = 0 : equal;
     * cal = 1 : add;
     * cal = 2 : sub;
     * cal = 3 : multi;
     * cal = 4 : div;
     * cal = 5 : pow
     */


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_num_1_clicked();

    void on_num_3_clicked();

    void on_num_4_clicked();

    void on_num_5_clicked();

    void on_num_6_clicked();

    void on_num_7_clicked();

    void on_num_8_clicked();

    void on_num_9_clicked();

    void on_num_0_clicked();

    void on_point_clicked();

    void on_cot_clicked();

    void on_tan_clicked();

    void on_cos_clicked();

    void on_sin_clicked();

    void on_pow_clicked();

    void on_sqrt_clicked();

    void on_add_clicked();

    void on_sub_clicked();

    void on_multi_clicked();

    void on_div_clicked();

    void on_back_clicked();

    void on_equal_clicked();

    void on_Clear_clicked();

    void on_num_2_clicked();

    void on_log_fun_clicked();

    void on_trans_btn_clicked();

    void on_func_btn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
