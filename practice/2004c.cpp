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
		ll n,k; 
		cin >> n >> k;
		vector<ll> arr(n);
		fori(0,n) cin >> arr[i];
		sort(rall(arr));
		ll total = 0;
		fori(0,n){
			if(i%2==1){
				total += (arr[i-1] - arr[i]);
				if(k>0){
					total -= (min(arr[i-1], arr[i]+k) - arr[i]);
					k -= (arr[i-1]-arr[i]);
				}
			}
		}
		if(n%2==1) total += back(arr,1);
		cout << total << endl;
    }
}
