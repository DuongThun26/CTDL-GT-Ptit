#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int x[k];
        for(int i = 1; i <= k; i++){
            cin >> x[i];
        }
        int i = k;
        while(i > 0 && x[i] == n - k + i){
            i--;
        }
        if(i > 0){
            x[i] = x[i] + 1;
            for(int j = i + 1; j <= k; j++){
                x[j] = x[i] + j - i;
            }
        }
        else{
            for(int i = 1; i <= k; i++){
                x[i] = i;
            }
        }
        for(int i = 1; i <= k; i++){
            cout << x[i] << " ";
        }
        cout << endl;
    }
    return 0;
}