#include<iostream>
using namespace std;

int main(){
    int a, b, n;
    cin >> a >> b >> n;
    int i = n;
    while(true){
        if(i % a == 0 && i % b == 0){
            cout << i << endl;
            break;
        }
        i++;
    }
    return 0;
}
