#include<bits/stdc++.h>
using namespace std;

int n, ans;
void Try(int dem, int n){
	if(n == 1){
		if(dem != 0){
			ans = min(ans, dem);
			dem = 0;
		}
	}
	if(n % 3 == 0 && dem < ans) Try(dem + 1, n / 3);
	if(n % 2 == 0 && dem < ans) Try(dem + 1, n / 2);
	if(n > 1 && dem < ans) Try(dem + 1, n - 1);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ans = INT_MAX;
		Try(0, n);
		cout << ans << endl;
	}
	return 0;
}

