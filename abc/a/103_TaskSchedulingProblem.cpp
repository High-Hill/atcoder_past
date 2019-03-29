#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> a(3, 0);
    for(int i=0;i<3;i++) cin >> a.at(i);
    sort(a.begin(), a.end());
    cout << (a.at(1) - a.at(0)) + (a.at(2) - a.at(1)) << endl;
    return 0;
}
