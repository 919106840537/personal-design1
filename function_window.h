#ifndef FUNCTION_H
#define FUNCTION_H

#include <QMainWindow>

namespace Ui {
class Function;
}

class Function_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit Function(QWidget *parent = 0);
    ~Function();

private:
    Ui::Function *ui;
};

#endif // FUNCTION_H
