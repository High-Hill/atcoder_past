#include<iostream>
using namespace std;

int main(){
    int n, a, b, sum=0;
    cin >> n >> a >> b;

    for(int i=1;i<=n;i++){
        string s_i = to_string(i);
        int sum_i = 0;
        for(int j=0;j<s_i.size();j++){
            sum_i += (int)(s_i.at(j) - '0');
        }
        if(sum_i >= a && sum_i <= b) sum += i;
    }
    cout << sum << endl;
    return 0;
}
