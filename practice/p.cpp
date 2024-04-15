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
        int n,x;
        cin >> n >> x;
        vector<ll> a(n);
        fori(0,n) cin >> a[i];
        ll lo = 0, hi = 2'000'000'007;
        while(lo<hi){
            ll mid = lo+(hi-lo+1)/2;
            //cout << mid;
            ll total = 0;
            fori(0,n){
                total += max(mid-a[i],0ll);
            }
            if(total<=x) lo = mid;
            else hi = mid-1;
        }
        cout << lo << endl;
    }
}
