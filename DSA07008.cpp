#include<bits/stdc++.h>
using namespace std;

string v = "+-*/^";
bool check1(char c){
    for(int i = 0; i < v.size(); i++){
        if(c == v[i]) return true;
    }
    return false;
}
bool check2(char c){
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
int p(char c){
    if(c == '^') return 3;
    else if(c == '*' || c == '/') return 2;
    else if(c == '+' || c == '-') return 1;
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s, ans;
        cin >> s;
        stack <char> st;
        st.push('#');
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
                continue;
            }
            if(s[i] == ')'){
                while(st.top() != '('){
                    ans += st.top();
                    st.pop();
                }
                st.pop();
                continue;
            }
            if(check2(s[i])){
                ans += s[i];
                continue;
            }
            if(check1(s[i])){
                while(p(st.top()) >= p(s[i])){
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
                continue;
            }
        }
        while(st.top() != '#' && st.top() != '('){
            ans += st.top();
            st.pop();
        }
        cout << ans << endl;
    }
    return 0;
}