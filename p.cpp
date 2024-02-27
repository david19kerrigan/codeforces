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
        vector<int> arr(n);
        vector<int> pref(n);
        int prefix = 0;
        fori(n){
            cin >> arr[i];
            prefix += arr[i];
            pref[i] = prefix;
        }
        int mult = 1;
        int ans = 0;
        int prevI = -1;
        fori(n){
            int right = pref[n-1] - pref[i];
            if(right > 0){
                int sum; 
                if(prevI == -1) sum = arr[0];
                else sum = pref[i] - pref[prevI]; 
                ans += mult * sum;
                mult++;
                prevI = i;
            }  
        }
        cout << ans << endl;
    }
}
