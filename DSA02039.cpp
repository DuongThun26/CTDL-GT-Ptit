#include<bits/stdc++.h>
using namespace std;

int n, x[20];
vector <vector<int>> v;
void Try(int i, int k, int sum){
    for(int j = k; j >= 1; j--){
        if(sum + j <= n){
            x[i] = j;
            sum += j;
            if(sum == n){
                vector <int> v1;
                for(int c = 1; c <= i; c++){
                    v1.push_back(x[c]);
                }
                v.push_back(v1);
            }
            else Try(i + 1, j, sum);
            sum -= j;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        v.clear();
        Try(1, n, 0);
        cout << v.size() << endl;
        for(auto v1 : v){
            for(int i = 0; i < v1.size(); i++){
                if(i == 0) cout << "(";
                cout << v1[i];
                if(i < v1.size() - 1) cout << " ";
                else cout << ") ";
            }
        }
        cout << endl;
    }
    return 0;
}