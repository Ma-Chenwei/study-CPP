#include "head.h"

int main() {
    int NUM;
    cin >> NUM;
    int NUM100 = NUM / 100;
    //cout << NUM100 << endl;
    int NUM10 = (NUM % 100 ) / 10;
    //cout << NUM10 << endl;
    int NUM1 = NUM % 10;
    //cout << NUM1 << endl;


    cout << NUM1 * 100 + NUM10 * 10 + NUM100 * 1 << endl;
    return 0;
}