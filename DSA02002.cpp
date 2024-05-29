#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <int> v1(n), v2(n);
		for(int i = 0; i < n; i++){
			cin >> v1[i];
		}
		vector <string> v;
		for(int i = 0; i < n; i++){
			string s = "";
			s = s + "[" + to_string(v1[0]);
			for(int j = 1; j < n - i; j++){
				s = s + " " + to_string(v1[j]);
				v2[j - 1] = v1[j - 1] + v1[j];
			}
			s += "]";
			v1 = v2;
			v.push_back(s);
		}
		for(vector <string> :: reverse_iterator it = v.rbegin(); it != v.rend(); it++){
			cout << (*it);
			if(it != v.rend() - 1) cout << " ";
		}
		cout << endl;
	}
	return 0;
}
