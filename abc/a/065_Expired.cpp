#include<iostream>
using namespace std;

int main(){
    int x, a, b;
    cin >> x >> a >> b;
    if(a - b >= 0){
        cout << "delicious" << endl;
    }else if((a + x) - b >= 0){
        cout << "safe" << endl;
    }else{
        cout << "dangerous" << endl;
    }
    return 0;
}
