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
void tplt(){
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			dem++;
			BFS(i);
		}
	}
	cout << dem << endl;
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
		tplt();
	}
	return 0;
}

