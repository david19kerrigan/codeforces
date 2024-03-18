#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a,b,c;
        cin >> a >> b >> c;
        int bad = 0;
        for(int i = 0; i < n; ++i){
            //cout << a[i] << b[i] << c[i]<< endl;
            if(a[i] == b[i] && b[i] == c[i]){
                bad++;
            }
            if (a[i] != b[i] && (a[i] == c[i] || b[i] == c[i])){
                bad++;
            }
        }
        if(bad == n) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
