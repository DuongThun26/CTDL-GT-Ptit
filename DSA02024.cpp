#include<bits/stdc++.h>
using  namespace std;

int n, x[25], used[25], a[25];
vector <int> v1;
vector <vector <int>> v;

void Try(int pos){
    for(int j = pos + 1; j <= n; j++){
        if(a[pos] < a[j]){
            v1.push_back(a[j]);
            if(v1.size() > 1) v.push_back(v1);
            Try(j);
            v1.pop_back();
        }
    }
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    a[0] = 0;
    Try(0);
//    vector <vector <string>> vv;
//    for(int i = 0; i < v.size(); i++){
//        vector <string> vc;
//        for(int j = 0; j < v[i].size(); j++){
//            string s1 = to_string(v[i][j]);
//            vc.push_back(s1); 
//        }
//        vv.push_back(vc);
//    }
//    sort(vv.begin(), vv.end());
    for(int i = 0; i < vv.size(); i++){
        for(int j = 0; j < vv[i].size(); j++){
            cout << vv[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
