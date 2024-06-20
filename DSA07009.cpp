#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack <string> st, out;
		for(int i = s.size() - 1; i >= 0; i--){
			if(s[i] >= 'A' && s[i] <= 'Z'){
				st.push(string(1, s[i]));
			}
			else{
				string a = st.top();
				st.pop();
				string b = st.top();
				st.pop();
				string c = "(" + a + s[i] + b + ")";
				st.push(c);
			}
		}
		while(!st.empty()){
			out.push(st.top());
			st.pop();
		}
		while(!out.empty()){
			string x = out.top();
			cout << x;
			out.pop();
		}
		cout << endl;
	}
	return 0;
}


