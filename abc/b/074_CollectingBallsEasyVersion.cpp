#include<iostream>
using namespace std;

int main(){
    int n, k, counter;
    cin >> n >> k;
    for(int i=0;i < n;i++){
        int x;
        cin >> x;
        if(x < k - x){
            counter += x * 2;
        }else{
            counter += (k - x) * 2;
        }
    }
    cout << counter << endl;
    return 0;
}
