#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    vector<int> b(m);
    vector<int> city(n);
    for(int i=0;i<m;i++) cin >> a.at(i) >> b.at(i);
    for(int i=0;i<m;i++){
        city.at(a.at(i) -1)++;
        city.at(b.at(i) -1)++;
    }
    for(int i=0;i<n;i++) cout << city.at(i) << endl;
    return 0;
}
