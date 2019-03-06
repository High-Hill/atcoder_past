#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(a > b && b > c && a > c){
        cout << 1 << endl << 2 << endl << 3 << endl;
    }else if(a > c && c > b && a > b){
        cout << 1 << endl << 3 << endl << 2 << endl;
    }else if(b > a && a > c && b > c){
        cout << 2 << endl << 1 << endl << 3 << endl;
    }else if(b > c && c > a && b > a){
        cout << 3 << endl << 1 << endl << 2 << endl;
    }else if(c > a && a > b && c > b){
        cout << 2 << endl << 3 << endl << 1 << endl;
    }else if(c > b && b > a && c > a){
        cout << 3 << endl << 2 << endl << 1 << endl;
    }
    return 0;
}
