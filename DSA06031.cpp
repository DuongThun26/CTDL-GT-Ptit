#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        deque<int> dq;
        vector<int> result;

        for(int i = 0; i < n; i++) {
            if(!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }
            while(!dq.empty() && a[dq.back()] <= a[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
            if(i >= k - 1) {
                result.push_back(a[dq.front()]);
            }
        }

        for(int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
