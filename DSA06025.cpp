#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int &i : a) cin >> i;
    int dem = 0;
    for(int i = 0; i < n; i++){
        int vtc = i - 1, gtc = a[i];
        while(gtc < a[vtc] && vtc >= 0){
            a[vtc + 1] = a[vtc];
            vtc--;
        }
        a[vtc + 1] = gtc;
        cout << "Buoc " << dem << ": ";
        for(int j = 0; j <= dem; j++){
            cout << a[j] << " ";
        }
        cout << endl;
        dem++;
    }
    return 0;
}
