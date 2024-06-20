#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &i : a) cin >> i;
        int cnt = 0;
        for(int i = 0; i < n - 1; i++){
            int id = i;
            for(int j = i + 1; j < n; j++){
                if(a[j] < a[id]){
                    id = j;
                }
            }
            if(i != id) cnt++;
            swap(a[i], a[id]);
        }
        cout << cnt << endl;
    }
    return 0;
}