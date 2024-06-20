#include<bits/stdc++.h>
using namespace std;

int n, s, a[35], dem = INT_MAX;
void Try(int i, int pos, int sum){
	for(int j = pos; j < n; j++){
		sum += a[j];
		if(sum == s){
			dem = min(dem, i);
			return;
		}
		else if(sum < s && i < dem) Try(i + 1, j + 1, sum);
		sum -= a[j];
	}
}
int main(){
	cin >> n >> s;
	for(int i = 0; i < n; i++) cin >> a[i];
	Try(1, 0, 0);
	if(dem != INT_MAX)
		cout << dem;
	else cout << -1;
	return 0;
}

