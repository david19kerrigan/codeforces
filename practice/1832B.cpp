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
        int n,k; cin >> n >> k;
        vector<ll> a(n);
        ll sum = 0;
        fori(0,n){
            cin >> a[i];
            sum += a[i];
        }
        sort(bend(a));
        fori(0,k){
            sum -= a[n-i-1];
        }
        ll ans = sum;
        fori(0,k){
            sum -= (a[i*2]+a[i*2+1]);
            //cout << n-(k-i) << ' ';
            sum += a[n-(k-i)];
            ans = max(sum, ans);
        }
        cout << ans << endl;
    }
}
