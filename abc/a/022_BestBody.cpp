#include<iostream>
using namespace std;

int main(){
    int n, s, t, w, a, counter=0;
    cin >> n >> s >> t;
    cin >> w;
    if(s <= w && w <= t) counter++;
    for(int i=1;i<n;i++){
        cin >> a;
        w += a;
        if(s <= w && w <= t) counter++;
    }
    cout << counter << endl;
    return 0;
}
