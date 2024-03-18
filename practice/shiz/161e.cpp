#include <bits/stdc++.h>
using namespace std;

vector<int> recur(long long x){
    if(x == 2){
        vector<int> ans;
        ans.push_back(0);
        return ans;
    } else if(x & 1){
        vector<int> ans = recur(x-1);
        ans.push_back(*min_element(ans.begin(), ans.end()) - 1);
        return ans;
    } else {
        vector<int> ans = recur(x/2);
        ans.push_back(*max_element(ans.begin(), ans.end()) + 1);
        return ans;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long x;
        cin >> x;
        vector<int> ans = recur(x);
        cout << ans.size() << endl;
        for(int i: ans) cout << i << " ";
        cout << endl;
    }
}
