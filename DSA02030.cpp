#include<bits/stdc++.h>
using namespace std;

int n, m, x[30];
char a[30];
bool ok = true;
void Init(){
	for(int i = 1; i <= n; i++){
		x[i] = 1;
	}
}
void Next(){
	int i = n;
	while(i > 0 && x[i] == m){
		i--;
	}
	if(i > 0){
		x[i] = x[i] + 1;
		for(int j = i + 1; j <= n; j++){
			x[j] = x[i];
		}
	}
	else ok = false;
}
void Result(){
	for(int i = 1; i <= n; i++){
		cout << a[x[i]];
	}
	cout << endl;
}
int main(){
	char c;
	cin >> c >> n;
	m = c - 'A' + 1;
	for(int i = 1; i <= m; i++){
		a[i] = 'A' + i - 1;
	}
	ok = true;
	Init();
	while(ok){
		Result();
		Next();
	}
	return 0;
}



