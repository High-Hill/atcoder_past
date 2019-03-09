#include<iostream>
using namespace std;

int main(){
    int a, d;
    cin >> a >> d;
    if((a + 1) * d > a * (d + 1)){
        cout << (a + 1) * d << endl;
    }else if((a + 1) * d <= a * (d + 1)){
        cout << a * (d + 1) << endl;
    }
    return 0;
}
