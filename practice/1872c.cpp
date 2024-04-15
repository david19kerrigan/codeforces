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
        ll l,r;
        cin >> l >> r;
        ll a,b;
        bool can = false;
        for(int i=2; i*i<=r; ++i){
            ll j = r/i;
            ll cand = j*i;
            if(cand>=l && cand<=r){
                cout << j << " " << cand-j << endl;
                can = true;
                break;
            }
        }
        if(!can) cout << -1 << endl;
    }
}
