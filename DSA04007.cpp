#include<bits/stdc++.h>
using namespace std;

void solve(int k, string a, string b){
	while(a.size() < b.size()) a = "0" + a;
	while(b.size() < a.size()) b = "0" + b;
	int n = a.size();
	string s = "";
	int nho = 0, du = 0;
	for(int i = n - 1; i >= 0; i--){
		int tmp = (a[i]  - '0') + (b[i] - '0') + nho;
		nho = tmp / k;
		du = tmp % k;
		s = to_string(du) + s;
	}
	if(nho != 0) s = to_string(nho) + s;
	cout << s << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int k;
		string a, b;
		cin >> k >> a >> b;
		solve(k, a, b);
	}
	return 0;
}

