#include<bits/stdc++.h>
using namespace std;

int n, x[100];
bool ok = true;

void result(){
    for(int i = 0; i < n; i++){
        cout << x[i] << " ";
    }
    cout << endl;
}
void Next(){
    int i = n - 2;
    while(i >= 0 && x[i] > x[i + 1]){
        i--;
    }
    if(i >= 0){
        int k = n - 1;
        while(x[k] < x[i]){
            k--;
        }
        swap(x[i], x[k]);
        int l = i + 1, r = n - 1;
        while(l <= r){
            swap(x[l], x[r]);
            l++, r--;
        }
    }
    else ok = false;
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    sort(x, x + n);
    while(ok){
        result();
        Next();
    }
    return 0;
}