#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define fork(s,n) for(int k = s; k < n; ++k)
#define bend(a) a.begin(), a.end()
#define rbend(a) a.rbegin(), a.rend()
#define aback(a,i) a[a.size()-i]

int solve(int n, int factor){
    //cout << factor << endl;
    if(factor > n){
        return -1;
    }
    if(factor!=0 && factor!=1 && n%factor == 0){
        return n/factor;
    }
    if(factor > 0){
        int a = solve(n, factor * 10);
        if(a > 0) return a;
    }
    if(!(factor&1)){ 
        int b = solve(n, factor + 1);
        if(b > 0) return b;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        while(n > 1){
            //cout << n << endl;
            n = solve(n, 0);
        }
        cout << (n==1?"YES":"NO") << endl;
    }
}
