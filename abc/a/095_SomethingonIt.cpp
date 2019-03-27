#include<iostream>
using namespace std;
int main(){
    string s;
    int count=0;
    cin >> s;
    for(int i=0;i<s.size();i++) if(s.at(i) == 'o') count++;
    cout << 700 + 100 * count << endl;
    return 0;
}
