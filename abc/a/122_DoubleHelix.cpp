#include<iostream>
using namespace std;
int main(){
    char b;
    cin >> b;
    if(b == 'A') cout << "T";
    else if(b == 'T') cout << "A";
    else if(b == 'C') cout << "G";
    else if(b == 'G') cout << "C";
    return 0;
}
