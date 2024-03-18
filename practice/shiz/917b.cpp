#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        //cout << n << " ";
        set<int> bank;
        int ans = 0;
        for(int i = 0; i < n; ++i){
            char a;
            cin >> a;
            ans++;
            bank.insert(a);
            int toAdd = bank.size();
            if(i > 0){
                if(bank.count(a)) toAdd--;
            }
            ans += toAdd;
            //cout << ans << " ";
        }
        cout << ans-1 << endl;
    }
}
