#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        set <int> s1, s2;
        map <int, bool> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s1.insert(a[i]);
            mp[a[i]] = true;
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
            s1.insert(b[i]);
            if(mp[b[i]]) s2.insert(b[i]);
        }
        for(auto i : s1) cout << i << " ";
        cout << endl;
        for(auto i : s2) cout << i << " ";
        cout << endl;
    }
    return 0;
}