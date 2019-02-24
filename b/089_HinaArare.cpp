#include<iostream>
using namespace std;

int main(){
    int n;
    // AtCoder's default bool value is "true"? so, substitute "false"
    bool p=false,w=false,g=false,y=false;
    string s;
    cin >> n;
    for(int i=0;i < n;i++){
        cin >> s;
        if(s == "P") p = true;
        if(s == "W") w = true;
        if(s == "G") g = true;
        if(s == "Y") y = true;
    }
    if(p && w && g){
        if(y){
            cout << "Four" << endl;
        }else{
            cout << "Three" << endl;
        }
    }
    return 0;
}
