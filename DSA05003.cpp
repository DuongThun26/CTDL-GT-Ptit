#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
		string s1, s2, s3;
		cin >> s1 >> s2 >> s3;
		s1 = " " + s1, s2 = " " + s2, s3 = " " + s3;
		int f[n + 1][m  +1][k + 1];
		memset(f, 0, sizeof(f));
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				for(int z = 1; z <= k; z++){
					if(s1[i] == s2[j] && s1[i] == s3[z]){
						f[i][j][z] = f[i - 1][j - 1][z - 1] + 1;
					}
					else{
						f[i][j][z] = max({f[i-1][j][z], f[i][j-1][z], f[i][j][z-1]});
					}
				}
			}
		}
		cout << f[n][m][k] << endl;
	} 
	return 0;
}

