#include<bits/stdc++.h>
using namespace std;

int n, x[205], a[205];
vector <vector <int>> v;
void Try(int i, int pos, int sum){
	for(int j = pos; j < n; j++){
		x[i] = a[j];
		sum += a[j];
		if(sum % 2 == 1){
			vector <int> v1(x, x + i + 1);
			v.push_back(v1);
		}
		Try(i + 1, j + 1, sum);
		sum -= a[j];
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		v.clear();
		cin >> n;
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n, greater<int>());
		Try(0, 0, 0);
		sort(v.begin(), v.end());
		for(vector <int> v1 : v){
			for(int i : v1) cout << i << " ";
			cout << endl;
		}
	}
	return 0;
}


