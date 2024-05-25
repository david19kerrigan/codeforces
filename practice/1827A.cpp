#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define fork(s,n) for(int k = s; k < n; ++k)
#define bend(a) a.begin(), a.end()
#define rbend(a) a.rbegin(), a.rend()
#define aback(a,i) a[a.size()-i]

ll mod = 1e9+7;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> a(n), b(n), c(n);
        fori(0,n) cin >> a[i];
        fori(0,n) cin >> b[i];
        sort(bend(a));
        sort(bend(b));
        ll pos = 0;
        ll ans = 1;
        fori(0,n){
            while(a[pos] <= b[i]){
                pos++;
                if(pos >= n){
                    ans = 0;
                    break;
                }
            }
            c[i] = n-pos;
        }
        reverse(bend(c));
        fori(0,n){
            ans = (ans*(c[i]-i))%mod;
        }
        cout << (ans%mod<0?0:ans%mod) << endl;
    }
}
