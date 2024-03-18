#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define bend(a) a.begin(), a.end()
#define aback(a,i) a[a.size()-i]

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        vector<ll> a(n), b(m);
        fori(0,n) cin >> a[i];
        fori(0,m) cin >> b[i];
        ll minA = *min_element(bend(a));
        ll maxA = *max_element(bend(a));
        ll maxB = *max_element(bend(b));
        ll minB = *min_element(bend(b));
        ll sum = 0; fori(0, n) sum += a[i];
        ll ans;
        if(k%2 == 1) {
            if(maxB > minA) ans = sum - minA + maxB;
            else ans = sum;
        }
        if(k%2 == 0) {
            if(maxB > minA) ans = sum - minA + maxB - max(maxB, maxA) + min(minA, minB);
            else ans = sum - maxA + minB;
        }
        cout << ans << endl;
    }
}
