#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define fork(s,n) for(int k = s; k < n; ++k)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define back(a,i) a[a.size()-i]

map<int, vector<int>> graph;
set<int> red, blue;
set<pair<int, int>> edges;

void recur(int cur, int level){
    for(auto next: graph[cur]){
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    fori(1, n){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        edges.insert(pair(min(a, b), max(a, b)));
    }
    recur(1, 0);
}
