#include <iostream>

using namespace std;

int main() {
    const int ams = 120;
    const int ums = 80;
    const int LingXian = ums * 12;              // lingxian 12min
    const int t = LingXian / (ams - ums);       // suanchu time             t = s / ( v1 + v2 )
    cout << t << "min" << endl;
    return 0;
}