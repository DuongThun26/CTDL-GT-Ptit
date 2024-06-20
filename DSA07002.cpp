#include<bits/stdc++.h>
using namespace std;

int main(){
	stack <int> st;
	int t;
	cin >> t;
	while(t--){
		string s;
		int n;
		cin >> s;
		if(s == "PUSH"){
			cin >> n;
			st.push(n);
		}
		else if(s == "POP"){
			if(st.size() >= 1) st.pop();
		}
		else if(s == "PRINT"){
			if(st.empty()) cout << "NONE" << endl;
			else{
				cout << st.top() << endl;
			}
		}
	}
	return 0;
}

