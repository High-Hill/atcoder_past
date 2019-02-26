#include<iostream>
using namespace std;

int main(){
    int all, s1, s2, s3;
    cin >> all;
    s1 = all / 100;
    s2 = (all - s1 * 100) / 10;
    s3 = (all - s1 * 100 - s2 * 10) / 1;
    cout << s1 + s2 + s3 << endl;
    return 0;
}
