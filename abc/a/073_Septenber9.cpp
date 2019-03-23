#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    cout << ((N % 10 == 9) or (N / 10 == 9) ? "Yes" : "No") << endl;
    return 0;
}
