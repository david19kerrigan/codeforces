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
        string str; cin >> str;
        str += "#";
        int count = 0; int ans = 0;
        bool three = false;
        fori(n+1){
            if(str[i] == '.') count++;
            else{
                if(count >= 3) three = true;
                ans += count;
                count = 0;
            }
        }
        if(three) ans = 2;
        cout << ans << endl;
    }
}
