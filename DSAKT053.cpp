#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		s1 = " " + s1;
		s2 = " " + s2;
		int n = s1.size(), m = s2.size();
		int f[n][m];
		memset(f, 0, sizeof(f));
		for(int i = 1; i < n; i++){
			for(int j = 1; j < m; j++){
				if(s1[i] == s2[j]) f[i][j] = f[i - 1][j - 1] + 1;
				else f[i][j] = max(f[i - 1][j], f[i][j - 1]);
			}
		}
		cout << f[n - 1][m - 1] << endl;
	}
	return 0;
}

