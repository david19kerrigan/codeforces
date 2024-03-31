#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define bend(a) a.begin(), a.end()
#define aback(a,i) a[a.size()-i]

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> has(n+1), ans(n);
        int m = 0;
        fori(0,n){
            int cur; cin >> cur;
            if(cur>0) ans[i] = m; 
            else ans[i] = m-cur;
            has[ans[i]]=true;
            while(has[m]) ++m;
        }
        for(auto i: ans) cout << i << " ";
        cout << endl;
    }
}
