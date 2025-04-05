#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define fork(s,n) for(int k = s; k < n; ++k)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define back(a,i) a[a.size()-i]
#define print_arr(arr) fori(0, arr.size()) { cout << arr[i] << " "; } cout << endl;
#define print_map(map) for(auto cur: map) cout << cur.first << ": " << cur.second << endl;
#define print_set(set) for(auto cur: set) { cout << cur << " "; } cout << endl;

ll exp(int a, int b) { return pow(2,a) * pow(b,2); }

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    ll n; cin >> n;
    ll a = 1;
    ll b = 1;
    ll ans = 0;
    ll prev = 0;
    while(exp(a,1) <= n){
        b = floor(sqrt(n / pow(2,a)));
        ans += abs(b-prev);
        prev = b/2;
        a++;
    }
    cout << ans << endl;
}
