#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define fork(s,n) for(int k = s; k < n; ++k)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define back(a,i) a[a.size()-i]
#define print_arr(arr) fori(0, arr.size()) { cout << arr[i] << " "; } cout << endl;
#define print_map(map) for(auto cur: map) cout << cur.first << ": " << cur.second << endl;
#define print_set(set) for(auto cur: set) { cout << cur << " "; } cout << endl;

int h,w,k;
vector<vector<char>> graph(10, vector<char>(10));
set<pair<int, int>> vis;
set<pair<int, int>> banned;
int ans = 0;

void recur(int x, int y, int len){
    vector<pair<int, int>> dirs = {{0,1}, {0,-1}, {1,0}, {-1,0}};
    for(auto cd: dirs){
        int nx = x + cd.first;
        int ny = y + cd.second;
        bool f = false;
        if(0 <= nx && nx < h && 0 <= ny && ny < w && vis.count({nx, ny}) == 0 && graph[nx][ny] == '.' && banned.count({nx, ny}) == 0){
            f = true;
            // cout << nx << " " << ny << endl;
            vis.insert({nx, ny});
            recur(nx, ny, len+1);
            vis.erase({nx, ny});
            banned.insert({nx, ny});
        }
        if(!f){
            ans += (len-k+1 > 0 ? len-k+1 : 0);
            //cout << len << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> h >> w >> k;
    fori(0, h){
        forj(0, w){
            cin >> graph[i][j];
        }
    }
    vis.insert({0, 0});
    recur(0, 0, 0);
    cout << ans << endl;
}
