#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int h,m,s;
    h = n / 3600;
    m = (n - (h*3600)) / 60;
    s = n - ((h*3600) + (m*60));
    if(h < 10) cout << "0";
    cout << h << ":";
    if(m < 10) cout << "0";
    cout << m << ":";
    if(s < 10) cout << "0";
    cout << s << endl;
    return 0;
}
