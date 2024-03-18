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
        int ans;
        if(m == 1) ans = 0;
        else if(n > m-1) ans = m;
        else ans = n+1;
        cout << ans << endl;
        fori(0,min(m-1,n)){
            forj(0,m) cout << (j+i)%m << " ";
            cout << endl;
        }
        if(n > m-1){
            fori(m-1,n){
                forj(0,m) cout << j << " ";
                cout << endl;
            }
        }
    }
}
