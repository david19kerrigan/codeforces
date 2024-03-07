#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define bend(a) a.begin(), a.end()
#define last(a) a[a.size()-1]

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int x,y,k;
        // chest, key, carry
        cin >> x >> y >> k;
        int ans;
        if(y < x) ans = x;
        else{
            ans = y;
            if(k < y-x) ans += (y-x-k);
        }
        cout << ans << endl;
    }
}
