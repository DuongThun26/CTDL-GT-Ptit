#include<bits/stdc++.h>
using namespace std;

//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		int n;
//		cin >> n;
//		long long f[n + 1];
//		memset(f, 0, sizeof(f));
//		f[0] = 1;
//		for(int i = 1; i <= n; i++){
//			for(int j = 1; j <= min(i, 3); j++){
//				f[i] += f[i - j];
//			}
//		}
//		cout << f[n] << endl;
//	}
//	return 0;
//}

long long f[51];
int main(){
	f[0] = 1;
	f[1] = 2;
	f[2] = 4;
	for(int i = 3; i <= 50; i++){
		f[i] = f[i - 1] + f[i - 2] + f[i - 3];
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << f[n - 1] << endl;
	}
	return 0;
}
