#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(n) for(int i = 0; i < n; ++i)
#define forj(n) for(int j = 0; j < n; ++j)

ll arr[10000][10000];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        fori(n) forj(n) cin >> arr[i][j];
    }
}
