#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define bend(a) arr.begin(), arr.end()
#define last(a) a[a.size()-1]

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> use {2,3};
        set<int> used;
        map<int, int> count;
        fori(0,n){
            cin >> a[i];
            b[i] = 1;
            count[a[i]]++;
        }
        fori(0,n){
            int cur = a[i];
            if(count[cur] > 1 && !used.count(cur) && !use.empty()){
                b[i] = last(use);
                use.pop_back();
                used.insert(cur);
            }
        }
        if(use.empty()){ 
            fori(0,n) cout << b[i] << " ";
            cout << endl;
        }
        else cout << -1 << endl;
    }
}
