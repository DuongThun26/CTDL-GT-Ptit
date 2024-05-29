#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int max1 = a[n - 1], max2 = a[n - 2], max3 = a[n - 3], min1 = a[0], min2 = a[1];
    cout << max(max(max1 * max2, max1 * max2 * max3), max1 * min1 * min2);
    return 0;
}