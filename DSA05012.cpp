#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		long long f[n + 1][n + 1];
		for(int i = 0; i <= n; i++){
			for(int j = 0; j <= i; j++){
				if(j == 0 || j == i){
					f[i][j] = 1;
				}
				else{
					f[i][j] = (f[i - 1][j - 1] + f[i - 1][j]) % mod;
				}
			}
		}
		cout << f[n][k] << endl;
	}
	return 0;
}

