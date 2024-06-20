#include<bits/stdc++.h>
using namespace std;

bool cmp(pair <int, int> a, pair <int, int> b){
    return a.first < b.first;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector <pair<int, int>> v;
        for(int i = 0; i < n; i++){
            pair <int, int> p;
            p.first = abs(x - a[i]);
            p.second = a[i];
            v.push_back(p);;
        }
        stable_sort(v.begin(), v.end(), cmp);
        for(auto x : v) cout << x.second << " ";
        cout << endl;
    }
    return 0;
}