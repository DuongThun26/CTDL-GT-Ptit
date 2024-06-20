#include<bits/stdc++.h>
using namespace std;

int n, m;
int visited[10005];
int parent[10005];
vector <int> ke[10005];
bool ok = false;
void DFS(int u){
	visited[u] = 1;
	for(int v : ke[u]){
		if(!visited[v]){
			parent[v] = u;
			DFS(v);
		}
		else if(v != parent[u]){
			ok = true;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 1; i <= n; i++){
			ke[i].clear();
			parent[i] = 0;
			visited[i] = 0;
		}
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for(int i = 1; i <= n; i++){
			sort(ke[i].begin(), ke[i].end());
		}
		ok = false;
		for(int i = 1; i <= n; i++){
			if(!visited[i]){
				DFS(i);
			}
		}
		if(!ok) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}

