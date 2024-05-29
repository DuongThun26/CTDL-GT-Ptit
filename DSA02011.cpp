#include<bits/stdc++.h>
using namespace std;

int n, k, a[31], used[31];
int ans;

void Try(int i, int pos, long long sum){
    for(int j = pos; j < n; j++){
        if(!used[j]){
            sum += a[j];
            used[j] = 1;
            if(sum == k){
                ans = min(ans, i);
            }
            else if(sum < k) Try(i + 1, j + 1, sum);
            used[j] = 0;
            sum -= a[j];
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ans = INT_MAX;
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        Try(1, 0, 0);
        if(ans != INT_MAX) cout << ans;
        else cout << -1;
        cout << endl;
    }
    return 0;
}