#include<bits/stdc++.h>
using namespace std;
int f[200], a[200], used[200], x[200];
int id = 0;
int n, p, s;
void Sang(){
    for(int i = 1; i <= 200; i++){
        f[i] = 1;
    }
    f[1] = 0;
    for(int i = 2; i <= sqrt(200); i++){
        if(f[i]){
            for(int j = i * i; j <= 200; j+= i){
                f[j] = 0;
            }
        }
    }
    for(int i = 1; i < 200; i++){
        if(f[i]) a[id++] = i;
    }
}

vector <vector <int>> v;
void Try(int i, int pos, int sum){
    for(int j = pos; j < id; j++){
        if(!used[j] && a[j] > p){
            x[i] = a[j];
            sum += a[j];
            used[j] = 1;
            if(i == n && sum == s){
                vector <int> v1(x + 1, x + i + 1);
                v.push_back(v1);
            }
            else if(sum < s && i < n) Try(i + 1, j + 1, sum);
            used[j] = 0;
            sum -= a[j];
        }
    }
}
int main(){
    int t;
    cin >> t;
    Sang();
    while(t--){
        memset(used, 0, sizeof(used));
        cin >> n >> p >> s;
        v.clear();
        Try(1, 0, 0);
        cout << v.size() << endl;
        for(vector <int> v1 : v){
            for(int i = 0; i < v1.size(); i++){
                cout << v1[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}