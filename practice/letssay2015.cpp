#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define fork(s,n) for(int k = s; k < n; ++k)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define back(a,i) a[a.size()-i]

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
		ll x,y,k;
		cin >> x >> y >> k;
		ll high = max(x,y);
		ll offset = 0;
		cout << max((x+k-1)/k*2-1, (y+k-1)/k*2) << endl;
    }
}
