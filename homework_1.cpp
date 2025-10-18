#include "head.h"
int main() {
    /*
        例2-2
        1.M是字母表的第几个字母？
            回答：第13
        2.第18个字母是什么？
            回答：R
    */ 
    int charM = 'M'-'A'+1;                //M is the 'M'-'A'+1
    char char18 = 'A' + (18 - 1);         //18th letter is 'A' + (18 - 1)
    cout << "M is the " << charM << "th letter.  " << "The 18th letter is " << char18 << endl;
    return 0;
}