#include<iostream>
using namespace std;
int main(){
    string a;
    cin >> a;
    if(a.size() > 1) for(int i=0;i<a.size()-1;i++) cout << a.at(i);
    else if(a == "a") cout << -1;
    else cout << (char)(a.at(0) - 1);
    cout << endl;
    return 0;
}
