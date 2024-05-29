#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
struct matran{
	int n;
	long long f[11][11];
	friend matran operator * (matran a, matran b){
		matran kq;
		kq.n = a.n;
		for(int i = 0; i < kq.n; i++){
			for(int j = 0; j < kq.n; j++){
				kq.f[i][j] = 0;
				for(int k = 0; k < kq.n; k++){
					kq.f[i][j] += a.f[i][k] * b.f[k][j];
					kq.f[i][j] %= mod;
				}
			}
		}
		return kq;
	}
};
matran poww(matran a, int k){
	if(k == 1) return a;
	matran x = poww(a, k / 2);
	if(k % 2 == 0) return x * x;
	else return x * x * a;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		matran a;
		a.n = n;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a.f[i][j];
			}
		}
		matran x = poww(a, k);
		long long ans = 0;
		for(int i = 0; i < n; i++){
			ans += x.f[i][n - 1];
			ans %= mod;
		}
		cout << ans << endl;
	}
	return 0;
}

