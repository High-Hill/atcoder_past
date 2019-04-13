#include<iostream>
using namespace std;
int main(){
    string s;
    int adjust=0,count=0;
    cin >> s;
    if(s.size() == 1){
        cout << 0 << endl;
        return 0;
    }
    if((s.at(0) - '0') == 1) adjust = 1;
    for(int i=0;i<s.size();i++){
        if((s.at(i) - '0') != adjust) count++;
        adjust = !adjust;
    }
    cout << count << endl;
}
