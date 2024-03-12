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
        int a,b,n;
        cin >> a >> b >> n;
        ll t = b-1;
        fori(0,n){
            ll cur; cin >> cur;
            if(cur+1 > a) cur = a-1;
            t += cur;
            //cout << t << endl;
        }
        cout << t+1 << endl;
    }
}
