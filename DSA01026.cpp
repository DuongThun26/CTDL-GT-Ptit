#include<bits/stdc++.h>
using namespace std;

int x[100], n;
bool ok = true;
void Init(){
    for(int i = 0; i < n; i++){
        x[i] = 6;
    }
}
void result(){
    for(int i = 0; i < n; i++){
        cout << x[i];
    }
    cout << endl;
}
void Next(){
    int i = n - 1;
    while(i >= 0 && x[i] == 8){
        x[i] = 6;
        i--;
    }
    if(i >= 0){
        x[i] = 8;
    }
    else ok = false;
}
bool check(){
    if(x[0] != 8 || x[n - 1] != 6) return false;
    for(int i = 0; i < n - 1; i++)
        if(x[i] == 8 && x[i + 1] == 8) return false;
    for(int i = 0; i < n - 3; i++) 
        if(x[i] == 6 && x[i + 1] == 6 && x[i + 2] == 6 && x[i + 3] == 6) return false;
    return true;
}
int main(){
    cin >> n;
    Init();
    while(ok){
        if(check()) result();
        Next();
    }
    return 0;
}