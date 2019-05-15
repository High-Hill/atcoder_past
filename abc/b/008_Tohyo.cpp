#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int n, mx=0;
    string mx_name;
    cin >> n;
    map<string, int> s;
    for(int i=0;i<n;i++){
        string name;
        cin >> name;
        s[name]++;
    }
    for(auto itr =s.begin(); itr != s.end(); ++itr){
        if(itr->second > mx){
            mx = itr->second;
            mx_name = itr->first;
        }
    }
    cout << mx_name << endl;
    return 0;

}
