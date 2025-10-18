#include "head.h"

int main() {
    double pie = 3.141593;
    double r_is_4 = 4.0 / 3 * pie * pow(4, 3);             //pow() 是指数运算
    double r_is_10 = 4.0 / 3 * pie * pow(10, 3);
    double sqr = r_is_4 + r_is_10;
    int a = pow(sqr, 1.0 / 3);                             //pow(x, 1.0 / 2) 是开 x 的根号
    cout << a << endl;
    return 0;
}