#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n];
        for(long long &x : a) cin >> x;
        int cnt[10] = {0};
        for(int i = 0; i < n; i++){
            string tmp = to_string(a[i]);
            for(int j = 0; j < tmp.size(); j++){
                cnt[tmp[j] - '0']++;
            }
        }
        for(int i = 0; i < 10; i++){
            if(cnt[i] != 0) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}