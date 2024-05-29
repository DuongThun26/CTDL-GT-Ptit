#include<bits/stdc++.h>
using namespace std;

int result(){
	int n, s, m;
	cin >> n >> s >> m;
	int cn = s / 7;
	if(m > n) return -1;
	int c = s - cn;
	int tong = s * m;
	for(int i = 0; i <= c; i++){
		if(n * i >= tong){
			return i;
		}
	}
	return -1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cout << result() << endl;
	}
	return 0;
}

