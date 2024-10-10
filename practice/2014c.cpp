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
		int n; cin >> n;
		vector<int> money(n);
		ll sum = 0;
		fori(0, n){
			cin >> money[i];
			sum += money[i];
		}
		if(n<=2){
			cout << -1  << endl; 
			continue;
		}
		sort(all(money));
		float avg = sum / n;
		ll mid = money[n/2];
		ll ans = mid * 2 * n - sum + 1;
		if(ans<0) cout << 0 << endl;
		else cout << ans << endl;
    }
}
