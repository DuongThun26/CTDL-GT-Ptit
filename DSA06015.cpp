#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r){
    int n1 = m - l + 1, n2 = r - m;
    int x[n1], y[n2];
    for(int i = l; i <= m; i ++){
        x[i - l] = a[i];
    }
    for(int i = m + 1; i <= r; i++){
        y[i - m - 1] = a[i];
    }
    int id = l;
    int i = 0, j = 0;
    while(i < n1 && j < n2){
        if(x[i] <= y[j]) a[id++] = x[i++];
        else a[id++] = y[j++];
    }
    while(i < n1) a[id++] = x[i++];
    while(j < n2) a[id++] = y[j++];
}

void mergeSort(int a[], int l, int r){
    if(l < r){
        int m = (l + r) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &i : a) cin >> i;
        mergeSort(a, 0, n - 1);
        for(int i : a) cout << i << " ";
        cout << endl;
    }
    return 0;
}