#include<iostream>
using namespace std;

int main(){
    int x, a, b;
    cin >> x >> a >> b;
    cout << (max(x, a) - min(x, a) < max(x, b) - min(x, b) ? "A" : "B");
    return 0;
}
