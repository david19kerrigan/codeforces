#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        ll arr[n];
        bool gcds[n];
        memset(gcds, false, n);
        for(int i = 0; i < n; ++i) gcds[i] = false;
        ll myMin = LONG_MAX;
        ll myMax = LONG_MIN;
        int g = 0;
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
            myMin = min(myMin, arr[i]);
            myMax = max(myMax, arr[i]);
            if(i > 0) g = gcd(arr[i] - arr[i-1], g);
        }
        ll ans = 0;
        for(int i = 0; i < n; ++i){
            ll temp = (myMax - arr[i]) / g;
            ans += temp;
            if(temp < n){
                gcds[temp] = true;
            }
        }
        bool found = false;
        for(int i = 0; i < n; ++i){
            if(!gcds[i]){
                ans += i;
                found = true;
                break;
            }
        }
        if(!found){
            ans += n;
        }
        cout << ans << endl;
    }
}
