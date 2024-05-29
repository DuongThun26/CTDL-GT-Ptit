#include<bits/stdc++.h>
using namespace std;
int n, k;
int a[101], b[101];
bool ok = true;
void Try(int d, int c, int s){
	for(int i = d; i < n; i++){
		if(s + a[i] < k){
			b[c] = a[i];
			Try(i + 1, c + 1, s + a[i]);
		}
		else if(s + a[i] == k){
			ok = false;
			b[c++] = a[i];
			cout << "[" << b[0];
			for(int j = 1; j < c; j++){
				cout << " " << b[j];
			}
			cout << "]  ";
			return;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ok = true;
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a +n);
		Try(0, 0, 0);
		if(ok) cout << -1;
		cout << endl;
	}
	return 0;
}
