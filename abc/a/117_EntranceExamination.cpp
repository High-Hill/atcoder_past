#include<iostream>
using namespace std;
int main(){
    float t, x;
    cin >> t >> x;
    cout << fixed;
    cout << setprecision(10) << t / x << endl;
    return 0;
}
