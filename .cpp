#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define bend(a) arr.begin(), arr.end()

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        char ans;
        fori(0,n){
            char cur; cin >> cur;
            if(i == n-1) ans = cur;
        }
        cout << ans << endl;
    }
}
