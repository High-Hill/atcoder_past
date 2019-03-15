#include<iostream>
using namespace std;

int ret_number(int x){
    if(x > 1){
        return x - 13;
    }else{
        return x;
    }
}

int main(){
    int a, b;
    cin >> a >> b;
    a = ret_number(a);
    b = ret_number(b);
    if(a > b){
        cout << "Alice" << endl;
    }else if(a < b){
        cout << "Bob" << endl;
    }else if(a == b){
        cout << "Draw" << endl;
    }
    return 0;
}
