#include<bits/stdc++.h>
using namespace std;

int main(){
	stack <int> st;
	int n;
	string s;
	while(cin >> s){
		if(s == "push"){
			cin >> n;
			st.push(n);
		}
		else if(s == "pop"){
			if(st.size() >= 1) st.pop();
		}
		else if(s == "show"){
			if(st.size() == 0) cout << "empty" << endl;
			else{
				stack <int> q;
				while(st.size() >= 1){
					q.push(st.top());
					st.pop();
				}
				while(q.size() >= 1){
					cout << q.top() << " ";
					st.push(q.top());
					q.pop();
				}
				cout << endl;
			}
		}
	}
	return 0;
}

