#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> arr(n);
        fori(0,n) cin >> arr[i];
        ll bleh = *min_element(arr.begin(), arr.end());
        if(n == 1){
            cout << 0 << endl;
            continue;
        }
        ll maxDiff = *max_element(arr.begin(), arr.end()) - *min_element(arr.begin(), arr.end());
        if(maxDiff == 0){
            cout << 0 << endl;
            continue;
        }
        //fori(1,n){
        //    maxDiff = max(abs(arr[i] - arr[i-1]), maxDiff);           
        //}
        //cout << maxDiff << " ";
        double ans = log2((double)maxDiff);
        if(ceil(ans) == ans) ans++;
        cout << ceil(ans) << endl;
        if(ans <= n){
            fori(0,ans) cout << bleh <<  " ";
            cout << endl;
        }
    }
}
