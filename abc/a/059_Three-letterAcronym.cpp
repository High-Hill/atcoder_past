#include<iostream>
using namespace std;

int main(){
    string s1, s2, s3;
    char a, b, c;
    cin >> s1 >> s2 >> s3;
    a = s1.at(0) - 32;
    b = s2.at(0) - 32;
    c = s3.at(0) - 32;
    cout << a << b << c << endl;
    return 0;
}
