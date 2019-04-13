#include<iostream>
using namespace std;
int main(){
    int a, b, c, d, e, k;
    cin >> a >> b >> c >> d >> e >> k;
    int mx = max(a, max(b, max(c, max(d, e))));
    int mn = min(a, min(b, min(c, min(d, e))));
    if(mx - mn > k) cout << ":(" << endl;
    else cout << "Yay!" << endl;
    return 0;
}
