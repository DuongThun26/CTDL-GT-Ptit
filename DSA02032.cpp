#include<bits/stdc++.h>
using namespace std;

int x, id;
int a[25], f[25];
vector <vector <int>> v;
void Try(int i, int pos, int sum){
    for(int j = pos; j < id; j++){
            f[i] = a[j];
            sum += a[j];
            if(sum == x){
                vector <int> v1(f, f + i + 1);
                v.push_back(v1);
            }
            else if(sum < x) Try(i + 1, j, sum);
            sum -= a[j];
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
    	int n;
        cin >> n >> x;
        set <int> s;
        for(int i = 0; i < n; i++){
        	int x;
        	cin >> x;
        	s.insert(x);
        }
        id = 0;
        for(auto x : s) a[id++] = x;
        v.clear();
        Try(0, 0, 0);
        if(v.size() == 0) cout << -1;
        else{
            cout << v.size() << " ";
            for(vector <int> v1 : v){
                cout << '{' << v1[0];
                for(int i = 1; i < v1.size(); i++){
                    cout << " " << v1[i];
                }
                cout << '}' << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
