#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        set <int> s1;
        map <int, int> mp;
        for(int &i : a){
            cin >> i;
            s1.insert(i);
            mp[i]++;
        }
        for(int &i : b){
            cin >> i;
            s1.insert(i);
            mp[i]++;
        }
        for(auto x : s1) cout << x << " ";
        cout << endl;
        set <int> :: iterator it = s1.end() - 1;
        for(int i = 0; i < it; i++){
            if(mp[i] == 2) cout << mp[i] << " ";
        }
        cout << endl;
    }
    return 0;
}