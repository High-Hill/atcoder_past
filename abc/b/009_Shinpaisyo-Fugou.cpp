#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for(int i=0;i<n;i++) cin >> a.at(i);
    sort(a.begin(), a.end());
    int mx=0,next=0;
    for(int i=0;i<n;i++){
        if(a.at(i) == mx) continue;
        else if(a.at(i) > mx){
            next = mx;
            mx = a.at(i);
        }else if(a.at(i) > next) next = a.at(i);
    }
    cout << next << endl;
    return 0;
}
