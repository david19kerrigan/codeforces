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
        int n; ll x;
        cin >> n >> x;
        deque<ll> a(n),b(n),c(n);
        fori(0,n) cin >> a[i];
        fori(0,n) cin >> b[i];
        fori(0,n) cin >> c[i];
        ll cur = 0;
        while(cur!=x){
            if(!a.empty()){
                if((~x&a[0])==0){
                    cur |= a[0];
                    a.pop_front();
                    continue;
                } else a.clear();
            }
            if(!b.empty()){
                if((~x&b[0])==0){
                    cur |= b[0];
                    b.pop_front();
                    continue;
                } else b.clear();
            }
            if(!c.empty()){
                if((~x&c[0])==0){
                    cur |= c[0];
                    c.pop_front();
                    continue;
                } else c.clear();
            }
            break;
        }
        cout << (cur==x?"YES":"NO") << endl;
    }
}
