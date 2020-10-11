#include "func.h"

double getsin(double num){
    double ans = 0;
    double radian = (num * 3.1415926) / 180.0;
    ans = sin (radian);
    return ans;
}

double getcos(double num){
    double ans = 0;
    double radian = (num * 3.1415926) / 180.0;
    ans = cos (radian);
    return ans;
}

double gettan (double num){
    double ans = 0;
    double radian = (num * 3.1415926) / 180.0;
    ans = tan (radian);
    return ans;
}

double getsqrt(double num){
    double ans = 0;
    ans = sqrt (num);
    return ans;
}

double getpow(double x, double y){
    double ans = 0;
    ans = pow (y, x);
    return ans;
}

double getlg(double num){
    double ans = 0;
    ans = log10 (num);
    return ans;
}

double getln(double num){
    double ans = 0;
    ans = log (num);
    return ans;
}

double getcot(double num){
    double ans = 0;
    double radian = (num * 3.1415926) / 180.0;
    ans = 1.0 / tan (radian);
    return ans;
}
