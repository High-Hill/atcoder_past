#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int mx = max(a, b);
    if(mx == a) cout << mx + max(a - 1, b) << endl;
    else cout << mx + max(a, b - 1) << endl;
    return 0;
}
