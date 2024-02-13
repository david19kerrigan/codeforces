#include <bits/stdc++.h>
using namespace std;

set<int> solve(int n){
    set<int> ret;
    set<int> ret2;
    for(int i = 1; pow(i,2) <= n; ++i){
        if(n%i == 0){
            if(i%2 == 0) ret.insert(i);
            if(n/i %2 == 0) ret.insert(n/i);
        }
    }
    for(int i: ret){
        ret2.insert(i/2 + 1);
    }
    return ret2;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n, x;
        // n = position
        // x = given number
        cin >> n >> x;
        set<int> ans = solve(n-x);
        int ans2 = 0;
        for(int i: solve(n+x-2)){
            ans.insert(i);
        }
        for(int i: ans){
            if(i >= x) ans2++;
        }
        cout << ans2 << "\n";
    }
}
