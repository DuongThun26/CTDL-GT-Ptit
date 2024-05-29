#include<iostream>
#include<vector>
#include<set>
using namespace std;
int n, k, x[100];
vector <int> v;
bool ok = true;
void Init(){
    for(int i = 1; i <= k; i++){
        x[i] = i;
    }
}
void result(){
    for(int i = 1; i <= k; i++){
        cout << v[x[i] - 1] << " ";
    }
    cout << endl;
}
void Next(){
    int i = k;
    while(i > 0 && x[i] == v.size() - k + i){
        i--;
    }
    if(i > 0){
        x[i] = x[i] + 1;
        for(int j = i + 1; j <= k; j++){
            x[j] = x[i] + j - i;
        }
    }
    else ok = false;
}
int main(){
    cin >> n >> k;
    set <int> s;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        s.insert(x);
    }
    for(auto c : s) v.push_back(c);
    Init();
    while(ok){
        result();
        Next();
    }
    return 0;
}