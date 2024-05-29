#include<bits/stdc++.h>
using namespace std;

int n, k, a[20];
bool ok  = true;
void Init(){
    k = 1;
    a[k] = n;
}
void result(){
    for(int i = 1; i <= k; i++){
        if(i == 1) cout << '(';
        cout << a[i];
        if(i != k) cout << " ";
        else cout << ')';
    }
    cout << " ";
}
void Next(){
    int i = k;
    while(i > 0 && a[i] == 1){
        i--;
    }
    if(i > 0){
        a[i] = a[i] - 1;
        int cl = k - i + 1;
        k = i;
        int c = cl / a[i];
        int d = cl % a[i];
        for(int j = 0; j < c; j++){
            k++;
            a[k] = a[i];
        }
        if(d != 0) a[++k] = d;
    }
    else ok = false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        Init();
        ok = true;
        while(ok){
            result();
            Next();
        }
        cout << endl;
    }
    return 0;
}