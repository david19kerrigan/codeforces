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
    int n; cin >> n;
    int q; cin >> q;
    vector<set<int>> nest(n);
    map<int, int> pigeon;
    fori(0, nest.size()){
        nest[i].insert(i);
        pigeon[i] = i;
    }
    fori(0, q){
        int op, a, b;
        cin >> op;
        if(op == 1){
            int a, b; cin >> a >> b;
            nest[pigeon[i]].erase(i);
            pigeon[i] = b;
            nest[b].insert(i);
        }
        else if(op == 2){
            int a, b; cin >> a >> b;
            swap(nest[pigeon[a]], nest[pigeon[b]]);
            forj(0, pigeon.size()){
                if(pigeon[i] == a) pigeon[i] = b;
                if(pigeon[i] == b) pigeon[i] = a;
            }
        }
        else{
            int a; cin >> a;
            cout << pigeon[a] << endl;
        }
    }
}
