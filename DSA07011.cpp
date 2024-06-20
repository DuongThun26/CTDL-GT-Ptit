#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack <string> st;
		for(int i = 0; i < s.size(); i++){
			if(isalpha(s[i])){
				st.push(string(1, s[i]));
			}
			else{
				string a = st.top();
				st.pop();
				string b = st.top();
				st.pop();
				string c = s[i] + b + a;
				st.push(c);
			}
		}
		while(!st.empty()){
			cout << st.top();
			st.pop();
		}
		cout << endl;
	}
	return 0;
}

