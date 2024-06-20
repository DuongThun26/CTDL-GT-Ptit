#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        map <int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        bool ok = true;
        for(int i = 0; i < n; i++){
            if(mp[a[i]] > 1){
                cout << a[i] << endl;
                ok = false;
                break;
            }
        }
        if(ok) cout << "NO" << endl;
    }
    return 0;
}