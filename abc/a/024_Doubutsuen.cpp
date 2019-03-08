#include<iostream>
using namespace std;

int main(){
    int a, b, c, k, s, t, result;
    cin >> a >> b >> c >> k;
    cin >> s >> t;
    result = a * s + b * t;
    if((s + t) >= k) result -= c * (s + t);
    cout << result << endl;
    return 0;
}
