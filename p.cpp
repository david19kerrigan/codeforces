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
        ll n; cin >> n;
        map<ll, ll> factors;
        while(n>1){
            for(ll i=2;i<=n;++i){
                if(n%i==0){
                    ++factors[i];
                    n/=i;
                    break;
                }
            }
        }
        ll ans = 0;
        while(!factors.empty()){
            ll cur = 1;
            auto it = factors.begin();
            while(it!=factors.end()){
                cur*=it->first;
                factors[it->first]=(factors[it->first]-1);
                it=next(it);
                if(factors[prev(it)->first]<=0) factors.erase(prev(it));
            }
            ans+=cur;
        }
        cout << ans << endl;
    }
}
