#include<bits/stdc++.h>
using namespace std;

int n, m, u;
vector <int> ke[10005];
int visited[10005];
void DFS(int u){
	cout << u << " ";
	visited[u] = 1;
	for(int v : ke[u]){
		if(!visited[v]){
			DFS(v);
		}
	}
	for(int i = 1; i <= n; i++){
		sort(ke[i].begin(), ke[i].end());
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		memset(ke, 0, sizeof(ke));
		memset(visited, 0, sizeof(visited));
		cin >> n >> m >> u;
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		DFS(u);
		cout << endl;
	}
	return 0;
}

