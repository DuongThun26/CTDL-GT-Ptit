#include<bits/stdc++.h>
using namespace std;

int n, k, a[20], x[20];
vector <vector <int>> v;
void Try(int i, int pos){
	for(int j = pos; j < n; j++){
		x[i] = a[j];
		if(i == k - 1){
			vector <int> v1(x, x + i + 1);
			v.push_back(v1);
		}
		Try(i + 1, j + 1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		v.clear();
		cin >> n >> k;
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		Try(0, 0);
		for(vector <int> v1 : v){
			for(int i : v1) cout << i << " ";
			cout << endl;
		}
	}
	return 0;
}

