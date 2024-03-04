#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define bend(a) a.begin(), a.end()

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    vector<int> arr(n);
    vector<int> suf(n);
    vector<int> pref(n);
    fori(0,n){
        int cur; cin >> cur;
        suf[i] = cur + i; 
        pref[i] = cur + (n-i-1);
        arr[i] = cur;
    }
    fori(1,n){
        pref[i] = max(pref[i], pref[i-1]);
    }
    for(int i = n-2; i >= 0; --i){
        suf[i] = max(suf[i+1], suf[i]);
    }
    int ans = INT_MAX;
    fori(0,n){
        int cur = arr[i];
        if(i > 0) cur = max(cur, pref[i-1]);
        if(i < n-1) cur = max(cur, suf[i+1]);
        ans = min(ans, cur);
    }
    cout << ans << endl;
}
