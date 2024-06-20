#include<bits/stdc++.h>
using namespace std;

bool check(char s){
	return ((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z'));
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack <string> st;
		for(int i = s.size() - 1; i >= 0; i--){
			if(check(s[i])){
				st.push(string(1, s[i]));
			}
			else{
				string a = st.top();
				st.pop();
				string b = st.top();
				st.pop();
				string c = a + b + s[i];
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

