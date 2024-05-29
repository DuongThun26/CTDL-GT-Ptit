#include<bits/stdc++.h>
using namespace std;

long long poww(long long n){
    if(n == 0) return 1;
    if(n == 1) return 2;
    long long x = poww(n / 2);
    if(n % 2 == 0) return x * x;
    return x * x * 2;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long len = poww(n) / 2;
        while(1){
            if(n == 1){
                cout << 1;
                break;
            } 
            if(k == len){
                cout << n;
                break;
            }
            if(k > len){
                k = len - (k - len);
                n--;
            }
            else n--;
            len /= 2;
        }
        cout << endl;
    }
    return 0;
}
