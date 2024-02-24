#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        int n;
        cin >> n >> s;
        vector<int> subset;
        for(int i = 0; i < n; ++i){
            while(!subset.empty() && s[subset.back()] < s[i]){
                subset.pop_back();
            }
            subset.push_back(i);
        }
        int slen = subset.size();
        int ans = 0;
        while(ans < slen && s[subset[ans]] == s[subset[0]]){
            ans++;
        }
        ans = slen - ans;
        for(int i = 0; i < slen-1-i; ++i){
            swap(s[subset[i]], s[subset[slen-1-i]]);
        }
        for(int i = 1; i < n; ++i){
            //cout << s[i] << " | ";
            if(s[i] < s[i-1]){
                ans = -1;
                break;
            }
        }
        //cout << s << endl;
        cout << ans << endl;
    }
}
