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
        ll n,k,g; cin >> n >> k >> g;
        ll save = (g-1)/2*(n-1);
        ll rem = k*g-save;
        if(save > k*g) cout << k*g;
        else{
            ll rem = (k*g-save)%g;
            if(rem <= (g-1)/2) cout << save+rem;
            else cout << save-(g-rem);
        }
        cout << endl;
    }
}
