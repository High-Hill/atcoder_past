#include<iostream>
using namespace std;

int main(){
    float s, e, result=0;
    for(int i=0;i<3;i++){
        cin >> s >> e;
        result += s * e * 0.1;
    }
    cout << result << endl;
    return 0;
}
