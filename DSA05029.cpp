#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		s = " " + s;
		if(s[1] == '0'){
			cout << 0 << endl;
			continue;
		}
		int n = s.size();
		int f[n];
		memset(f, 0, sizeof(f));
		f[0] = f[1] = 1;
		for(int i = 2; i < n; i++){
			if(s[i] == '0'){
				if(s[i - 1] - '0' > 2){
					f[n - 1] = 0;
					continue;
				}
				f[i] = 0;
			}
			else{
				f[i] = f[i - 1];
			}
			int k = (s[i - 1] - '0') * 10 + (s[i] - '0');
			if(k >= 10 && k <= 26) f[i] += f[i - 2];
		}
		cout << f[n - 1] << endl;
	}
	return 0;
}
