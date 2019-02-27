#include<iostream>
#include<vector>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> a(h);

    for(int i=0;i < h;i++) cin >> a.at(i);
    for(int i=0;i < w + 2;i++) cout << "#";
    cout << endl;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(j == 0) cout << "#";
            cout << a.at(i).at(j);
            if(j == w - 1) cout << "#" << endl;
        }
    }
    for(int i=0;i < w + 2;i++) cout << "#";
    cout << endl;
    return 0;
}
