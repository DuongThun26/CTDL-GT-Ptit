#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        multiset<int> s1, s2;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            s1.insert(x);
        }
        for(int i = 0; i < m; i++){
            int x;
            cin >> x;
            if(s1.count(x) != 0){
                s2.insert(x);
                s1.erase(s1.find(x));
            }

        }
        bool ok = false;
        for(int i = 0; i < k; i++){
            int x;
            cin >> x;
            if(s2.count(x) != 0){
                cout << x << " ";
                s2.erase(s2.find(x));
                ok = true;
            }
        }
        if(!ok) cout << "NO";
        cout << endl;
    }
    return 0;
}