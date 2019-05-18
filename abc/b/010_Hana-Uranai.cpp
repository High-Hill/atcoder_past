#include<iostream>
using namespace std;
int main(){
    int n, counter=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        while(a % 3 == 2 || a % 2 == 0){
            a = a - 1;
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
