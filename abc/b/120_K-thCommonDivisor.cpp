#include<iostream>
using namespace std;

int main(){
    int a, b, k, counter=0;
    bool list_null=true;
    cin >> a >> b >> k;

    for(int i=min(a,b);i>=1;i--){
        if(a % i == 0 && b % i == 0){
            counter++;
            if(counter == k){
                cout << i << endl;
            }
        }
    }
    return 0;
}
