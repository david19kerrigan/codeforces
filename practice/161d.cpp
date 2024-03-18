#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n+2, 0), d(n+2, INT_MAX);
        for(int i = 1; i <= n; ++i) cin >> a[i];
        for(int i = 1; i <= n; ++i) cin >> d[i];
        set<int> cur, cand;
        for(int i = 0; i < n+2; ++i){
            cur.insert(i);
            cand.insert(i);
        }
        for(int _ = 0; _ < n; ++_){
            set<int> del, nCand;
            for(int i: cand){
                if(i != 0 && i != n+1){
                    set<int>::iterator it = cur.find(i);
                    if(it == cur.end()) continue;
                    int prv = *prev(it);
                    int nxt = *next(it);
                    if(a[prv] + a[nxt] > d[i]){
                        del.insert(i); 
                        nCand.insert(prv);
                        nCand.insert(nxt);
                    } 
                }
            }
            for(int i: del) cur.erase(i);
            cand = nCand;
            cout << del.size() << " ";
        }
        cout << endl;
    }
}
