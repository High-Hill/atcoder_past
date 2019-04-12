#include<iostream>
using namespace std;
int main(){
    int y, m, d;
    char slash1, slash2;
    cin >> y >> slash1 >> m >> slash2 >> d;
    if(y >= 2019 && m >= 5) cout << "TBD" << endl;
    else cout << "Heisei" << endl;
    return 0;
}
