#include<bits/stdc++.h>
using namespace std;

int mod = 123456789;
long long poww(int n, long long k){
	if(k == 1) return n;
	long long x = poww(n, k / 2);
	x %= mod;
	if(k % 2 == 0) return x * x % mod;
	return (x * x) % mod * n % mod;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << poww(2, n - 1) << endl;
	}
	return 0;
}

