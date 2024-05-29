#include<bits/stdc++.h>
using namespace std;
int n, k, x[100];
string a[100];
vector <string> v;
void result(){
    for(int i = 1; i <= k; i++){
        cout << v[x[i] - 1] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int j = x[i - 1] + 1; j <= v.size() - k + i; j++){
        x[i] = j;
        if(i == k) result();
        else Try(i + 1);
    }
}
int main(){
    cin >> n >> k;
    set <string> s;
    for(int i = 0; i < n; i++){
        string s1;
        cin >> s1;
        s.insert(s1);
    }
    for(auto x : s){
        v.push_back(x);
    }
    Try(1);
    return 0;
}