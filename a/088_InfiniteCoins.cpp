#include<iostream>
using namespace std;

int main(){
    int n, a;
    cin >> n;
    cin >> a;
    if((n % 500) <= a || (n % 500) == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
