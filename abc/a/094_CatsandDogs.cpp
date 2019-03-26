#include<iostream>
using namespace std;
int main(){
    int a, b, x;
    cin >> a >> b >> x;
    if(x <= a + b && x >= a) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
