#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        sort(a, a + n);
        sort(b, b + m);
        int c[n + m];
        int i = 0, j = 0, id = 0;
        while(i < n && j < m){
            if(a[i] < b[j]){
                c[id++] = a[i++];
            }
            else c[id++] = b[j++];
        }
        while(i < n){
            c[id++] = a[i++];
        }
        while(j < m){
            c[id++] = b[j++];
        }
        for(int i : c) cout << i << " ";
        cout << endl;
    }
    return 0;
}