#include<bits/stdc++.h>
using namespace std;

int n, m;
vector <int> ke[10005];
int visited[10005];

void DFS(int u){
	visited[u] = 1;
	for(int v : ke[u]){
		if(!visited[v]){
			DFS(v);
		}
	}
}
int tplt(){
	int dem = 0;
	memset(visited, 0, sizeof(visited));
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			dem++;
			DFS(i);
		}
	}
	return dem;
}
int tp(int u){
	int dem = 0;
	memset(visited, 0, sizeof(visited));
	visited[u] = 1;
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			dem++;
			DFS(i);
		}
	}
	return dem;
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
		for(int i = 1; i <= n; i++){
			if(tp(i) > tplt()){
				cout << i << " ";
			}	
		}
		cout << endl;
	}
	return 0;
}

