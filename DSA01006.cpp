#include<bits/stdc++.h>
using namespace std;
int n, x[100];
bool ok = true;

void Init(){
    for(int i = 1; i <= n; i++){
        x[i] = n - i + 1;
    }
}
void Results(){
    for(int i = 1; i <= n; i++){
        cout << x[i];
    }
    cout << " ";
}
void Next(){
    int i = n - 1;
    while(i > 0 && x[i] < x[i + 1]){
        i--;
    }
    if(i > 0){
        int j = n;
        while(x[j] > x[i]){
            j--;
        }
        swap(x[i], x[j]);
        int l = i + 1, r = n;
        while(l <= r){
            swap(x[l], x[r]);
            l++, r--;
        }
    }
    else ok = false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        Init();
        ok = true;
        while(ok){
            Results();
            Next();
        }
        cout << endl;
    }
    return 0;
}