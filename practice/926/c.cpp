#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int k,x,a;
        cin >> k >> x >> a;
        int loss = 1;
        string ans = "YES";
        for(int _ = 1; _ <= x; ++_){
            int bet = ceil((float)loss / (k-1)); 
            if(bet * (k-1) == loss) bet++;
            loss += bet;
            if(_ < x && loss >= a) ans = "NO";
        }
        if(loss > a) ans = "NO";
        cout << ans << endl;
    }
}
