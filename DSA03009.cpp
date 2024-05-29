#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        pair <int , int> p[n];
        for(int i = 0; i < n; i++){
            int x, y, z;
            cin >> x >> y >> z;
            p[i].first = z;
            p[i].second = y;
        }
        sort(p, p + n, greater <pair <int, int>>());
        int ans = 0, dem = 0;
        int used[n + 1];
        memset(used, 0, sizeof(used));
        for(int i = 0; i < n; i++){
            for(int j = min(n, p[i].second); j >= 1; j--){
                if(!used[j]){
                    ans += p[i].first;
                    dem++;
                    used[j] = 1;
                    break;
                }
            }
        }
        cout << dem << " " << ans << endl;
    }
    return 0;
}