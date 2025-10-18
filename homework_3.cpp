#include "head.h"

int main() {
    /*
    计算同学的游泳时间
        如：下午1点 50分 游到 下午2点 20分  
        他的回答是 0hour 30min 
    */
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int min = D - B;
    int hour = C - A;
    if (min <= 0){
        hour--;
        min = 60 + min;
    }
    cout << hour << "hour " << min << "min" << endl;
    return 0;
}