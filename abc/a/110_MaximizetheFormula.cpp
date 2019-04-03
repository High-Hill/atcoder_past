#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int m = max(a, max(b, c));
    if(m == a) cout << a * 10 + b + c;
    else if(m == b) cout << b * 10 + a + c;
    else if(m == c) cout << c * 10 + b + a;
    return 0;
}
