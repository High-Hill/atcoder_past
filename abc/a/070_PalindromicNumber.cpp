#include<iostream>
using namespace std;
int main(){
    string n;
    cin >> n;
    cout << (n.at(0) == n.at(2) ? "Yes" : "No") << endl;
    return 0;
}
