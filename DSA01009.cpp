#include<bits/stdc++.h>
using namespace std;
bool ok = true;
void Init(char x[], int n){
    for(int i = 0; i < n; i++){
        x[i] = 'A';
    }
}
bool check(char x[], int n, int k){
    int cnt = 0;
    bool ook = false;
    for(int i = 0; i < n; i++){
        if(x[i] == 'A') cnt++;
        else{
            if(cnt == k) ook = true;
            cnt = 0;
        }
    }
    if(cnt != 0 && cnt == k) ook = true;
    return ook;
}
void Next(char x[], int n){
    int i = n - 1;
    while(i >= 0 && x[i] == 'B'){
        x[i] = 'A';
        i--;
    }
    if(i >= 0) x[i] = 'B';
    else ok = false;
}
int main(){
    int n, k;
    cin >> n >> k;
    char x[n];
    Init(x, n);
    vector <string> v;
    while(ok){
        if(check(x, n, k)) v.push_back(x);
        Next(x, n);
    }
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
}