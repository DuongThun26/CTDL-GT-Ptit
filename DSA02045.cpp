#include<bits/stdc++.h>
using namespace std;

int n;
string s;
vector <string> v;
void Try(int pos, string a){
	for(int j = pos; j < n; j++){
		a += string(1, s[j]);
		v.push_back(a);
		Try(j + 1, a);
		a.erase(a.size() - 1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		v.clear();
		cin >> s;
		n = s.size();
		Try(0, "");
		sort(v.begin(), v.end());
		for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
		cout << endl;
	}
	return 0;
}

