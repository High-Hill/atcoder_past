#include<iostream>
using namespace std;

int main(){
    int a, b, i, j, counter=0;

    cin >> a >> b;
    for(i=a;i <= b;i++){
        string current = to_string(i);
        for(j=0;j < current.length() / 2 ;j++){
            if(current[j] != current[current.length() - j - 1]) break;
        }
        if(j != 0 && j == current.length() / 2) counter++;
    }
    cout << counter << endl;
    return 0;
}
