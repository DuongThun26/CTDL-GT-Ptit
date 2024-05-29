#include<bits/stdc++.h>
using namespace std;

int n, a[20][20];
vector <string> v;

void Try(int i, int j, string s){
	if(i == n - 1 && j == n - 1){
		v.push_back(s);
		return;
	}
	if(i < n - 1 && a[i + 1][j] == 1){
		Try(i + 1, j, s + "D");
	}
	if(j < n - 1 && a[i][j + 1] == 1){
		Try(i, j + 1, s + "R");
	}

}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++) cin >> a[i][j];
		}
		if(a[0][0]) Try(0, 0, "");
		if(v.size() != 0) for(string s : v) cout << s << " ";
		else cout << -1;
		cout << endl;
		v.clear();
	}
	return 0;
}
