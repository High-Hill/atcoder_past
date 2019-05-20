#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(i==0) putchar(toupper(s.at(i)));
        else putchar(tolower(s.at(i)));
    }
    cout << endl;
    return 0;
}
