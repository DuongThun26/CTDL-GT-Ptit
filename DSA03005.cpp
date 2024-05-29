#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int &i : a) cin >> i;
        sort(a, a + n);
        long long _max = INT_MIN, max1 = INT_MIN, max2 = INT_MIN;
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < n; i++){
            if(i < k) cnt1+= a[i];
            else cnt2+= a[i];
        }
        max1 = abs(cnt1 - cnt2);
        cnt1 = cnt2 = 0;
        for(int i = 0; i < n; i++){
            if(i < n - k) cnt1 += a[i];
            else cnt2 += a[i];
        }
        max2 = abs(cnt1 - cnt2);
        _max = max(max1, max2);
        cout << _max << endl;
    }
    return 0;
}