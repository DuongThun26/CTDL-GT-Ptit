#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <pair <int, int>> v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i].second;
		}
		for(int i = 0; i < n; i++){
			cin >> v[i].first;
		}
		sort(v.begin(), v.end());
		int cnt = 1;
		int x = v[0].first;
		for(int i = 1; i < n; i++){
			if(v[i].second >= x){
				cnt++;
				x = v[i].first;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}