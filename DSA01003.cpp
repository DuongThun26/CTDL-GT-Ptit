#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int &i : a) cin >> i;
		int i = n - 2;
		while(i >= 0 && a[i] > a[i + 1]){
			i--;
		}
		if(i >= 0){
			int j = n - 1;
			while(a[i] > a[j]){
				j--;
			}
			swap(a[i], a[j]);
			int l = i + 1, r = n - 1;
			while(l <= r){
				swap(a[l], a[r]);
				l++, r--;
			}
		}
		for(int i : a) cout << i << " ";
		cout << endl;
	}
	return 0;
}
