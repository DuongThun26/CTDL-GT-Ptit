#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        priority_queue <int, vector <int>, greater <int>> p;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            p.push(x);
        }
        long long cp = 0;
        while(p.size() > 1){
            int s1 = p.top(); 
            p.pop();
            int s2 = p.top(); 
            p.pop();
            long long k = s1 + s2;
            cp += k;
            p.push(k);
        }
        cout << cp << endl;
    }
    return 0;
}