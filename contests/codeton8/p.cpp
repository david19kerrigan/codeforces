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
        int n,k;
        cin >> n >> k;
        if(k==1){
            cout << 1 << " ";
            fori(0,n-1) cout << 2 << " ";
        } else if(k == n){
            fori(0,n) cout << 1 << " ";
        } else cout << -1;
        cout << endl;
    }
}
