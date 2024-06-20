#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.size();
		int f[n][n];
		memset(f, 0, sizeof(f));
		int ans = 1;
		for(int i = 0; i < n; i++) f[i][i] = 1;
		for(int len = 2; len <= n; len++){
			for(int j = 0; j <= n - len; j++){
				int vtc = j + len - 1;
				if(len == 2){
					if(s[j] == s[vtc]) f[j][vtc] = 1;
				}
				else{
					if(s[j] == s[vtc] && f[j + 1][vtc - 1]) f[j][vtc] = 1;
				}
				if(f[j][vtc]) ans = max(ans, len);
			}
		}
		cout << ans << endl;
	}
	return 0;
}

