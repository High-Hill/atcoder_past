#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if((b >= a && a >= c && b >= c) || (c >= a && a >= b && c >= b)){
        cout << a << endl;
    }else if((a >= b && b >= c && a >= c) || (c >= b && b >= a && c >= a)){
        cout << b << endl;
    }else if((a >= c && c >= b && a >= b) || (b >= c && c >= a && b >= a)){
        cout << c << endl;
    }
    return 0;
}
