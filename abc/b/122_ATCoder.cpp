#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int mx=0,counter=0;
    for(int i=0;i<s.size();i++){
        if(s.at(i) == 'A' or s.at(i) == 'C' or s.at(i) == 'G' or s.at(i) == 'T'){
            counter++;
        }else{
            mx = max(mx, counter);
            counter = 0;
        }
    }
    mx = max(mx, counter);
    cout << mx << endl;
}
