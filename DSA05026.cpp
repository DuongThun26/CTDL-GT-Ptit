#include<bits/stdc++.h>
using namespace std;

int f[101][25001];
int main(){
	int c, n;
	cin >> c >> n;
	int w[n];
	for(int i = 1; i <= n; i++) cin >> w[i];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= c; j++){
			f[i][j] = f[i - 1][j];
			if(j >= w[i]) f[i][j] = max(f[i][j], f[i - 1][j - w[i]] + w[i]);
		}
	}
	cout << f[n][c];
	return 0;
}

