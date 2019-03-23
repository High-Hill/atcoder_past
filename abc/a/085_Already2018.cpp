#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i;i<s.size();i++){
        if(i == 3) cout << "8";
        else cout << s.at(i);
    }
    return 0;
}
