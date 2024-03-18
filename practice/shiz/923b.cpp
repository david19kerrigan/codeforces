#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        map<ll, string> m;
        m[0] = "abcdefghijklmnopqrstuvwxyz";
        ll n;
        cin >> n;
        string s;
        while(n--){
            ll i;
            cin >> i;
            m[i+1] += m[i][0];
            s += m[i][0];
            m[i] = m[i].substr(1, m[i].length());
        }
        cout << s << "\n";
    }
}
