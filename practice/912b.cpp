#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(n) for(int i = 0; i < n; ++i)
#define forj(n) for(int j = 0; j < n; ++j)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n][n];
        int ans[n];
        fori(n) ans[i] = (1 << 30) - 1;
        fori(n) forj(n){
            cin >> arr[i][j];
            if(i != j){
                ans[i] &= arr[i][j];
                ans[j] &= arr[i][j];
            }
        }
        bool valid = true;
        fori(n) forj(n){
            if(i != j && (ans[i] | ans[j]) != arr[i][j]){
                valid = false;
                break;
            }
        }
        if(valid){
            cout << "YES" << endl;
            fori(n) cout << ans[i] << " ";
            cout << endl;
        } else{
            cout << "NO" << endl;
        }
    }
}
