#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define bend(a) a.begin(), a.end()
#define rbend(a) a.rbegin(), a.rend()
#define aback(a,i) a[a.size()-i]

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        fori(0,n) cin >> a[i];
        int m1 = a[0], m2 = a[0];
        fori(1,n){
            //cout << a[i] << " ";
            if((a[i]+a[i-1])%2==0 || m1 < 0) {
                m1 = a[i];
                //cout << m1 << " ";
            }
            else {
                m1 += a[i];
                //cout << m1 << " ";
            }
            m2 = max(m1,m2);
        }
        cout << m2 << endl;
    }
}
