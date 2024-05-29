#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int d;
        string s;
        cin >> d >> s;
        map <char, int> mp;
        for(int i = 0; i < s.size(); i++) mp[s[i]]++;
        vector <pair <int, char>> v;
        for(auto x : mp){
            v.push_back({x.second, x.first});
        }
        int n = s.size();
        string kq = string(n, ' ');
        sort(v.begin(), v.end(), greater <pair <int, char>>());
        bool ok = true;
        for(int i = 0; i < v.size(); i++){
            int pos = i;
            while(kq[pos] != ' ') pos++;
            for(int j = 0; j < v[i].first; j++){
                if(pos + j * d >= n){
                    ok = false;
                    break;
                }
                kq[pos + j * d] = v[i].second;
            }
        }
        if(!ok) cout << -1;
        else cout << 1;
        cout << endl;
    }
    return 0;
}