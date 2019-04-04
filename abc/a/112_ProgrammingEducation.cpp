#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 1) cout << "Hello World" << endl;
    else if(n == 2){
        int a, b;
        cin >> a >> b;
        cout << a + b << endl;
    }
    return 0;
}
