#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define fork(s,n) for(int k = s; k < n; ++k)
#define bend(a) a.begin(), a.end()
#define rbend(a) a.rbegin(), a.rend()
#define aback(a,i) a[a.size()-i]

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int count = 1;
        int b = false;
        fori(1, s.size()){
            if(s[i]=='1' && s[i-1]=='0' && !b){
                b = true;
            } else if(s[i]-'0' != s[i-1]-'0'){
                count++;
            }
        }
        cout << count << endl;
    }
}
