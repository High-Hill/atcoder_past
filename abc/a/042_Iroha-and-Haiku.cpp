#include<iostream>
using namespace std;

int main(){
    int a, five=0, seven=0;
    for(int i=0;i<3;i++){
        cin >> a;
        if(a == 5) five++;
        if(a == 7) seven++;
    }
    if(five == 2 && seven == 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
