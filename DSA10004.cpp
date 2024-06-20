#include<bits/stdc++.h>
using namespace std;

int n, m;
vector <int> ke[10005];
int solve(){
	int deg = 0;
	for(int i = 1; i <= n; i++){
		deg += (ke[i].size() % 2 == 1);
	}
	if(deg == 0) return 2;
	else if(deg == 2) return 1;
	return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 1; i <= n; i++){
			ke[i].clear();
		}
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		cout << solve() << endl;
	}
	return 0;
}

