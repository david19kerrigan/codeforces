#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int ans = 0;
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int k = 1; k <= n; ++k){
            if(n%k == 0){
                int g = 0;
                for(int i = 0; i + k < n; ++i){
                    g = gcd(g, abs(a[k+i]-a[i]));
                }
                if(g != 1) ans++;
            }
        }
        cout << ans << endl;
    }
}
