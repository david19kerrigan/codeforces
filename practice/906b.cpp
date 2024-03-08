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
        map<int,int> count;
        fori(0,n){
            int cur; cin >> cur;
            count[cur]++;
        }
        string ans = "NO";
        if(count.size() == 1) ans = "YES";
        if(count.size() == 2){
            auto key = count.begin();
            int first = (*key).second;
            int sec = (*next(key)).second;
            if((abs(first-sec)) <= 1) ans = "YES";
        }
        cout << ans << endl;
    }
}
