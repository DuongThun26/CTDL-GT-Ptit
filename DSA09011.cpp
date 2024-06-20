#include<bits/stdc++.h>
using namespace std;
int n, m, a[505][505];
int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

void Loang(int i, int j){
	a[i][j] = 0;
	for(int k = 0; k < 8; k++){
		int x = i + dx[k];
		int y = j + dy[k];
		if(x > 0 && x <= n && y > 0 && y <= m && a[x][y]){
			Loang(x, y);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> a[i][j];
			}
		}
		int dem = 0;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				if(a[i][j]){
					dem++;
					Loang(i, j);
				}
			}
		}
		cout << dem << endl;
	}
	return 0;
}

