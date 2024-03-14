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
        ll n, m;
        cin >> n >> m;
        n = n%m;
        ll a = n / gcd(n,m);
        ll b = m / gcd(n,m);
        if(__builtin_popcount(b) > 1) cout << -1 << endl;
        else cout << __builtin_popcount(a) * m - n << endl;
    }
}
