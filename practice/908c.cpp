#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define bend(a) arr.begin(), arr.end()
#define last(a) a[a.size()-1]

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; int k;
        cin >> n >> k;
        vector<int> b(n);
        vector<int> vis(n, false);
        fori(0,n) cin >> b[i];
        int pos = n-1;
        bool ans = true;
        fori(0,k){
            if(vis[pos]) break;
            vis[pos] = true;
            int num = b[pos]; 
            pos -= num;
            if(pos < 0) pos = n+pos;
            if(num < 1 || num > n){
                ans = false;
                break;
            }
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
