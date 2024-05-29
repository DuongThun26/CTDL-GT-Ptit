#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        pair <int, int> p[n];
        for(int i = 0; i < n; i++){
            int x, y;
            cin >> x >> y;
            p[i].first = y;
            p[i].second = x;
        } 
        sort(p, p + n);
        int dem = 1;
        int kt = p[0].first;
        for(int i = 1; i < n; i++){
            if(p[i].second >= kt){
                dem++;
                kt = p[i].first;
            }
        }
        cout << dem << endl;
    }
    return 0;
}