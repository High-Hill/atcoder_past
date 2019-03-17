#include<iostream>
using namespace std;

int main(){
    char a,b;
    cin >> a >> b;
    if(a == 'H'){
        cout << b << endl;
    }else{
        if(b == 'H') cout << 'D' << endl;
        if(b == 'D') cout << 'H' << endl;
    }
    return 0;
}
