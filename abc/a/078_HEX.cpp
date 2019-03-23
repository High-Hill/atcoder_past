#include<iostream>
using namespace std;
int main(){
    char x, y;
    cin >> x >> y;
    if(int(x) > int(y)) cout << ">" << endl;
    else if(int(x) < int(y)) cout << "<" << endl;
    else cout << "=" << endl;
    return 0;
}
