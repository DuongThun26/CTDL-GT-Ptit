#include<bits/stdc++.h>
using namespace std;
int n, k, s, cnt;
int a[15];
bool ok = true;
void Init(){
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
}
bool check(){
    int sum = 0;
    for(int i = 1; i <= k; i++){
        sum += a[i];
    }
    return sum == s;
}
void Next(){
    int i = k;
    while(i > 0 && a[i] == n - k + i){
        i--;
    }
    if(i > 0){
        a[i] = a[i] + 1;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[i] + j - i;
        }
    }
    else ok = false;
}
int main(){
    while(1){
        cin >> n >> k >> s;
        if(n < k){
            cout << 0 << endl;
            continue;
        }
        if(n == 0 && k == 0 && s == 0){
            return 0;
        }
        Init();
        cnt = 0;
        ok = true;
        while(ok){
            if(check()) cnt++;
            Next();
        }
        cout << cnt << endl;
    }
    return 0;
}