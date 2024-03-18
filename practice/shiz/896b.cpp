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
        ll n,k,a,b;
        cin >> n >> k >> a >> b;
        vector<pair<ll,ll>> cities(n);
        fori(0,n){
            ll x,y;
            cin >> x >> y;
            cities[i] = pair(x, y);
        }
        ll ax = cities[a-1].first; ll ay = cities[a-1].second;
        ll bx = cities[b-1].first; ll by = cities[b-1].second;
        ll minA = -1; ll minB = -1;
        fori(0,k){
            ll kx = cities[i].first; ll ky = cities[i].second;
            ll ax = cities[a-1].first; ll ay = cities[a-1].second;
            ll bx = cities[b-1].first; ll by = cities[b-1].second;
            if(minA == -1) minA = abs(kx-ax) + abs(ky-ay);
            else minA = min(minA, abs(kx-ax) + abs(ky-ay));
            if(minB == -1) minB = abs(kx-bx) + abs(ky-by);
            else minB = min(minB, abs(kx-bx) + abs(ky-by));
        }
        //cout << minA << " " << minB << endl;
        if(minA != -1 && minB != -1) cout << min(minA+minB, abs(ax-bx) + abs(ay-by)) << endl;
        else cout << abs(ax-bx) + abs(ay-by) << endl;
    }
}
