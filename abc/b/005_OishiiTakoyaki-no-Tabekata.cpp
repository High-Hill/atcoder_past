#include<iostream>
using namespace std;
int main(){
    int n, t, m=2147483647;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t;
        if(m > t) m = t;
    }
    cout << m << endl;
    return 0;
}
