#include<iostream>
using namespace std;

int main(){
    string name;
    cin >> name;
    if(name.at(name.size() - 1) == 'T'){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
