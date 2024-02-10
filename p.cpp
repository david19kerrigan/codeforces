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
        int pa = parent[a]; int pb = parent[b];
        if(pa == pb) return 0;
        if(rank[pa] > rank[pb]){
            parent[pb] = pa;
        } else if(rank[pa] == rank[pb]){
            parent[pb] = pa;
            rank[pa]++;
        } else{
            parent[pa] = pb;
        }
        return 1;
    }
};

bool dfs(int cur, int end, vector<vector<int>> graph, vector<int> &path){
    path.push_back(cur);
    if(cur == end){
        return 1;
    }
    for(int nbor: graph[cur]){
        if(dfs(nbor, end, graph, path)){
            return 1;
        }
    }
    path.pop_back();
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        // w, (a,b)
        vector<pair<int, pair<int, int>>> edges;
        // v[0] = v1,v2,etc
        vector<vector<int>> graph(n);
        dsu dsu(n);
        int start, end, minW;
        vector<int> path;
        for(int i = 0; i < m; i++){
            int a, b, weight;
            cin >> a >> b >> weight;
            edges.push_back({weight, {a,b}});
        }
        sort(edges.rbegin(), edges.rend());
        for(pair<int, pair<int, int>> e: edges){ // high weight -> low weight
            int w = e.first;
            int a = e.second.first;
            int b = e.second.second;
            if(!dsu.add(a, b)){ // if edge forms a cycle
                start = a; end = b; minW = w;
            } else{ // if edge does not form a cycle
                graph[a].push_back(b);
                graph[b].push_back(a);
            }
        }
        dfs(start, end, graph, path);
        cout << path.size() << " " << minW;
        for(int e: path) cout << e << " ";
    }
    cout << "\n";
}
