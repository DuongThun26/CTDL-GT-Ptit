#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int &i : a) cin >> i;
    for(int i = 0; i < n - 1; i++){
        int min_pos = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min_pos]){
                min_pos = j;
            }
        }
        int tmp = a[i];
        a[i] = a[min_pos];
        a[min_pos] = tmp;
        cout << "Buoc " << i + 1 << ": ";
        for(int i : a) cout << i << " ";
        cout << endl;
    }
    return 0;
}