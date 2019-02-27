#include<iostream>
#include<vector>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector< vector<char> > a(h, vector<char>(w));
    for(int i=0;i<h;i++) for(int j=0;j<w;j++) cin >> a.at(i).at(j);

    bool vertical=true, horizontal=true;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(a.at(i).at(j) == '#') horizontal = false;
        }
        if(horizontal){
            for(int j=0;j<w;j++) a.at(i).at(j) = '-';
        }
        horizontal = true;
    }
    for(int i=0;i<w;i++){
        for(int j=0;j<h;j++){
            if(a.at(j).at(i) == '#') vertical=false;
        }
        if(vertical){
            for(int j=0;j<h;j++) a.at(j).at(i) = '-';
        }
        vertical = true;
    }
    bool newline = false;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(a.at(i).at(j) != '-'){
                newline = true;
            }else{
                continue;
            }
            cout << a.at(i).at(j);
        }
        if(newline) cout << endl;
        newline = false;
    }
    return 0;
}
