#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define fork(s,n) for(int k = s; k < n; ++k)
#define bend(a) a.begin(), a.end()
#define rbend(a) a.rbegin(), a.rend()
#define aback(a,i) a[a.size()-i]

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	vector<vector<int>> ans(n, vector<int>(n));
        int start = 1;
        fori(0,n) {
            forj(0,n){
                ans[i][j] = start%(int)pow(n,2);
                cout << ans[i][j] << ' ';
                start+=2;
            }
            cout << endl;
        }
    }
}
