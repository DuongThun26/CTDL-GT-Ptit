#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v1, v2;
    for(int i = 1; i <= n; i++){
    	int x;
    	cin >> x;
    	if(i % 2 == 1){
    		v1.push_back(x);
    	}
    	else v2.push_back(x);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), greater <int> ());
    int id1 = 0, id2 = 0;
    for(int i = 1; i <= n; i++){
    	if(i % 2 == 1){
    		cout << v1[id1++] << " ";
    	}
    	else cout << v2[id2++] << " ";
    }
    return 0;
}

