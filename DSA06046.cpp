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
        sort(a, a + n);
        int kc = 1000000;
        for(int i = 0; i < n - 1; i ++){
            if(kc > (a[i + 1] - a[i])){
                kc = a[i + 1] - a[i];
            }
        }
        cout << kc << endl;
    }
    return 0;
}
