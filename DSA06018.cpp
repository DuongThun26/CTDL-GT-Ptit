#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        set <int> se;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            se.insert(x);
        }
        set <int> :: iterator it1 = se.begin();
        set <int> :: iterator it2 = --se.end();
        int kq = *it2 - *it1 + 1 - se.size();
        cout << kq << endl;
    }
    return 0;
}