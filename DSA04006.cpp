#include<bits/stdc++.h>
using namespace std;


int solve(long long n, long long k){
	while(n > 1){
		int x = log2(n) + 1;
		long long d = (1ll << x) - 1;
		long long m = d / 2;
		if(k == m + 1) return n % 2;
		else if(k > m + 1){
			k = k - m - 1;
			n /= 2;
		}
		else n /= 2;
	}
}
long long kq(long long n, long long l, long long r){
	long long cnt = 0;
	if(l < r){
		long long m = (l + r) / 2;
		cnt += kq(n, l, m);
		cnt += kq(n, m + 1, r);
		
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, l, r;
		cin >> n >> l >> r;
		long long dem = 0;
		for(int i = l; i <= r; i++){
			if(solve(n, i)) dem++;
		}
		cout << dem << endl;
	}
	return 0;
}

