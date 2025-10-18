#include "head.h"

int main() {
    int CHARjuli = 'a' - 'A';
    char CHAR;                             //不能用int
    cout << "Please input." << endl;
    cin >> CHAR;                           //input
    char a = CHAR - CHARjuli;
    cout << a << endl;
    return 0;
}