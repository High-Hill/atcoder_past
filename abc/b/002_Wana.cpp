#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s.at(i) == 'a' || s.at(i) == 'i' || s.at(i) == 'u' || s.at(i) == 'e' || s.at(i) == 'o'){
            continue;
        }else{
            cout << s.at(i);
        }
    }
    cout << endl;
    return 0;
}
