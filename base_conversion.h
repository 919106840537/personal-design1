#ifndef BASE_CONVERSION_H
#define BASE_CONVERSION_H

#include <QMainWindow>

namespace Ui {
class Base_conversion;
}

class Base_conversion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Base_conversion(QWidget *parent = 0);
    ~Base_conversion();

private:
    Ui::Base_conversion *ui;
};

#endif // BASE_CONVERSION_H
