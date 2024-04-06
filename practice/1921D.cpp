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
        int n,m;
        cin >> n >> m;
        vector<ll> a(n),b(m);
        fori(0,n) cin >> a[i]; fori(0,m) cin >> b[i];
        sort(bend(a)); sort(rbegin(b),rend(b));
        ll ans = 0;
        fori(0,n){
            if(abs(b[i]-a[i])>abs(aback(b,(n-i))-a[i])) ans += abs(b[i]-a[i]);
            else{
                //cout << b[b.size()-(n-i)] << " ";
                ans += abs(aback(b,(n-i))-a[i]);
            }
        }
        cout << ans << endl;
    }
}
