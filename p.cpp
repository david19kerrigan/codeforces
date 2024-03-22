#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define bend(a) a.begin(), a.end()
#define aback(a,i) a[a.size()-i]

ll mod = pow(10,9)+7;

ll myPow(ll a, ll b){
    if(a == 0) return b;
    b = b%mod;
    return myPow(a-1, b * 2);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<ll> arr(n);
        ll sum = 0;
        fori(0,n){ 
            cin >> arr[i];
            sum += arr[i];
            sum = sum%mod;
        }
        ll max_so_far = 0; ll max_ending_here = 0;
        fori(0,n){
            max_ending_here += arr[i];
            if(max_ending_here < 0) max_ending_here = 0;
            max_so_far = max(max_so_far, max_ending_here);
        }
        ll rem = sum-max_so_far;
        ll ans = ((ll)(max_so_far*myPow(k,1)%mod+rem%mod));
        //cout << max_so_far << " " << rem << " " << ans << endl;
        ll real = ans;
        if(ans < 0) real = mod - abs(real);
        cout << real << endl;
    }
}
