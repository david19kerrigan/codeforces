#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        string ans = "NO";
        if(x % 2 == 0){
            int nx = x / 2, ny = 2 * y;
            if((nx != x && ny != y) && (nx != y && ny != x)) ans = "YES";
        }
        if(y % 2 == 0){
            int nx = y / 2, ny = 2 * x;
            if((nx != x && ny != y) && (nx != y && ny != x)) ans = "YES";
        }
        cout << ans << "\n";
    }
}
