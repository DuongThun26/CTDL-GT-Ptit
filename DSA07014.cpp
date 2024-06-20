#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack <int> st;
		for(int i = s.size() - 1;  i >= 0; i--){
			if(isdigit(s[i])) st.push(s[i] - '0');
			else{
				int x = st.top();
				st.pop();
				int y = st.top();
				st.pop();
				if(s[i] == '*') x *= y;
				else if(s[i] == '/') x /= y;
				else if(s[i] == '-') x -= y;
				else x += y;
				st.push(x);
			}
		}
		cout << st.top() << endl;
	}
	return 0;
}

