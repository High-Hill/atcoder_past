#include<iostream>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(abs(c - a) <= d) cout << "Yes" << endl;
    else if(abs(b - a) <= d && abs(c - b) <= d) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}