#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n + 1];
        set <int> se;
        int dem = 0;
        for(int i = 1; i <= k; i++){
            cin >> a[i];
            se.insert(a[i]);
        }
        int i = k;
        while(i > 0 && a[i] == n - k + i){
            i--;
        }
        if(i > 0){
            a[i] = a[i] + 1;
            for(int j = i + 1; j <= k; j++){
                a[j] = a[i] + j - i;
            }
        }
        else{
            dem = k;
        }
        if(dem != 0) cout << dem;
        else{
            for(int i = 1; i <= k; i++){
                if(se.count(a[i]) == 0) dem++;
            }
            cout << dem;
        }
        cout << endl;
    }
    return 0;
}