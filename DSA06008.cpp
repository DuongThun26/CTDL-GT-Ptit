#include<bits/stdc++.h>
using namespace std;

int n, m, cnt[5], a[100001], b[100001];
long long dem(int a){
	if(a == 0) return 0;
	if(a == 1) return cnt[0];
	long long ans = cnt[0] + cnt[1];
	auto x = upper_bound(b, b + m, a);
	ans += (m - (x - b));
	if(a == 2) ans -= (cnt[3] + cnt[4]);
	if(a == 3) ans += cnt[2];
	return ans;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		memset(cnt, 0, sizeof(cnt));
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < m; i++){
			cin >> b[i];
			if(b[i] < 5) cnt[b[i]]++;
		}
		sort(b, b + m);
		long long ans = 0;
		for(int i = 0; i < n; i++){
			ans += dem(a[i]);
		}
		cout << ans << endl;
	}
	return 0;
}
