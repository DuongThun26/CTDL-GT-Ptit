#include<bits/stdc++.h>
using namespace std;
int n, k;
int a[101], x[101];
bool ok = true;

void Init(){
    for(int i = 1; i <= k; i++){
        x[i] = i;
    }
}

void Sinh(){
    int i = k;
    while(i > 0 && x[i] == n - k + i){
        i--;
    }
    if(i > 0){
        x[i] = x[i] + 1;
        for(int j = i + 1; j <= k; j++){
            x[j] = x[i] + j - i;
        }
    }
    else ok = false;
}

bool check(){
    for(int i = 1; i <= k - 1; i++){
        if(a[x[i]] >= a[x[i + 1]]) return false;
    }
    return true;
}
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    Init();
    int cnt = 0;
    while(ok){
        if(check()) cnt++;
        Sinh();
    }
    cout << cnt;
    return 0;
}