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
        int n; cin >> n;
        vector<int> a(n);
        fori(0,n) cin >> a[i];
        int ans = 0;
        fori(0,n){
            //int cur = 0;
            //while(cur <= ans) cur += a[i];
            //ans = cur;
            ans = (ans+a[i])/a[i] * a[i];
        }
        cout << ans << endl;
    }
}
