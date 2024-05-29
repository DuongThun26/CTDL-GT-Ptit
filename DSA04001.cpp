#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
long long luythua(int n, int k){
    if(k == 0) return 1;
    if(k == 1) return n;
    long long x = luythua(n, k / 2);
    x %= mod;
    if(k % 2 == 0) return 1ll * x * x;
    return 1ll * x * x * n;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << luythua(n, k) % mod << endl;
    }
    return 0;
}