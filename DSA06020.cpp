#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--)
    {
        set<int> s;
        vector<int> v;
        int n, k;
        cin >> n >> k;
        for(int i = 0; i<n; i++)
        {
            int x; cin >> x;
            s.insert(x);
        }
        for(auto x : s) v.push_back(x);
        for(int i = n - 1; i>= k; i--)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}