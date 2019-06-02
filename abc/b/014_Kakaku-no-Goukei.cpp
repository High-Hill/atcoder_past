#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, x, sum=0;
    cin >> n >> x;
    vector<int> a(n, 0);
    for(int i=0;i<n;i++) cin >> a.at(i);
    int tmp=x,i=0;
    while(tmp - 1 > 0){
        sum += (tmp % 2) * a.at(i);
        tmp = tmp / 2;
        i++;
    }
    sum += tmp * a.at(i);
    cout << sum << endl;
    return 0;
}
