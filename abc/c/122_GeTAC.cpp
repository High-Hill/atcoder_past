#include<iostream>
using namespace std;
int main(){
    int n, q;
    string s;
    cin >> n >> q >> s;
    int l, r, counter=0, m[n];
    m[0] = 0;
    for(int i=1;i<n;i++){
        if(s[i] == 'C' && s[i - 1] == 'A') counter++;
        m[i] = counter;
    }
    for(int i=0;i<q;i++){
        cin >> l >> r;
        cout << m[r - 1] - m[l - 1] << endl;
    }
    return 0;
}
