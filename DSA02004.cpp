#include<bits/stdc++.h>
using namespace std;
int a[10][10];
int n;
vector <string> v;
void Try(int i, int j, string s){
	a[i][j] = 0;
	if(i == n && j == n){
		v.push_back(s);
		return;
	}
	if(i + 1 <= n && a[i + 1][j]){
		a[i + 1][j] = 0;
		s += "D";
		Try(i + 1, j, s);
		s.pop_back();
		a[i + 1][j] = 1;
	}
	if(j + 1 <= n && a[i][j + 1]){
		a[i][j + 1] = 0;
		s += "R";
		Try(i, j + 1, s);
		s.pop_back();
		a[i][j + 1] = 1;
	}
	if(i - 1 >= 1 && a[i - 1][j]){
		a[i - 1][j] = 0;
		s += "U";
		Try(i - 1, j, s);
		s.pop_back();
		a[i - 1][j] = 1;
	}
	if(j - 1 >= 1 && a[i][j - 1]){
		a[i][j - 1] = 0;
		s += "L";
		Try(i, j - 1, s);
		s.pop_back();
		a[i][j - 1] = 1;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		memset(a, 0, sizeof(a));
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cin >> a[i][j];
			}
		}
		v.clear();
		if(a[1][1]) Try(1, 1, "");
		if(v.size() != 0){
			sort(v.begin(), v.end());
			for(string c : v) cout << c << " ";
		}
		else cout << -1;
			cout << endl;
	}
	return 0;
}