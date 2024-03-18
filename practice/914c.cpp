#include <bits/stdc++.h>
using namespace std;

#define int long long
 
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        if (k >= 3) {
            cout << 0 << endl;
            continue;
        }
        sort(begin(a), end(a));
        int d = a[0];
        for (int i = 0; i < n - 1; i++) d = min(d, a[i + 1] - a[i]);
        if (k == 1) {
            cout << d << endl;
            continue;
        }
        for (int i = 0; i < n; i++) for (int j = 0; j < i; j++) {
            int v = a[i] - a[j];
            int lower = lower_bound(begin(a), end(a), v) - begin(a);
            int upper = upper_bound(begin(a), end(a), v) - begin(a) - 1;
            if(lower >=0 && lower < n) d = min(d, a[lower] - v);
            if(upper >= 0 && upper < n) d = min(d, v - a[upper]);
        }
        cout << d << endl;
    }
}
