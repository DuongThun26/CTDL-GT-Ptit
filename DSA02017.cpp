#include<bits/stdc++.h>
using namespace std;

int a[9][9];
int x[9], c[9], cc[20], cp[20];
int ans = INT_MIN;

void Try(int i){
	for(int j = 1; j <= 8; j++){
		if(!c[j] && !cp[i + j - 1] && !cc[i - j + 8]){
			x[i] = j;
			c[j] = cp[i + j - 1] = cc[i - j + 8] = 1;
			if(i == 8){
				int sum = 0;
				for(int z = 1; z <= 8; z++){
					sum += a[z][x[z]];
				}
				ans = max(ans, sum);
			}
			else Try(i + 1);
			c[j] = cp[i + j - 1] = cc[i - j + 8] = 0;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i = 1; i <= 8; i++){
			for(int j = 1; j <= 8; j++){
				cin >> a[i][j];
			}
		}
		Try(1);
		cout << ans << endl;
	}
	return 0;
}