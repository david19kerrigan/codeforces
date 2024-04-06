#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define bend(a) a.begin(), a.end()
#define rbend(a) a.rbegin(), a.rend()
#define aback(a,i) a[a.size()-i]

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n,k;
        cin >> n >>k;
        vector<int> a(n),b(n);
        fori(0,n) cin >> a[i]; fori(0,n) cin >> b[i];
        int ans = 0, sum = 0, maxB = -1;
        fori(0,min(n,k)){
            if(i < n) sum += a[i];
            maxB = max(b[i], maxB);
            ans = max(ans, sum + maxB*(k-i-1));
        }
        cout << ans << endl;
    }
}
