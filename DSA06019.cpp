#include<bits/stdc++.h>
using namespace std;

bool cmp(pair <int, int> a, pair <int, int> b){
    if(a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map <int, int> mp;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
        }
        vector <pair<int, int>> v;
        for(auto x : mp){
            pair <int, int> p;
            p.first = x.first;
            p.second = x.second;
            v.push_back(p);
        }
        sort(v.begin(), v.end(), cmp);
        for(int i = 0; i < v.size(); i++){
            for(int j = 0; j < v[i].second; j++){
                cout << v[i].first << " ";
            }
        }
        cout << endl;
    }
    return 0;
}