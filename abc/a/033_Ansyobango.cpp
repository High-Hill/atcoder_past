#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n % 1111 == 0){
        cout << "SAME" << endl;
    }else{
        cout << "DIFFERENT" << endl;
    }
    return 0;
}
