#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> a(n + 5);
    for(int i = 1; i <= n; i++) cin >> a[i];
    vector <int> f(n + 5, 0);
    for(int i = 1; i <= n; i++){
        f[a[i]] = f[a[i] - 1] + 1;
    }
    cout << n - *max_element(f.begin(), f.end());
    return 0;
}