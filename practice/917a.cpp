#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool neg = false;
        bool zero = false;
        for(int i = 0, a; i < n; ++i){
            cin >> a;
            if(a < 0) neg = !neg;
            if(a == 0) zero = true;
        }
        if(neg || zero) cout << 0 << endl;
        else cout << 1 << endl << "1 0" << endl;
    }
}
