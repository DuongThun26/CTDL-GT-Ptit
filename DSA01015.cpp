#include<bits/stdc++.h>
using namespace std;
int a[20];
vector <long long> v;
bool ok = true;

void Init(){
    for(int i = 0; i < 18; i++){
        a[i] = 0;
    }
}
void Next(){
    int i = 17;
    while(i >= 0 && a[i] == 9){
        a[i] = 0;
        i--;
    }
    if(i >= 0){
        a[i] = 9;
        string s = "";
        for(int x = 0; x < 18; x++){
            s += to_string(a[x]);
        }
        v.push_back(stoll(s));
    }
    else ok = false;
}
int main(){
    int t;
    cin >> t;
    Init();
    ok = true;
    while(ok) Next();
    sort(v.begin(), v.end());
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < v.size(); i++){
            if(v[i] % n == 0){
                cout << v[i] << endl;
                break;
            }
        }
    }
    return 0;
}