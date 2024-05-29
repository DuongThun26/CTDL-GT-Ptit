#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        cout << s1 << " ";
        int i = s2.size() - 2;
        while(i >= 0 && s2[i] >= s2[i + 1]){
            i--;
        }
        if(i >= 0){
            int k = s2.size() - 1;
            while(s2[k] <= s2[i]){
                k--;
            }
            swap(s2[k], s2[i]);
            int l = i + 1, r = s2.size() - 1;
            while(l <= r){
                swap(s2[l], s2[r]);
                l++, r--;
            }
            cout << s2;
        }
        else cout << "BIGGEST";
        cout << endl;
    }
    return 0;
}