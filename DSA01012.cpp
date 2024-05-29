#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 0; i < (1 << n); i++){
			int x = i ^ (i >> 1);
			string s = bitset<32>(x).to_string().substr(32 - n);
			cout << s << endl;
		}
		cout << endl;
	}
	return 0;
}


