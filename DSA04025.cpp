#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
struct matran{
	long long f[2][2];
	friend matran operator * (matran a, matran b){
		matran kq;
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < 2; j++){
				kq.f[i][j] = 0;
				for(int k = 0; k < 2; k++){
					kq.f[i][j] += a.f[i][k] * b.f[k][j];
					kq.f[i][j] %= mod;
				}
			}
		}
		return kq;
	}
};
matran poww(matran a, int n){
	if(n == 1) return a;
	matran x = poww(a, n / 2);
	if(n % 2 == 0) return x * x;
	else return x * x * a;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		matran a;
		a.f[0][0] = 1, a.f[0][1] = 1;
		a.f[1][0] = 1, a.f[1][1] = 0;
		matran x = poww(a, n);
		cout << x.f[0][1] << endl;
	}
	return 0;
}
