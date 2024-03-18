#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,k,m;
        cin >> n >> k >> m;
        string s;
        cin >> s;
        bool found[k];
        string ans = "";
        int count = 0;
        memset(found, false, k);
        for(char c: s){
            if(ans.size() == n) break;
            if(!found[c-'a']) count++;
            found[c-'a'] = true;
            if(count == k){
                count = 0;
                memset(found, false, k);
                ans += c;
            }
        }
        if(ans.size() == n) cout << "YES" << endl;
        else{
            for(int i = 0; i < k; ++i){
                if(!found[i]){
                    while(ans.size() < n) ans += (char)('a'+i);
                }
            }
            cout << "NO" << endl << ans << endl;
        }
    }
}
