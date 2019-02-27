#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, current=0, before=0, counter=1;
    cin >> n;
    vector<int> a(n);

    for(int i=0;i<n;i++) cin >> a.at(i);
    int i=0;
    while(a.at(current) != 2){
        if(a.at(current) == 0){
            counter = -1;
            break;
        }
        before = current;
        current = a.at(current) - 1;
        a.at(before) = 0;
        counter++;
    }
    cout << counter << endl;
    return 0;
}
