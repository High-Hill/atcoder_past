#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a > max(b, c)){
        if(a == b + c){
            cout << "Yes" << endl;
            return 0;
        }
    }else if(b > max(a, c)){
        if(b == a + c){
            cout << "Yes" << endl;
            return 0;
        }
    }else if(c > max(a, b)){
        if(c == a + b){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
