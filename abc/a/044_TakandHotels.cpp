#include<iostream>
using namespace std;

int main(){
    int n,k,x,y,sum;
    cin >> n >> k >> x >> y;
    for(int i=0;i<n;i++){
        if(i<k){
            sum += x;
        }else{
            sum += y;
        }
    }
    cout << sum << endl;
    return 0;
}
