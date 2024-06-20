#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	cin.ignore();
	int a[n + 1][n + 1];
	for(int i = 1; i <= n; i++){
		string s;
		getline(cin, s);
		string tmp;
		stringstream ss(s);
		vector <int> v;
		while(ss >> tmp){
			v.push_back(stoi(tmp));
		}
		for(int j = 1; j <= n; j++){
			if(find(v.begin(), v.end(), j) != v.end()){
				a[i][j] = 1;
			}
			else a[i][j] = 0;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

