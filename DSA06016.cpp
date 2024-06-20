#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        sort(a, a + n, greater <int>());
        sort(b, b + n);
        cout << 1ll * a[0] * b[0] << endl;
    }
    return 0;
}