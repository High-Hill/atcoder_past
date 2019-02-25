#include<iostream>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    string s[h];
    for(int i;i < h;i++) cin >> s[i];
    for(int i=0;i < h;i++){
        for(int j=0;j < w;j++){
            if(s[i][j] == '#') continue;
            if(s[i][j] == '.'){
                int counter = 0;
                if(j - 1 >= 0) if(s[i][j-1] == '#') counter++;
                if(j + 1 < w) if(s[i][j+1] == '#') counter++;
                if(i - 1 >= 0){
                    if(s[i-1][j] == '#') counter++;
                    if(j - 1 >= 0) if(s[i-1][j-1] == '#') counter++;
                    if(j + 1 < w) if(s[i-1][j+1] == '#') counter++;
                }
                if(i + 1 < h){
                    if(s[i+1][j] == '#') counter++;
                    if(j - 1 >= 0) if(s[i+1][j-1] == '#') counter++;
                    if(j + 1 < w) if(s[i+1][j+1] == '#') counter++;
                }
                s[i][j] = '0' + counter;
            }
        }
    }
    for(int i;i < h;i++) cout << s[i] << endl;
    return 0;
}
