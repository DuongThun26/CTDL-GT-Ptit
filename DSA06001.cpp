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
        sort(a, a + n, greater());
        int b[n]; int id = 0;
        if(n % 2 == 1){
            for(int i = 0; i < n; i += 2){
                b[i] = a[id++];
            }
            for(int i = n - 2; i >= 0; i -= 2){
                b[i] = a[id++];
            }
        }
        else{
            for(int i = 0; i < n; i += 2){
                b[i] = a[id++];
            }
            for(int i = n - 1; i >= 0; i -= 2){
                b[i] = a[id++];
            }
        }
        for(int i : b) cout << i << " ";
        cout << endl;
    }
    return 0;
}