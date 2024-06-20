#include<bits/stdc++.h>
using namespace std;

int n, m, u;
int visited[10005];
vector <int> ke[10005];

void BFS(int u){
	queue <int> q;
	q.push(u);
	visited[u] = 1;
	while(!q.empty()){
		int v = q.front();
		cout << v << " ";
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
		memset(ke, 0, sizeof(ke));
		memset(visited, 0, sizeof(visited));
		cin >> n >> m >> u;
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
		}
		BFS(u);
		cout << endl;
	}
	return 0;
}

