#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; int x;
        cin >> n >> x;
        vector<int> arr;
        arr.push_back(0);
        fori(0,n){
            int a; cin >> a;
            arr.push_back(a);
        }
        arr.push_back(x);
        int ans = INT_MIN;
        fori(1,n+1){
            ans = max(ans, arr[i]-arr[i-1]);
        }
        ans = max(ans, 2*(arr[n+1]-arr[n]));
        cout << ans << endl;
    }
}
