#include<bits/stdc++.h>
using namespace std;

void InterchangeSort(int a[], int n){
    int dem = 1;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]) swap(a[i], a[j]);
        }
        cout << "Buoc " << dem << ": ";
        for(int x = 0; x < n; x++){
            cout << a[x] << " ";
        }
        cout << endl;
        dem++;
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    InterchangeSort(a, n);
    return 0;
}