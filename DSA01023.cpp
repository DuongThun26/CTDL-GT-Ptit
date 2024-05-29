#include<bits/stdc++.h>
using namespace std;

int n, k, x[100];
bool ok = false;
void Init(){
    for(int i = 1; i <= k; i++){
        x[i] = i;
    }
}
void Next(){
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
bool check(int x[], int a[], int k){
    for(int i = 1; i <= k; i++){
        if(x[i] != a[i]) return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int a[k + 1];
        for(int i = 1; i <= k; i++){
            cin >> a[i];
        }
        Init();
        int dem = 0;
        ok = true;
        while(ok){
            dem++;
            if(check(x, a, k)){
                cout << dem << endl;
                ok = false;
            }
            Next();
        }
    }
    return 0;
}