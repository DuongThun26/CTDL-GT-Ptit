#include<bits/stdc++.h>
using namespace std;

int n, k, a[101];
bool ok = true;
void Try(int j, int sum){
    if(sum == k){
        ok = false;
        return;
    }
    for(int i = j; i < n; i++){
        if(sum + a[i] <= k){
            sum += a[i];
            Try(i + 1, sum);
        }
        if(!ok) return;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n, greater <int>());
        if(sum % 2 == 1){
            cout << "NO" << endl;
        }
        else{
            k = sum / 2;
            Try(0, 0);
            if(!ok) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}