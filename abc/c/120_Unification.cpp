#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    int one=0;
    cin >> s;

    for(int i;i<s.size();i++){
        if(s.at(i) == '1') one++;
    }
    cout << min(one, (int)s.size() - one) * 2 << endl;
}
