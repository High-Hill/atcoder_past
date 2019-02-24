#include<iostream>
using namespace std;

int main(){
    int keijiban = 1;
    int n,k;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        if(keijiban * 2 < keijiban + k){
            keijiban *= 2;
        }else{
            keijiban += k;
        }
    }
    cout << keijiban << endl;
}
