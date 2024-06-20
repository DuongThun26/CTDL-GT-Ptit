#include<bits/stdc++.h>
using namespace std;
vector <vector <int>> v;

void BubbleSort(int a[], int n){
    vector <int> v2;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0 ; j < n - i - 1; j ++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
            }
        }
        vector <int> v1;
        for(int c = 0; c < n; c++){
            v1.push_back(a[c]);
        }
        if(v1 != v2){
            v.push_back(v1);
            v2 = v1;
        }
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
        BubbleSort(a, n);
        for(vector <vector<int>> :: reverse_iterator it = v.rbegin(); it != v.rend(); it++){
            cout << "Buoc " << v.rend() - it << ": ";
            for(auto x : *it){
                cout << x << " ";
            }
            cout << endl;
        }
        v.clear();
    }
    return 0;
}