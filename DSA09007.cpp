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
				parent[x] = v;
				q.push(x);
				visited[x] = 1;
			}
		}
	}
}
void path(int s, int t){
	BFS(s);
	if(!visited[t]) cout << -1;
	else{
		stack <int> st;
		while(s != t){
			st.push(t);
			t = parent[t];
		}
		st.push(s);
		while(!st.empty()){
			cout << st.top() << " ";
			st.pop();
		}
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m >> u >> v;
		for(int i = 1; i <= n; i++){
			ke[i].clear();
			visited[i] = 0;
			parent[i] = 0;
		}
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		path(u, v);
	}
	return 0;
}

