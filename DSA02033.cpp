#include<bits/stdc++.h>
using namespace std;

int n, x[11], used[11];
bool check(){
    for(int i = 1; i <= n - 1; i++){
        if(abs(x[i] - x[i + 1]) == 1) return false;
    }
    return true;
}
void result(){
    for(int i = 1; i <= n; i++){
        cout << x[i];
    }
    cout << endl;
}
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!used[j]){
            x[i] = j;
            used[j] = 1;
            if(i == n){
                if(check()){
                    result();
                    cout << endl;
                }
            }
            else Try(i + 1);
            used[j] = 0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        Try(1);
    }
    return 0;
}