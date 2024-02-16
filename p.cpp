#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int l[n];
        for(int i = 0, a; i < n; ++i){
            cin >> a;
            l[i] = pow(2,a);
        }
        sort(l, l+n);
        int ans = 0;
        for(int a = 0; a < n; ++a){
            for(int b = a+1; b < n; ++b){
                int c = b+1;
                int cap = l[a] + l[b];
                while(c < n && l[c] < cap){
                    c++;
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}
