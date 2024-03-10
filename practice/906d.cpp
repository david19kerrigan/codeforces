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
        int n, c;
        cin >> n >> c;
        vector<ll> arr(n+1);
        fori(1,n+1) cin >> arr[i];
        vector<pair<ll,int>> rank(n+1);
        fori(1,n+1) rank[i] = pair(1ll*c*i-arr[i], i);
        sort(next(rank.begin()), rank.end());
        ll total = arr[1];
        string ans = "YES";
        fori(1,n+1){
            if(rank[i].second == 1) continue;
            total += arr[rank[i].second]; 
            if(1ll*c*rank[i].second > total){ 
                ans = "NO";
                break;
            }
        }
        cout << ans << endl;
    }
}
