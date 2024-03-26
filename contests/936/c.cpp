#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define bend(a) a.begin(), a.end()
#define aback(a,i) a[a.size()-i]

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<vector<int>> graph(n);
        fori(0,n-1){
            int u,v;
            cin >> u >> v;
            --u; --v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        auto validate = [&](int x){
            int segments = 0;
            auto dfs = [&](auto self, int cur, int par) -> int{
                int size = 1;
                for(auto nei: graph[cur]){
                    if(nei == par) continue;
                    size += self(self, nei, cur);
                }
                if(size >= x && par != cur){
                    ++segments; size = 0;
                }
                return size;
            };
            int rSize = dfs(dfs,0,0);
            return (segments > k || (segments == k && rSize >= x));
        };
        int low = 1, high = n/(k+1) + 1;
        while(high-low>1){
            int mid = (low+high)/2;
            if(validate(mid)) low = mid;
            else high = mid;
        }
        cout << low << endl;
    }
}
