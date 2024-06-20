#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n1, n2, n3;
		cin >> n1 >> n2 >> n3;
		vector <long long> s1, s2;
		for(int i = 0; i < n1; i++){
			long long x;
			cin >> x;
			s1.push_back(x);
		}
		for(int i = 0; i < n2; i++){
			long long x;
			cin >> x;
			s2.push_back(x);
		}
		bool ok = false;
		for(int i = 0; i < n3; i++){
			long long x;
			cin >> x;
			if(find(s1.begin(), s1.end(), x) != s1.end() && find(s2.begin(), s2.end(), x) != s2.end()){
				cout << x << " ";
				ok = true;
			}
		}
		if(!ok) cout << -1;
		cout << endl;
	}
	return 0;
}


