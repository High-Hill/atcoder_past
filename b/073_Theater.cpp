#include<iostream>
using namespace std;

int main(){
    int n, counter;
    cin >> n;
    for(int i=0;i<n;i++){
        int l, r;
        cin >> l >> r;
        counter += (r - l) + 1;
    }
    cout << counter << endl;
    return 0;
}
