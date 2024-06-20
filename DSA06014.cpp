#include<bits/stdc++.h>
using namespace std;

bool nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool ok = true;
        for(int i = 0; i <= n; i++){
            if(nt(i) && nt(n - i)){
                cout << i << " " << n - i;
                ok = false;
                break;
            }
        }
        if(ok) cout << -1;
        cout << endl;
    }
    return 0;
}