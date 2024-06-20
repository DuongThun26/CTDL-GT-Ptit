#include<bits/stdc++.h>
using namespace std;

int n, m;
int visited[10005];
set <int> ke[10005];
vector <pair <int, int>> v;

void DFS(int u, int s, int t){
	visited[u] = 1;
	for(int v : ke[u]){
		if((u == s && v == t) || (u == t && v == s)) continue;
		if(!visited[v]){
			DFS(v, s, t);
		}
	}
}
void DFS1(int u){
	visited[u] = 1;
	for(int v : ke[u]){
		if(!visited[v]){
			DFS1(v);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		v.clear();
		for(int i = 1; i <= n; i++){
			ke[i].clear();
			visited[i] = 0;
		}
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			pair <int, int> p({x, y});
			v.push_back(p);
			ke[x].insert(y);
			ke[y].insert(x);
		}
		int dem = 0;
		for(int i = 1; i <= n; i++){
			if(!visited[i]){
				dem++;
				DFS1(i);
			}
		}
		int cnt;
		for(pair <int, int> c : v){
			cnt = 0;
			memset(visited, 0, sizeof(visited));
			for(int i = 1; i <= n; i++){
				if(!visited[i]){
					cnt++;
					DFS(i, c.first, c.second);
				}
			}
			if(cnt > dem) cout << c.first << " " << c.second << " ";
		}
		cout << endl;
	}
	return 0;
}

