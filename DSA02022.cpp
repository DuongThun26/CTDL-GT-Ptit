#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <string> n = {"02", "20", "22"};
    vector <string> nm = {"2000", "2002", "2020", "2022", "2200", "2202", "2220", "2222"};
    vector <string> v;
    string s;
    for(int i = 0;  i < 3; i++){
        s = n[i];
        s += "02";
        for(int j = 0; j < 8; j++){
            s += nm[j];
            v.push_back(s);
            s.erase(4);
        }
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
       v[i].insert(2, "/");
       v[i].insert(5, "/");
        cout << v[i] << endl;
    }
    return 0;
}
