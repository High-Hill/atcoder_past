#include<iostream>
using namespace std;
int atsearch(char target){
    string checker = "atcoder";
    int j;
    for(j=0;j<checker.size();j++){
        if(target == checker.at(j)) break;
    }
    if(j == checker.size()) return 1;
    else return 0;
}
int main(){
    string s,t;
    string checker = "atcoder";
    int judge = 0;
    cin >> s >> t;
    for(int i=0;i<s.size();i++){
        if(s.at(i) == t.at(i)) continue;
        else if(s.at(i) == '@'){
            if(atsearch(t.at(i)) == 1) judge = 1;
        }else if(t.at(i) == '@'){
            if(atsearch(s.at(i)) == 1) judge = 1;
        }else if(s.at(i) != t.at(i)) judge = 1;
        if(judge == 1){
                cout << "You will lose" << endl;
                return 0;
        }
    }
    cout << "You can win" << endl;
    return 0;
}
