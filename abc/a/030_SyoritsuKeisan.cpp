#include<iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int takahashi, aoki;
    takahashi = b / a;
    aoki = d / c;
    if(takahashi > aoki){
        cout << "TAKAHASHI" << endl;
    }else if(takahashi < aoki){
        cout << "AOKI" << endl;
    }else{
        cout << "DRAW" << endl;
    }
    return 0;
}
