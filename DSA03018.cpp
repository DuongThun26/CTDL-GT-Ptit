#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int dem4 = 0, dem7 = 0;
		for(int i = 0; i <= n / 7; i++){
			if((n - 4 * i) % 7 == 0){
				dem4 = i;
				dem7 = (n - 4 * i) / 7;
				break;
			}
		}
		if(dem4 == 0 && dem7 == 0) cout << -1;
		else{
			cout << string(dem4, '4') << string(dem7, '7');
		}
		cout << endl;
	}
	return 0;
}


