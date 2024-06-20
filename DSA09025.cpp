#include<bits/stdc++.h>
using namespace std;
int n, m, s, t;
vector <int> ke[100005];
int visited[100005];
int parent[100005];

void DFS(int u){
	visited[u] = 1;
	for(int v : ke[u]){
		if(!visited[v]){
			parent[v] = u;
			DFS(v);
		}
	}
}
void path(int s, int t){
	DFS(s);
	if(!visited[t]){
		cout << -1;
	}
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
    int T;
	cin >> T;
	while(T--){
		cin >> n >> m >> s >> t;
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
		}
		path(s, t);
		for(int i = 1; i <= n; i++){
			visited[i] = 0;
			ke[i].clear();
			parent[i] = 0;
		}
	}
	return 0;
}
