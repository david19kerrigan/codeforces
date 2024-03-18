#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> l;
        for(int i = 0, a; i < n; ++i){
            cin >> a;
            l[a]++;
        }
        int sum = 0;
        long long ans = 0;
        for(pair p: l){
            long long c = p.second;
            if(c >= 3){
                ans += (c * (c - 1) * (c - 2)) / 6;
            } 
            if(c >= 2){
                ans += (c * (c - 1)) / 2 * sum;
            }
            sum += c;
        }
        cout << ans << endl;
    }
}
