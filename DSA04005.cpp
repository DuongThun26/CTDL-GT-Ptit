#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long f[n + 1];
        f[1] = 1, f[2] = 1;
        for(int i = 3; i <= n; i++){
            f[i] = f[i - 2] + f[i - 1];
        }
        while(n > 2){
            if(k > f[n - 2]){
                k = k - f[n - 2];
                n = n - 1;
            }
            else{
                n = n - 2;
            }
        }
        if(n == 2) cout << "B" << endl;
        else cout << "A" << endl;
    }
    return 0;
}