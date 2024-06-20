#include<iostream>
#include<vector>
using namespace std;
vector <vector <int>> v;
void InsertSort(int a[], int n){
    int dem = 0;
	for(int i = 0; i < n; i++){
		int vtc = i - 1, gtc = a[i];
        while(vtc >= 0 && gtc < a[vtc]){
            a[vtc + 1] = a[vtc];
            vtc--;
        }
        a[vtc + 1] = gtc;
        dem++;
		vector <int> v1;
		for(int x = 0; x < dem; x++){
			v1.push_back(a[x]);
		}
		v.push_back(v1);
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &i : a) cin >> i;
	InsertSort(a, n);
	for(vector <vector <int>> :: reverse_iterator it = v.rbegin(); it != v.rend(); it++){
		cout << "Buoc " << (v.rend() - it - 1) << ": ";
		for(auto i : *it) cout << i << " ";
		cout << endl;
	}
	return 0;
}
