#include<iostream>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    if(a.at(2) == b.at(0) && a.at(1) == b.at(1) && a.at(0) == b.at(2)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
