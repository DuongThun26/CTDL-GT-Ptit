#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n + 1][m + 1];
		for(int i = 1; i <= n; i++){
			for(int j = 1;  j<= m; j++){
				cin >> a[i][j];
			}
		}
		int f[n + 1][m + 1];
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				if(i == 1 && j == 1) f[i][j] = a[i][j];
				else if(i == 1){
					f[i][j] = f[i][j - 1] + a[i][j];
				}
				else if(j == 1){
					f[i][j] = f[i - 1][j] + a[i][j];
				}
				else{
					f[i][j] = min(min(f[i - 1][j - 1], f[i - 1][j]), f[i][j - 1]) + a[i][j];
				}
			}
		}
		cout << f[n][m] << endl;
	}
	return 0;
}

