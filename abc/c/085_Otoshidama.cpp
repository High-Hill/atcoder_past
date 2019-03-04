#include<iostream>
using namespace std;

int main (){
    int n, y;
    cin >> n >> y;
    bool found = false;

    if(y > n * 10000 || y < n * 1000){
        found = false;
    }else{
        for(int i=n;i>=0;i--){
            for(int j=n-i;j>=0;j--){
                if(i * 10000 + j * 5000 + (n - i - j) * 1000 == y){
                    found = true;
                    cout << i << " " << j << " " << (n - i - j) << endl;
                    return 0;
                }
            }
        }
    }
    if(found == false) cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}
