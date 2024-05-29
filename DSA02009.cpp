#include<bits/stdc++.h>
using namespace std;

int n, k, sum, a[25], used[25];
bool ok = true;
void Try(int s, int dem){
    for(int i = 0; i < n; i++){
        if(!used[i]){
            s += a[i];
            used[i] = 1;
            if(s == sum){
                Try(0, dem + 1);
                return;
            }
            else if(s < sum){
                Try(s, dem);
                return;
            }
        }
        s -= a[i];
        used[i] = 0;
    }
    if(dem == k) ok = false;
    else ok = true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        sum = 0;
        ok = true;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum % k != 0) cout << 0;
        else{
            sum /= k;
            Try(0, 0);
            if(!ok) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
    return 0;
}