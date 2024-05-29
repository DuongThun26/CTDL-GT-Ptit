#include<bits/stdc++.h>
using namespace std;

int n, k;
char x[100];
bool ok = true;
void Init(){
    for(int i = 0; i < k; i++)
        x[i] = 'A' + i;
}
void result(){
    for(int i = 0; i < k; i++){
        cout << x[i];
    }
    cout << endl;
}
void Next(){
    int i = k - 1;
    while(i >= 0 && x[i] == n - k + i + 'A'){
        i--;
    }
    if(i >= 0){
        x[i] = x[i] + 1;
        for(int j = i + 1; j < k; j++){
            x[j] = x[i] + j - i;
        }
    }
    else ok = false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        Init();
        ok = true;
        while(ok){
            result();
            Next();
        }
    }
    return 0;
}