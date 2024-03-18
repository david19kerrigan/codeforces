#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int ans[n];
        bool inc = 1;
        int l = 1;
        int r = n;
        for(int i = 0; i < k; i++){
            int pos = i;
            while(pos < n){
                if(inc){
                    ans[pos] = l++;
                } else{
                    ans[pos] = r--;
                }
                pos += k;
            }
            inc = !inc;
        }
        for(int i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}
