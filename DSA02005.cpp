#include<iostream>
#include<string>
#include<set>
#include<vector>
using namespace std;
vector <char> v;
int x[100];
int used[27] = {0};
void result(){
    for(int i = 1; i <= v.size(); i++){
        cout << v[x[i] - 1];
    }
    cout << " ";
}
void Try(int i){
    for(int j = 1; j <= v.size(); j++){
        if(!used[j]){
            x[i] = j;
            used[j] = 1;
            if(i == v.size()) result();
            else Try(i + 1);
            used[j] = 0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        set <char> se;
        for(int i = 0; i < s.size(); i++){
            se.insert(s[i]);
        }
        for(auto x : se) v.push_back(x);
        Try(1);
        cout << endl;
        v.clear();
    }
    return 0;
}