#include<iostream>
using namespace std;

int main(){
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    if((b / a) > (d / c)){
        cout << "TAKAHASHI" << endl;
    }else if((b / a) < (d / c)){
        cout << "AOKI" << endl;
    }else if((b / a) == (d / c)){
        cout << "DRAW" << endl;
    }
    return 0;
}
