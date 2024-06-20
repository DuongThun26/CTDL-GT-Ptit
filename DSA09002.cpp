#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	cin.ignore();
	vector <pair <int, int>> v;
	for(int i = 1; i <= n; i++){
		string s;
		getline(cin, s);
		string tmp;
		stringstream ss(s);
		while(ss >> tmp){
			if(i < stoi(tmp)){
				pair <int, int> p({i, stoi(tmp)});
				v.push_back(p);
			}
		}
	}
	sort(v.begin(), v.end());
	for(pair <int, int> p : v) cout << p.first << " " << p.second << endl;
	return 0;
}

