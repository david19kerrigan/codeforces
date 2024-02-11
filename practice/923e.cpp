#include <bits/stdc++.h>
using namespace std;

struct dsu{
    vector<int> parent, rank;
    dsu(int n){
        parent.resize(n);
        iota(parent.begin(), parent.end(), 0);
        rank.assign(n, 0);
    }
    int get(int n){
        if(parent[n] != n) return get(parent[n]);
        return n;
    }
    bool add(int a, int b){
        a = get(a); b = get(b);
        if(a == b) return 0;
        if(rank[a] < rank[b]){
            swap(a,b);
        }  
        parent[b] = a;
        if(rank[a] == rank[b]){
            rank[a]++;
        } 
        return 1;
    }
};

vector<int> path, ans;
bool found;

void dfs(int cur, int end, vector<vector<int>> &graph, int prev){
    path.push_back(cur);
    if(cur == end){
        ans = path;
        found = 1;
        return;
    }
    for(int nbor: graph[cur]){
        if(nbor != prev) dfs(nbor, end, graph, cur); 
        if(found) return;
    }
    path.pop_back();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<pair<int, pair<int, int>>> edges;
        vector<vector<int>> graph(n);
        dsu dsu(n);
        int minW;
        for(int i = 0; i < m; ++i){
            int a, b, weight;
            cin >> a >> b >> weight;
            a--; b--;
            edges.push_back({weight, {a,b}});
        }
        sort(edges.rbegin(), edges.rend());
        pair<int, int> edge;
        for(pair<int, pair<int, int>> e: edges){ // high weight -> low weight
            if(!dsu.add(e.second.first, e.second.second)){ // if edge forms a cycle
                edge.first = e.second.first; edge.second = e.second.second; minW = e.first;
            } else{ // if edge does not form a cycle
                graph[e.second.first].push_back(e.second.second);
                graph[e.second.second].push_back(e.second.first);
            }
        }
        path.clear();
        found = 0;
        dfs(edge.first, edge.second, graph, -1);
        cout << minW << " " << ans.size() << "\n";
        for(int e: ans) cout << e+1 << " ";
        cout << "\n";
    }
}
