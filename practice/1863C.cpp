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
        ll n,k;
        cin >> n >> k;
        vector<ll> a(n+1);
        vector<bool> has(n+1);
        fori(0,n){
            cin >> a[i];
            has[a[i]] = true;
        }
        ll mex;
        fori(0,n+1){
            if(!has[i]) mex = i;
        }
        a[n] = mex;
        k = (n+1)-k%(n+1);
        int start = k;
        fori(0,n){
            cout << a[(start+i)%(n+1)] << " ";
        }
        cout << endl;
    }
}
