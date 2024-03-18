#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define bend(a) a.begin(), a.end()
#define aback(a,i) a[a.size()-i]

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string str; cin >> str;
        int l = 0; int r = n-1;
        int mismatch = 0; int good = 0;
        if(n%2 == 1) good = 1;
        while(l < r){ 
            if(str[l] != str[r]) mismatch++;
            else good+=2;
            l++; r--;
        }
        fori(0,n+1) {
            if((i == mismatch) || (i > mismatch && i <= good+mismatch && ((i-mismatch)%2 == 0 || n%2 == 1))) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
}
