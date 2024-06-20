#include<bits/stdc++.h>
using namespace std;

//int main(){
//	int n;
//	cin >> n;
//	int a[n];
//	for(int i = 0; i < n; i++){
//		cin >> a[i];
//	}
//	vector <int> v;
//	for(int i = 0; i < n; i++){
//		auto x = lower_bound(v.begin(), v.end(), a[i]);
//		if(x == v.end()){
//			v.push_back(a[i]);
//		}
//		else{
//			*x = a[i];
//		}
//	}
//	cout << v.size() << endl;
//	return 0;
//}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	int f[n];
	memset(f, 0, sizeof(f));
	f[0] = 1;
	for(int i = 1; i < n; i++){
		for(int j = 0; j < i; j++){
			if(a[i] > a[j]){
				f[i] = max(f[i], f[j] + 1);
			}
		}
	}
	cout << *max_element(f, f + n);
	return 0;
}

