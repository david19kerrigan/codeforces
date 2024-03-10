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
        int px,py,ax,ay,bx,by;
        cin>>px>>py>>ax>>ay>>bx>>by;
        double a_p = sqrt(pow(px-ax,2) + pow(py-ay,2));
        double b_p = sqrt(pow(px-bx,2) + pow(py-by,2));
        double a_b = (sqrt(pow(ax-bx,2) + pow(ay-by,2))) / 2.0;
        double a = sqrt(pow(ax,2) + pow(ay,2));
        double b = sqrt(pow(bx,2) + pow(by,2));
        double ans = INT_MAX;
        if(a_p > a) ans = min(ans, a_p);
        if(b_p > b) ans = min(ans, b_p);
        if(b > b_p) ans = min(ans, b);
        if(a > a_p) ans = min(ans, a);
        if(a_b > a || a_b > b) ans = min(ans, a_b);
        cout << setprecision(10) << ans << endl;
    }
}
