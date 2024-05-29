#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        int n1 = s1.size(), n2 = s2.size();
        char a[s1.size() + 1], b[s2.size() + 1];
        for(int i = 0; i < s1.size(); i++) a[i + 1] = s1[i];
        for(int i = 0; i < s2.size(); i++) b[i + 1] = s2[i];
        int dp[n1 + 1][n2 + 1];
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i <= n1; i++){
            for(int j = 1; j <= n2; j++){
                if(a[i] != b[j]) dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                else dp[i][j] = dp[i - 1][j - 1] + 1;
            }
        }
        cout << dp[n1][n2] << endl;
    }
    return 0;
}