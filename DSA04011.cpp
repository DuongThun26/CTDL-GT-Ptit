#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		long long a = 0, b = 0;
		for(int i = s1.size() - 1; i >= 0; i--){
			a += (s1[i] - '0') * (1ll << (s1.size() - 1 - i));
		}
		for(int i = s2.size() - 1; i >= 0; i--){
			b += (s2[i] - '0') * (1ll << (s2.size() - 1 - i));
		}
		cout << a * b << endl;
	}
	return 0;
}

