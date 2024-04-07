#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define fork(s,n) for(int k = s; k < n; ++k)
#define bend(a) a.begin(), a.end()
#define rbend(a) a.rbegin(), a.rend()
#define aback(a,i) a[a.size()-i]

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        fori(0,n) cin >> a[i];
        ll ans = -1;
        fori(1,(n+1)){
            if(n%i!=0) continue;
            ll mx = -1e18, mn = 1e18;
            for(int j = 0; j < n; j += i){
                ll cur = 0;
                for(int k = j; k < j + i; ++k){ 
                    cur += a[k];
                }
                mx = max(cur,mx); mn = min(cur,mn);
            }
            ans = max(ans, mx - mn);
        }
        cout << ans << endl;
    }
}
