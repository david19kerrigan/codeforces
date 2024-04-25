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
        vector<pair<ll,ll>> arr(n);
        fori(0,n){
            ll a,b;
            cin >> a >> b;
            arr[i] = pair(a,b);
        }
        std::sort(arr.begin(), arr.end(), [](auto &left, auto &right) {
            if(left.first == right.first) return left.second > right.second;
            else return left.first < right.first;
        });
        ll ans = arr[0].second;
        int limit = arr[0].first-1;
        fori(1,n){
            if(arr[i].first!=arr[i-1].first) limit = arr[i].first;
            if(limit<=0) continue;
            limit--;
            ans += arr[i].second;
        }
        cout << ans << endl;
    }
}
