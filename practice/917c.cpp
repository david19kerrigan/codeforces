#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,k,d;
        cin >> n >> k >>d;
        int a[n], v[k];
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < k; ++i) cin >> v[i];
        int ans = INT_MIN;
        for(int i = 0; i <= 2*n && i < d; ++i){
            int cur = 0;
            for(int j = 0; j < n; ++j){
                cur += a[j] == j+1;
            }
            cur += (d - i - 1) / 2;
            ans = max(cur, ans);
            for(int j = 0; j < v[i%k]; ++j){
                a[j]++;
            }
        }
        cout << ans << endl;
    }
}
