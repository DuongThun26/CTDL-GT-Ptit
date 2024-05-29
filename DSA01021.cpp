#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[k];
		map <int,int> mp;
        for(int i = 1; i <= k; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        int dem = 0;
        int i = k;
        while(i > 0 && a[i] == n - k + i){
            i--;
        }
        if(i > 0){
            a[i] = a[i] + 1;
            for(int j = i + 1; j <= k; j++){
                a[j] = a[i] + j - i;
            }
            for(int i = 1; i <= k; i++){
                if(mp[a[i]] == 0) dem++;
            }
        }
        else dem = k;
        cout << dem << endl;
    }
    return 0;
}

