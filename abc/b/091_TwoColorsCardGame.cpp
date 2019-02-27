#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    string word;
    vector<string> list;
    vector<int> list_counter;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> word;
        int j=0;
        if(i == 0 && list.size() == 1){
            list.at(0) = word;
            list_counter.at(0) = 1;
        }else{
            while(true){
                if(j == list.size()){
                    list.push_back(word);
                    list_counter.push_back(1);
                    break;
                }
                if(list.at(j) == word){
                    list_counter.at(j)++;
                    break;
                }
                j++;
            }
        }
    }
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> word;
        int j=0;
        while(true){
            if(j == list.size()){
                list.push_back(word);
                list_counter.push_back(-1);
                break;
            }
            if(list.at(j) == word){
                list_counter.at(j)--;
                break;
            }
            j++;
        }
    }
    int max=0;
    for(int i=0;i<list.size();i++){
        if(max < list_counter.at(i)) max = list_counter.at(i);
    }
    cout << max << endl;
    return 0;
}
