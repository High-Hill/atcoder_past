#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 100){
        cout << "Perfect" << endl;
    }else if(n >= 90 && n <= 99){
        cout << "Great" << endl;
    }else if(n >= 60 && n <= 89){
        cout << "Good" << endl;
    }else{
        cout << "Bad" << endl;
    }
    return 0;
}
