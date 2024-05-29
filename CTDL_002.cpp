#include<bits/stdc++.h>
using namespace std;
int n, k, x[100], y[100];
bool ok = true;
int cnt = 0;
void Init(){
    for(int i = 0; i < n; i++){
        y[i] = 0;
    }
}
void result(){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(y[i] == 1){
            sum += x[i];
        }
    }
    if(sum == k){
        for(int i = 0 ; i < n; i++){
            if(y[i] == 1) cout << x[i] << " ";
        }
        cnt++;
        cout << endl;
    }
}
void Next(){
    int i = n - 1;
    while(i >= 0 && y[i] == 1){
        y[i] = 0;
        i--;
    }
    if(i >= 0){
        y[i] = 1;
    }
    else ok = false;
}

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    sort(x, x + n);
    Init();
    while(ok){
        result();
        Next();
    }
    cout << cnt;
    return 0;
}