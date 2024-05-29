#include<bits/stdc++.h>
using namespace std;
int n, a[101];
bool ok = true;
void Init(){
	for(int i = 0; i < n; i++){
		a[i] = 0;
	}
}
void Next(){
	int i = n - 1;
	while(i >= 0 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i >= 0) a[i] = 1;
	else ok = false;
}
int main(){
	//ifstream cin("data.in");
	int w;
	cin >> n >> w;
	int c[n], x[n];
	for(int i = 0; i < n; i++) cin >> c[i];
	for(int i = 0; i < n; i++) cin >> x[i];
	Init();
	long long ans = 0;
	vector <int> v(n);
	while(ok){
		long long sum = 0, anss = 0;
		for(int i = 0; i < n; i++){
			if(a[i]){
				anss += c[i];
				sum += x[i];
			}
			if(sum > w){
				anss = 0;
				break;
			}
		}
		if(anss > ans){
			ans = anss;
			v.clear();
			for(int k = 0; k < n; k++){
				v[k] = a[k];
			}
		}
		Next();
	}
	cout << ans << endl;
	for(int i = 0; i < n; i++) cout << v[i] << " ";
	return 0;
}

