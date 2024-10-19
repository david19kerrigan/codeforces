#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define fork(s,n) for(int k = s; k < n; ++k)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define back(a,i) a[a.size()-i]

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll ans = 0;
        vector<vector<bool>> graph(n+1,vector<bool>(2,false));
        vector<pair<int,int>> one_points;
        vector<pair<int,int>> zero_points;
        int one_count = 0; int zero_count = 0;
        fori(0,n){
            int x,y;
            cin >> x >> y;
            graph[x][y] = true;
            if(y == 1) {
                one_count++;
                one_points.push_back(pair(x,y));
            }
            else {
                zero_count++;
                zero_points.push_back(pair(x,y));
            }
        }
        for(auto pair: one_points){
            if(graph[pair.first][0]){
                ans += ((one_count-1)+(zero_count-1));
            }
            if((pair.first+2<n+1 && graph[pair.first+2][1]) && graph[pair.first+1][0]){
                ans += 1;
            }
        }
        for(auto pair: zero_points){
            if((pair.first+2<n+1 && graph[pair.first+2][0]) && graph[pair.first+1][1]){
                ans += 1;
            }
        }
        cout << ans << endl;
    }
}
