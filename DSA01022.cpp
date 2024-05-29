#include<bits/stdc++.h>
using namespace std;

int n, x[100];
bool ok = true;
void Init(){
    for(int i = 1; i <= n; i++){
        x[i] = i;
    }
}
void Next(){
    int i = n - 1;
    while(i > 0 && x[i] > x[i + 1]){
        i--;
    }
    if(i > 0){
        int k = n;
        while(x[i] > x[k]){
            k--;
        }
        swap(x[i], x[k]);
        int l = i + 1, r = n;
        while(l < r){
            swap(x[l], x[r]);
            l++, r--;
        }
    }
    else ok = false;
}
int check(int x[], int a[], int n){
    for(int i = 1; i <= n; i++){
        if(x[i] != a[i]){
            return false;
        }
    }
    return true;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        Init();
        ok = true;
        int dem = 0;
        while(ok){
            dem++;
            if(check(x, a, n)){
                cout << dem << endl;
                ok = false;
            }
            Next();
        }
    }
    return 0;
}