#include<iostream>
using namespace std;

int main(){
    string name[3];
    bool copy=false;
    int i;
    for(int i=0;i<3;i++) cin >> name[i];
    for(int i=0;i<3;i++) cout << name[i].at(0);
    cout << endl;
    return 0;
}
