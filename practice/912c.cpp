#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(n) for(int i = 0; i < n; ++i)
#define forj(n) for(int j = 0; j < n; ++j)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> arr(n);
        vector<ll> pref(n);
        ll prefix = 0;
        fori(n){
            cin >> arr[i];
            prefix += arr[i];
            pref[i] = prefix;
        }
        ll mult = 1;
        ll ans = 0;
        int prevI = -1;
        fori(n){
            ll right = pref[n-1] - pref[i];
            if(right > 0){
                ll sum; 
                if(prevI == -1) sum = pref[i];
                else sum = pref[i] - pref[prevI]; 
                ans += mult * sum;
                mult++;
                prevI = i;
            }  
        }
        ll sum; 
        if(prevI == -1) sum = pref[n-1];
        else sum = pref[n-1] - pref[prevI]; 
        ans += mult * sum;
        cout << ans << endl;
    }
}
