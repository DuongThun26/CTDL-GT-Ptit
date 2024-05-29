#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
long long poww(int a, long long b){
	if(b == 0) return 1;
	if(b == 1) return a;
	long long x = poww(a, b / 2);
	x %= mod;
	if(b % 2 == 0) return (x * x) % mod;
	return (((x * x) % mod) * a) % mod;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	while(true){
		int a;
		long long b;
		cin >> a >> b;
		if(a == b && a == 0) break;
		else cout << poww(a, b) << endl;
	}
	return 0;
}

