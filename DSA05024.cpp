#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int f[k + 1];
		memset(f, 0, sizeof(f));
		f[0] = 1;
		for(int i = 1; i <= k; i++){
			for(int j = 0; j < n; j++){
				if(i >= a[j]){
					f[i] += f[i - a[j]];
					f[i] %= mod;
				}
			}
		}
		cout << f[k] << endl;
	}
	return 0;
}

