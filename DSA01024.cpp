#include<bits/stdc++.h>
using namespace std;
int n, k, x[100];
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
        string y; cin >> y;
        s.insert(y);
    }
    for(auto c : s) v.push_back(c);
    Try(1);
    return 0;
}