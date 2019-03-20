#include<iostream>
using namespace std;

int class_judge(int x){
    if(x == 2){
        return 3;
    }else if(x == 4 || x == 6 || x == 9 || x == 11){
        return 2;
    }else{
        return 1;
    }
}
int main(){
    int a, b;
    int aclass, bclass;
    cin >> a >> b;
    aclass = class_judge(a);
    bclass = class_judge(b);
    if(aclass == bclass){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
