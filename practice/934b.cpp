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
        int n,k;
        cin >> n >> k;
        set<int> l,r;
        vector<int> shared, la, ra;
        fori(0,n){
            int cur; cin >> cur;
            l.insert(cur);
        }
        fori(0,n){
            int cur; cin >> cur;
            if(l.count(cur)){
                shared.push_back(cur);
                l.erase(cur);
            } else r.insert(cur);
        }
        fori(0,k){
            if(shared.size() >= 2){
                forj(0,2) {
                    int b = shared.back();
                    la.push_back(b); ra.push_back(b);
                    shared.pop_back();
                }
            } else{
                int topl = *l.begin(); int topr = *r.begin();
                la.push_back(topl); la.push_back(topl);
                ra.push_back(topr); ra.push_back(topr);
                l.erase(topl); r.erase(topr);
            }
        }
        fori(0,la.size()) cout << la[i] << " ";
        cout << endl;
        fori(0,ra.size()) cout << ra[i] << " ";
        cout << endl;
    }
}
