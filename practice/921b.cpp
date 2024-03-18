#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int x, n;
        cin >> x >> n;
        int best = 1;
        for(int a = 1; a*a <= x; ++a){
            if(x % a == 0){
                int b = x/a;
                //cout << a << " " << b << endl;
                if(b >= n) best = max(best, a);
                if(a >= n) best = max(best, b);
            }
        }
        //cout << endl;
        cout << best << endl;
    }
}
