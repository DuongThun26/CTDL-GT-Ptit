#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        int k;
        cin >> k >> s;
        for(int i = 0; i < s.size() && k > 0; i++){
            int vt = i;
            int max = s[i];
            for(int j = i + 1; j < s.size(); j++){
                if(s[j] >= max){
                    vt = j;
                    max = s[vt];
                }
            }
            if(s[i] != s[vt]){
                swap(s[i], s[vt]);
                k--;
            }
        }
        cout << s << endl;
    }
    return 0;
}