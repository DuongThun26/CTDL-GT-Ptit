#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int f[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		memset(f, 1, sizeof(f));
		for(int i = 1; i < n; i++){
			for(int j = 0; j < i; j++){
				if(a[i] >= a[j]){
					f[i] = max(f[i], f[j] + 1);
				}
			}
		}
		cout << n - *max_element(f, f + n) << endl;
	}
	return 0;
}

