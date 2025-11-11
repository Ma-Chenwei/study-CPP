#include "head.h"

int main() {
    /*交换变量 A and B*/
    int A, B;
    cin >> A >> B;
    //cout << A << B << endl;
    int memory = B;
    B = A;
    A = memory;
    cout << A << " and " << B << endl;
    return 0;
}