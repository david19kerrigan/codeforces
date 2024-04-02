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
        int a,b,l;
        cin >> a >> b >> l;
        set<int> ans;
        fori(0,35){
            int val = l;
            bool fail = false;
            forj(0,i){
                if(val%a){
                    fail = true;
                    break;
                }
                val /= a;
            }
            if(fail) break;
            while(true){
                ans.insert(val);
                if(val%b) break;
                val /= b;
            }
        }
        cout << ans.size() << endl;
    }
}
