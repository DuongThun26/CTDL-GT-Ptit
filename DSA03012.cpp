#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int dem[26];
        memset(dem, 0, sizeof(dem));
        for(int i = 0; i < s.size(); i++){
            dem[s[i] - 'a']++;
        }
        int max = 0;
        for(int i = 0; i < 26; i++){
            if(dem[i] > max){
                max = dem[i];
            }
        }
        if(max <= s.size() / 2 && s.size() % 2 == 0) cout << 1 << endl;
        else if(s.size() % 2 == 1 && max <= s.size() / 2 + 1) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}