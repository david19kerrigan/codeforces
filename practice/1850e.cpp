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
        int n; ll c;
        cin >> n >> c;
        vector<int> s(n);
        fori(0,n) cin >> s[i];
        int lo = 1, hi = sqrt(c-*max_element(bend(s)))/2;
        //cout << hi << endl;
        while(lo <= hi){
            int mid = lo+(hi-lo)/2;
            ll total = 0;
            fori(0,n){
                total += pow(s[i]+mid*2,2);
                if(total>c) break;
            }
            if(total == c){
                cout << mid << endl;
                break;
            }
            if(total > c) hi = mid-1;
            else lo = mid+1; 
        }
    }
}
