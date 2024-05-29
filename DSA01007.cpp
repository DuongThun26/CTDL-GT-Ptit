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
    cout << " ";
}
void Next(){
    int i = n;
    while(i > 0 && x[i] == 'B'){
        x[i] = 'A';
        i--;
    }
    if(i > 0){
        x[i] = 'B';
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
            Results();
            Next();
        }
        cout << endl;
    }
    return 0;
}