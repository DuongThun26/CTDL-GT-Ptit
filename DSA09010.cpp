#include<bits/stdc++.h>
using namespace std;

int n, m, u, v;
int visited[10005];
vector <int> ke[10005];

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
			}
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
			visited[i] = 0;
		}
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		bool ok = false;
		for(int i = 1; i <= n; i++){
			memset(visited, 0, sizeof(visited));
			BFS(i);
			for(int j = 1; j <= n; j++){
				if(!visited[j]){
					ok = true;
					break;
				}
			}
		}
		if(!ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

