#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int &i : a) cin >> i;
    int dem = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(a[j + 1] < a[j]){
                int tmp = a[j]; a[j] = a[j + 1]; a[j + 1] = tmp;
            }
        }
        cout << "Buoc " << dem << ": ";
        for(int x : a) cout << x << " ";
        cout << endl;
        dem++;
        if(min_element(a, a + n) == a) break;
    }
    return 0;
}