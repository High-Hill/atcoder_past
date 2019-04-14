#include<iostream>
using namespace std;
int main(){
    int m,k=1000;
    cin >> m;
    if(m < 100) cout << "00" << endl;
    else if(m <= 5000){
        if(m < 1000) cout << "0" << m / 100 << endl;
        else cout << m / 100 << endl;
    }
    else if(m >= 6000 && m <= 30000) cout << (m / k) + 50 << endl;
    else if(m >= 35000 && m <= 70000) cout << (((m / k) - 30) / 5) + 80 << endl;
    else if(m > 70000) cout << 89 << endl;
    return 0;
}
