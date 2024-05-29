#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		vector <int> v(a, a + n);
		while(v.size() >= 1){
			cout << '[' << v[0];
			for(int i = 1; i < v.size(); i++){
				cout << " " << v[i];
			}
			cout << ']' << endl;
			vector <int> c(v.size() - 1);
			for(int i = 0; i < v.size() - 1; i++){
				c[i] = v[i] + v[i + 1];
			}
			v = c;
		}
	}
	return 0;
}