#include<bits/stdc++.h>
using namespace std;

int s, d;
void c(){
    if(s > 9 * d){
        cout << -1 << endl;
        return;
    }
    int n = s - 1;
    char z[d];
    memset(z, '0', sizeof(z));
    int i = d - 1;
    while(n >= 9){
        z[i--] = '9';
        n -= 9;
    }
    if(n != 0) z[i] = n + '0';
    int m = z[0] - '0' + 1;
    z[0] = m + '0';
    for(int i = 0; i < d; i++) cout << z[i];
    cout << endl; 
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s >> d;
        c();
    }
    return 0;
}