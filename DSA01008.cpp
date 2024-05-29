#include<bits/stdc++.h>
using namespace std;
int n, k, x[100];
bool ok = true;
void Init(){
    for(int i = 1; i <= n; i++){
        x[i] = 0;
    }
}
void Results(){
    for(int i = 1; i <= n; i++){
        cout << x[i];
    }
    cout << endl;
}
void Next(){
    int i = n;
    while(i > 0 && x[i] == 1){
        x[i] = 0;
        i--;
    }
    if(i > 0){
        x[i] = 1;
    }
    else ok = false;
}
bool Check(int x[], int n, int k){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(x[i] == 1) cnt++;
    }
    return cnt == k;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ok = true;
        cin >> n >> k;
        Init();
        while(ok){
            if(Check(x, n, k)) Results();
            Next();
        }
    }
    return 0;
}