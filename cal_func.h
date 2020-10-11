#ifndef CAL_FUNC_H
#define CAL_FUNC_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include "func.h"
#include "mainwindow.h"
#include "trans.h"

namespace Ui {
class cal_func;
}

class cal_func : public QMainWindow
{
    Q_OBJECT

public:
    explicit cal_func(QWidget *parent = 0);
    ~cal_func();

private slots:

    void on_base_cal_clicked();

    void on_trans_clicked();

    void on_cal_11_clicked();

    void on_cal_12_clicked();

    void on_cal_inverse_clicked();

    void on_cal_index_clicked();

    void on_cal_log_clicked();

private:
    Ui::cal_func *ui;
};

#endif // CAL_FUNC_H
