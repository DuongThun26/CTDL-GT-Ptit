#include<bits/stdc++.h>
using namespace std;

int n, m, u, v;
int visited[10005];
vector <int> ke[10005];
int parent[10005];
void BFS(int u){
	queue <int> q;
	q.push(u);
	visited[u] = 1;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int x : ke[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = 1;
				parent[x] = v;
			}
		}
	}
}
void path(int s, int t){
	memset(visited, 0, sizeof(visited));
	BFS(s);
	if(!visited[t]){
		cout <<"NO";
	}
	else{
		cout << "YES";
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 1; i <= n; i++){
			visited[i] = 0;
			parent[i] = 0;
			ke[i].clear();
		}
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		int q;
		cin >> q;
		while(q--){
			cin >> u >> v;
			path(u, v);
		}
	}
	return 0;
}

