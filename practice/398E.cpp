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

map<int, vector<int>> graph;
set<int> red, blue;
set<pair<int, int>> edges;
set<pair<int, int>> possible;
set<int> vis;

void recur(int cur, int level){
    if(level&1) red.insert(cur);
    else blue.insert(cur);
    for(auto next: graph[cur]){
        if(!vis.count(next)){
            vis.insert(next);
            recur(next, level + 1);
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    fori(1, n){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        edges.insert(pair(min(a, b), max(a, b)));
    }
    recur(1, 0);
    for(auto node1: red){
        for(auto node2: blue){
            pair<int, int> cand = pair(min(node1, node2), max(node1, node2));
            if(!edges.count(cand)){
                possible.insert(cand);
            }
        }
    }
    int num = red.size() * blue.size() - (n-1);
    if(num&1){
        cout << "First" << endl;
        pair<int, int> cand = *possible.begin();
        cout << cand.first << " " << cand.second << endl;
        possible.erase(cand);
    }
    else cout << "Second" << endl;
    int a, b;
    while(cin >> a >> b){
        if(a == -1 && b == -1) break;
        pair<int, int> cand = pair(min(a,b), max(a,b));
        possible.erase(cand);

        cand = *possible.begin();
        cout << cand.first << " " << cand.second << endl;
        possible.erase(cand);
    }
    // for(auto cur: possible) cout << cur.first << " " << cur.second << endl;
}
