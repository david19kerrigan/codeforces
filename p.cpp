#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], d[n];
        for(int i = 0, x; i < n; ++i){
            cin >> x;
            a[i] = x;
        }
        for(int i = 0, x; i < n; ++i){
            cin >> x;
            d[i] = x;
        }
        for(int i = 0; i < n; ++i){
            cout << 0 << endl;
        }
    }
}
