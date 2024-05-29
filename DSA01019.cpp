#include<bits/stdc++.h>
using namespace std;
int n;
char x[100];
bool ok = true;
void Init(){
    for(int i = 1; i <= n; i++){
        x[i] = 'A';
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
    while(i > 0 && x[i] == 'H'){
        x[i] = 'A';
        i--;
    }
    if(i > 0) x[i] = 'H';
    else ok = false;
}
bool Check(char x[], int n){
    if(x[1] != 'H' || x[n] != 'A') return false;
    for(int i = 1; i <= n - 1; i++){
        if(x[i] == 'H' && x[i] == x[i + 1]) return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        Init();
        ok = true;
        while(ok){
            if(Check(x, n)) Results();
            Next();
        }
    }
    return 0;
}