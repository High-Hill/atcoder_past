#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,mx,count=0;
    cin >> n;
    vector<int> h(n, 0);
    for(int i=0;i<n;i++) cin >> h.at(i);
    mx = h.at(0);
    for(int i=0;i<n;i++){
        if(h.at(i) >= mx){
            count++;
            mx = h.at(i);
        }
    }
    cout << count << endl;
}
