#include<iostream>
using namespace std;

int main(){
    int x, sum;
    cin >> x;
    while(x >= 1){
        sum += (x % 10);
        x /= 10;
    }
    cout << sum << endl;
    return 0;
}
