#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,int>> arr(n+1);
        vector<int> cover(n+1);
        vector<long long> sum(n+1);
        vector<int> ans(n+1);
        for(int i = 1, x; i <= n; ++i){ 
            cin >> x;
            arr[i] = pair{x, i};
        }
        sort(arr.begin(), arr.end());
        sum[0] = cover[0] = 0;
        for(int i = 1; i <= n; ++i){
            if(cover[i-1] >= i){
                cover[i] = cover[i-1];
                sum[i] = sum[i-1];
            } else{
                sum[i] = sum[i-1] + arr[i].first;
                cover[i] = i;
                while(cover[i] + 1 <= n && sum[i] >= arr[cover[i]+1].first){
                    cover[i]++;
                    sum[i] += arr[cover[i]].first;
                }
            }
            ans[arr[i].second] = cover[i];
        }
        for(int i = 1; i <= n; ++i) cout << ans[i]-1 << " ";
        cout << endl;
    }
}
