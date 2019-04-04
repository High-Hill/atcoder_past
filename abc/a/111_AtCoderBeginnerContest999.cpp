#include<iostream>
using namespace std;
int main(){
    string n;
    cin >> n;
    for(int i=0;i<3;i++) {
        if(n.at(i) == '1') cout << '9';
        else if(n.at(i) == '9') cout << '1';
    }
    return 0;
}
