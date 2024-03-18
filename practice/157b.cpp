#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define bend(a) a.begin(), a.end()
#define last(a) a[a.size()-1]

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr(n*2);
        fori(0,n*2) cin >> arr[i];
        sort(bend(arr));
        int l = 0;
        int r = n*2-1;
        int sum = 0;
        vector<pair<int,int>> path;
        while(l < r){
            path.push_back(pair(arr[l], arr[r]));
            l++;
            r--;
            if(l < r){
                sum += arr[l]-arr[l-1];
                sum += arr[r+1]-arr[r];
            }
        }
        cout << sum << endl;
        fori(0,n) cout << path[i].first << " " << path[i].second << endl;
    }
}
