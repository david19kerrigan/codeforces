#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define fork(s,n) for(int k = s; k < n; ++k)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define back(a,i) a[a.size()-i]

ll mod = 1e9+7;

ll modpow(ll num, ll pow){
    if(num == 1) return num;
    return modpow(num*pow%mod, pow-1);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll sum = 0;
        ll sumsq = 0;
        fori(0,n){
            ll cur; cin >> cur;
            sum += cur; sum %= mod;
            sumsq += pow(cur,2); sumsq %= mod;
        }
        sum = sum*sum/2%mod;
        sum = (sum-sumsq)%mod;
        cout << (sum/2%mod)/((n*(n-1)/2)%mod) << endl;
    }
}
