#include<bits/stdc++.h>
using namespace std;
int n, k, x[100];
bool ok = true;
void Init(){
	for(int i = 1; i <= k; i++){
		x[i] = i;
	}
}
void Results(){
	for(int i = 1; i <= k; i++){
		cout << x[i];
	}
	cout << " ";
}
void Next(){
	int i = k;
	while(x[i] == n - k + i && i > 0){
		i--;
	}
	if(i > 0){
		x[i] = x[i] + 1;
		for(int j = i + 1; j <= k; j++){
			x[j] = x[i] + j - i;
		}
	}
	else ok = false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		Init();
		ok = true;
		while(ok){
			Results();
			Next();
		}
		cout << endl;
	}
	return 0;
}
