#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n){
    int b[n];
    for(int i = 0; i < n; i++){
        b[i] = a[i];
    }
    sort(b, b + n);
    for(int i = 0; i < n; i++){
        if(a[i] != b[i] && a[i] != b[n - i - 1]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &i : a) cin >> i;
        if(check(a, n)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}