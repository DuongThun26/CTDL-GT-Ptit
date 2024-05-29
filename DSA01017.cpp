#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		long long ans = 0;
		for(int i = s.size() - 1; i >= 0; i--){
			ans += (s[i] - '0') * (1 << (s.size() - 1 - i));
		}
		ans = ans ^ (ans >> 1);
		string kq = bitset<32>(ans).to_string().substr(32 - s.size());
		cout << kq << endl;
	}
	return 0;
}

