#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define bend(a) a.begin(), a.end()
#define last(a) a[a.size()-1]

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m), c;
        fori(0,n) cin >> a[i];
        fori(0,m) cin >> b[i];
        sort(bend(b));
        reverse(bend(b));
        int i = 0; int j = 0;
        while(i < m && j < n){
            bool bo = false;
            while(b[i] >= a[j] && i < m){
                c.push_back(b[i]);
                i++;
                bo = true;
            }
            while(b[i] < a[j] && j < n){
                c.push_back(a[j]);
                j++;
                bo = true;
            }
            if(!bo) break;
        }
        while(j < n){
            c.push_back(a[j]);
            j++;
        }
        while(i < m){
            c.push_back(b[i]);
            i++;
        }
        fori(0,c.size()) cout << c[i] << " ";
        cout << endl;
    }
}
