#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> list;
        set<int> set;
        for(int i = 0, num; i < n; ++i){
            cin >> num;
            if(set.count(num) == 0) list.push_back(num); set.insert(num);
        }
        sort(list.begin(), list.end());
        int r = 0;
        int best = 1;
        for(int l = 0; l < list.size(); ++l){
            while(list[l] - list[r] >= n){
                r++;
            }
            best = max(best, l-r+1);
        }
        cout << best << "\n";
    }
}
