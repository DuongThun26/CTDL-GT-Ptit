#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        string s;
        cin >> k >> s;
        map <char, int> mp;
        for(int i = 0; i < s.size(); i++) mp[s[i]]++;
        priority_queue <int> q;
        for(auto x : mp){
            q.push(x.second);
        }
        while(k != 0){
            int x = q.top();
            q.pop();
            x--;
            q.push(x);
            k--;
        }
        long long ans = 0;
        while(q.size() > 0){
            int x = q.top();
            q.pop();
            ans += pow(x, 2);
        }
        cout << ans << endl;
    }
    return 0;
}
