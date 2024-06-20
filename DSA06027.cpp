#include<iostream>
#include<vector>
using namespace std;
vector <vector <int>> v;
void Interchange(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[i]){
				swap(a[i], a[j]);
			}
		}
		vector <int> v1;
		for(int x = 0; x < n; x++){
			v1.push_back(a[x]);
		}
		v.push_back(v1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int &i : a) cin >> i;
		Interchange(a, n);
		for(vector <vector <int>> :: reverse_iterator it = v.rbegin(); it != v.rend(); it++){
			cout << "Buoc " << (v.rend() - it) << ": ";
			for(auto i : *it) cout << i << " ";
			cout << endl;
		}
		v.clear();
	}
	return 0;
}
