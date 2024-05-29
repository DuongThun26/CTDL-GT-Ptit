#include<bits/stdc++.h>
using namespace std;

int cot[8], cc[8], cp[8];
int a[8];
int x[8][8];
int _max = -1e9;
void Try(int i, int j, int sum){
	for(int j = 0;  j < 8; j++){
		if(!cot[j] && !cc[j] && !cp[j]){
			a[i] = j;
			cot[j] = cc[j] = cp[j] = 1;
			if(i == 7){
				_max = max(_max, sum + x[i][j]);
			}
			else Try(i + 1, j + 1, sum + x[i][j]);
			cot[j] = cc[j] = cp[j] = 0;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 8; j++) cin >> x[i][j];
		}
		memset(cot, 0, sizeof(cot)), memset(cc, 0, sizeof(cc)), memset(cp, 0, sizeof(cp));
		Try(0, 0, 0);
		cout << _max << endl;
	}
	return 0;
}

