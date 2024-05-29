#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.size();
		long long dem = 0;
		for(int i = 0; i < (1 << n); i++){
			long long ans = i ^ (i >> 1);
			string an = bitset<32>(ans).to_string().substr(32 - n);
			if(an == s) break;
			dem++;
		}
		string kq = bitset<32>(dem).to_string().substr(32 - n);
		cout << kq << endl;
	}
	return 0;
}

