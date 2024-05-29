#include<bits/stdc++.h>
using namespace std;

int n, x[100];
bool ok = true;

bool check(int x[], int n){
	int l = 0, r = n - 1;
	while(l <= r){
		if(x[l] != x[r]) return false;
		l++, r--;
	}
	return true;
}
void init(){
	for(int i = 0; i < n; i++){
		x[i] = 0;
	}
}
void results(){
	for(int i = 0; i < n; i++){
		cout << x[i] << " ";
	}
	cout << endl;
}
void next(){
	int i = n - 1;
	while(i >= 0 && x[i] == 1){
		x[i] = 0;
		i--;
	}
	if(i >= 0){
		x[i] = 1;
	}
	else ok = false;
}
int main(){
	cin >> n;
	init();
	while(ok){
		if(check(x, n)) results();
		next();
	}
	return 0;
}
