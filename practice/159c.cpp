#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ci cin >>
#define co cout <<
#define fori for(int i = 0; i < n; ++i)
#define forl for(ll i = 0; i < n; ++i)

//ll arr[300010];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        bool gcds[n];
        vector<ll> arr(n);
        memset(gcds, false, n);
        ll myMin = LONG_MAX;
        ll myMax = LONG_MIN;
        int g = 0;
        forl{
            cin >> arr[i];
            myMin = min(myMin, arr[i]);
            myMax = max(myMax, arr[i]);
            if(i > 0) g = gcd(arr[i] - arr[i-1], g);
        }
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        ll ans = 0;
        forl{
            ll temp = (myMax - arr[i]) / g;
            ans += temp;
            if(temp < n){
                gcds[temp] = true;
            }
        }
        bool found = false;
        forl{
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
