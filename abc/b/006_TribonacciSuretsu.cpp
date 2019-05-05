#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> f(3, 0);
    f[2] = 1;
    if(n == 1 || n == 2 || n == 3) cout << f.at(n - 1) << endl;
    else{
        for(int i=3;i<n;i++){
            f.at(i % 3) = (f.at(0) + f.at(1) + f.at(2)) % 10007;
        }
        cout << f.at((n - 1) % 3) << endl;
    }
    return 0;
}
