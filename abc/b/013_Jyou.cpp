#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    cin >> a >> b;
    for(i=1;i<10;i++) if((a + i) % 10 == b) break;
    for(j=1;j<10;j++) if((a - j + 10) % 10 == b) break;
    cout << min(i,j) << endl;
    return 0;
}
