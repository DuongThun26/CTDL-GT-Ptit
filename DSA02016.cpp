#include<bits/stdc++.h>
using namespace std;

int n, cnt, x[11];
int used_cot[11], used_cc[22], used_cp[22];
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!used_cot[j] && !used_cc[i - j + n] && !used_cp[i + j - 1]){
            x[i] = j;
            used_cot[j] = 1, used_cc[i - j + n] = 1, used_cp[i + j - 1] = 1;
            if(i == n) cnt++;
            else Try(i + 1);
            used_cot[j] = 0, used_cc[i - j + n] = 0, used_cp[i + j - 1] = 0;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        Try(1);
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}