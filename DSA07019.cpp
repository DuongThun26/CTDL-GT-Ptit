#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int f[n];
        stack<int> st;
        int i;
        for(i = 0; i < n; i++){
        	if(st.empty() || a[i] >= a[st.top()]){
                st.push(i);
            }
            else{
                while(!st.empty() && a[i] < a[st.top()]){
                    int id = st.top();
                    st.pop();
                    if(st.empty()) f[id] = i * a[id];
                    else f[id] = a[id] * (i - st.top() - 1);
                }
                st.push(i);
            }
        }
        while(!st.empty()){
            int id = st.top();
            st.pop();
            if(st.empty()) f[id] = i * a[id];
            else f[id] = a[id] * (i - st.top() - 1);
            while(!st.empty() && a[st.top()] == a[id]){
                f[id] += a[id];
                st.pop();
            }
        }
        for(int i = 0; i < n; i++) cout << f[i] << " ";
        cout << endl;
        cout << *max_element(f, f + n) << endl;
    }
    return 0;
}
