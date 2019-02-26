#include<iostream>
using namespace std;

int main(){
    int n, a, min = 999999999;
    cin >> n;

    for(int i;i < n;i++){
        cin >> a;
        int j = 0;
        while(a % 2 == 0){
            a /= 2;
            j++;
        }
        if(min > j) min = j;
    }
    cout << min << endl;
}
