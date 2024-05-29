#include<bits/stdc++.h>
using namespace std;

int n, x[10], used[10];
char a[10];

void result(){
    for(int i = 1; i <= n; i++){
        cout << a[x[i] - 1];
    }
    cout << endl;
}
bool check(){
    if(n <= 4){
        if(x[1] == 1 || x[n] == 1) return true;
    }
    else{
        if((x[1] == 1 && x[n] == 5) || (x[1] == 5 && x[n] == 1)) return true;
        for(int i = 1; i < n; i++){
            if((x[i] == 1 && x[i + 1] == 5) || (x[i] == 5 && x[i + 1] == 1)) return true;
        }
    }
    return false;
}
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!used[j]){
            x[i] = j;
            used[j] = 1;
            if(i == n){
                if(check()){
                    result();
                }
            }
            else Try(i + 1);
            used[j] = 0;
        }
    }
}
int main(){
    char c;
    cin >> c;
    n = c - 'A' + 1;
    for(int i = 0; i < n; i++){
        a[i] = 'A' + i;
    }
    Try(1);
    return 0;
}