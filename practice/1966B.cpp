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
        int n,m; cin >> n >> m;
        set<int> top, bot, left, right;
        vector<vector<bool>> arr(n, vector<bool>(m, 0));
        fori(0,n){
            string s; cin >> s;
            forj(0,m){
                arr[i][j] = s[j]=='B'?1:0;
                if(i==0) top.insert(arr[i][j]);
                if(i==n-1) bot.insert(arr[i][j]);
                if(j==0) left.insert(arr[i][j]);
                if(j==m-1) right.insert(arr[i][j]);
            }
        }
        if((top.count(0) && left.count(0) && right.count(0) && bot.count(0)) || (top.count(1) && left.count(1) && right.count(1) && bot.count(1))) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
