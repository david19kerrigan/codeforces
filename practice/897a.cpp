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
        ll n; cin >> n;
        vector<pair<ll,ll>> a(n);
        fori(0,n){
            ll cur; cin >> cur;
            a[i] = pair(cur*-1, i);
        }
        sort(bend(a));
        vector<ll> ans(n);
        fori(0,n) ans[a[i].second] = i+1;
        fori(0,n) cout << ans[i] << " ";
        cout << endl;
    }
}
