#include<bits/stdc++.h>
using namespace std;

int n, m;
map <int, int> deg1;
map <int, int> deg2;

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			deg1[x]++;
			deg2[y]++;
		}
		for(int i = 1; i <= n; i++){
			
		}
	}
	return 0;
}

