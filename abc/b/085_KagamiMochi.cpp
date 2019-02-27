#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    int n,counter=1;
    cin >> n;
    vector<int> d(n);
    for(int i=0;i<n;i++) cin >> d.at(i);

    sort(d.begin(),d.end(),greater<int>());
    for(int i=0;i<n;i++){
        if(i == 0 || d.at(i) == d.at(i-1)) continue;
        counter++;
    }
    cout << counter << endl;
}
