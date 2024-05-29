#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
long long poww(long long n, long long x){
    if(x == 0) return 1;
    if(x == 1) return n % mod;
    long long c = poww(n, x / 2);
    if(x % 2 == 0) return 1ll * c * c % mod;
    else return (1ll * c * c % mod) * n % mod;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long x = 0, tmp = n;
        while(tmp){
            x = x * 10 + tmp % 10;
            tmp /= 10;
        }
        cout << poww(n, x) << endl;
    }
    return 0;
}