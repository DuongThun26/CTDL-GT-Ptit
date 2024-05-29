#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[11][11], x[11];
bool ok = true;

void Init(){
    for(int i = 0; i < n; i++){
        x[i] = i + 1;
    }
}
void Next(){
    int i = n - 2;
    while(i >= 0 && x[i] > x[i + 1]){
        i--;
    }
    if(i >= 0){
        int k = n - 1;
        while(x[k] < x[i]){
            k--;
        }
        swap(x[k], x[i]);
        reverse(x + i + 1, x + n);
    }
    else ok = false;
}
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    vector <vector <int>> v;
    Init();
    ok = true;
    while(ok){
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i + 1][x[i]];
        }
        if(sum == k){
            vector <int> v1(x, x + n);
            v.push_back(v1);
        }
        Next();
    }
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}