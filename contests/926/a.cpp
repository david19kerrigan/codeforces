#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; ++i){
            int num;
            cin >> num;
            arr[i] = num;
        }
        sort(arr, arr+n);
        int ans = 0;
        for(int i = 1; i < n; ++i){
            ans += arr[i] - arr[i-1];
        }
        cout << ans << endl;
    }
}
