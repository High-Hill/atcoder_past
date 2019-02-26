#include<iostream>
using namespace std;

int main(){
    int n,all;
    cin >> n;
    string ns = to_string(n);
    for(int i=0;i<ns.length();i++) all += (int)(ns[i] - '0');
    if(n % all == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
