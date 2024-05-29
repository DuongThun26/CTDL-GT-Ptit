#include<bits/stdc++.h>
using namespace std;

int m, n, k, a[25], x[25];
vector <vector <int>> v;

void Try(int i, int pos, int sum){
    for(int j = pos; j <= n; j++){
        x[i] = a[j];
        sum += a[j];
        if(sum == k){
            vector <int> v1(x + 1, x + i + 1);
            v.push_back(v1);
        }
        else if(sum < k) Try(i + 1, j, sum);
        sum -= a[j];
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> m >> k;
        set <int> se;
        for(int i = 0; i < m; i++){
            int x; cin >> x;
            se.insert(x);
        }
        n = se.size();
        int id = 1;
        for(auto b : se){
            a[id++] = b;
        }
        sort(a + 1, a + n + 1);
        v.clear();
        Try(1, 1, 0);
        if(v.size() == 0) cout << -1;
        else{
            sort(v.begin(), v.end());
            for(int i = 0; i < v.size(); i++){
                cout << '[' << v[i][0];
                for(int j = 1; j < v[i].size(); j++){
                    cout << " " << v[i][j];
                }
                cout << ']';
            }
        }
        cout << endl;
    }
    return 0;
}