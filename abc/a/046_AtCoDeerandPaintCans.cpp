#include<iostream>
using namespace std;

int main(){
    int a, b, c, counter=0;
    cin >> a >> b >> c;
    if(a != b) counter++;
    if(a != c) counter++;
    if(b != c) counter++;
    if(counter == 0) counter++;
    cout << counter << endl;
    return 0;
}
