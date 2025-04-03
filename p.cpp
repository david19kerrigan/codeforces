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
int ans = 0;

void recur(int x, int y, int len){
    if(len == k+1){
        ans++;
        return;
    }
    vis.insert({x, y});
    vector<pair<int, int>> dirs = {{0,1}, {0,-1}, {1,0}, {-1,0}};
    for(auto cd: dirs){
        int nx = x + cd.first;
        int ny = y + cd.second;
        pair<int, int> cand = {nx, ny};
        if(0 <= nx && nx < h && 0 <= ny && ny < w && vis.count(cand) == 0 && graph[nx][ny] == '.'){
            recur(nx, ny, len+1);
        }
    }
    vis.erase({x, y});
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> h >> w >> k;
    fori(0, h){
        forj(0, w){
            cin >> graph[i][j];
        }
    }
    fori(0, h){
        forj(0, w){
            if(graph[i][j] == '.') recur(i, j, 1);
        }
    }
    cout << ans << endl;
}
