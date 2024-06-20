#include<bits/stdc++.h>
using namespace std;

int n, m;
vector <int> ke[10005];
int color[10005];
bool DFS(int u){
	color[u] = 1;
	for(int v : ke[u]){
		if(color[v] == 0){
			if(DFS(v)) return true;
		}
		else if(color[v] == 1){
			return true;
		}
	}
	color[u] = 2;
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 1; i <= n; i++){
			ke[i].clear();
			color[i] = 0;
		}
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
		}
		for(int i = 1; i <= n; i++){
			sort(ke[i].begin(), ke[i].end());
		}
		bool ok = false;
		for(int i = 1; i <= n; i++){
			if(color[i] == 0){
				if(DFS(i)){
					ok = true;
					break;
				}
			}
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

