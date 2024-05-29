#include<bits/stdc++.h>
using namespace std;

int maxx(int a[], int l, int m, int r){
    int max_left = 0, cnt_l = 0;
    for(int i = m; i >= l; i--){
        cnt_l += a[i];
        if(max_left < cnt_l){
            max_left = cnt_l;
        }
    }
    int max_right = 0, cnt_r = 0;
    for(int i = m + 1; i <= r; i++){
        cnt_r += a[i];
        if(max_right < cnt_r){
            max_right = cnt_r;
        }
    }
    return max(max_left + max_right, max(max_left, max_right));
}

int maxxx(int a[], int l, int r){
    if(l == r) return a[l];
    int m = (l + r) / 2;
    return max(max(maxxx(a, l, m), maxxx(a, m + 1, r)), maxx(a, l, m, r));
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << maxxx(a, 0, n - 1) << endl;
    }
    return 0;
}
