#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,al=0,bo=0;
    cin >> n;
    vector<int> a(n);

    for(int i=0;i<n;i++) cin >> a.at(i);
    for(int i=0;i<n;i++){
        int max=0,maxnum;
        for(int j=0;j<a.size();j++){
            if(max < a.at(j)){
                max = a.at(j);
                maxnum = j;
            }
        }
        if(i % 2 == 0){
            al += max;
        }else{
            bo += max;
        }
        a.erase(a.begin() + maxnum);
    }
    cout << al - bo << endl;
    return 0;
}
