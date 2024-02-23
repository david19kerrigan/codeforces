#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> d(n);
        //cout << n << " " << endl;
        //memset(d, 0, n);
        double leaf = 0;
        int m = n-1;
        while(m--){
            int u, v;
            cin >> u >> v;
            d[u-1]++;
            d[v-1]++;
        }
        for(int i = 0; i < n; ++i){
            //cout << d[i] << " ";
            if(d[i] == 1) leaf++;
        }
        cout << ceil(leaf/2) << endl;
        //cout << endl;
    }
}
