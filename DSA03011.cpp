#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        priority_queue<int , vector <int>, greater<int>> q;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            q.push(x);
        }
        long long ans = 0;
        while(q.size() > 1){
            int min1 = q.top();
            q.pop();
            int min2 = q.top();
            q.pop();
            int kq = ((long long)(min1 + min2)) % mod;
            q.push(kq);
            ans += kq;
            ans %= mod;
        }
        cout << ans << endl;
    }
    return 0;
}