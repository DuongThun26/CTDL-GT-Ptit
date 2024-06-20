#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector <int> ke[n + 1];
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
		}
		for(int i = 1; i <= n; i++){
			cout << i << ": ";
			for(int v : ke[i]){
				cout << v << " ";
			}
			cout << endl;
		}
	}
	return 0;
}

