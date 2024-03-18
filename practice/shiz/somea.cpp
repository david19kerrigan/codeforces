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
        vector<int> arr(n);
        fori(0,n) cin >> arr[i];
        if(n%2 == 1){
            cout << 4 << endl;
            cout << "1 " << n-1 << endl;
            cout << "1 " << n-1 << endl;
            cout << n-1 << " " << n << endl;
            cout << n-1 << " " << n << endl;
        } else{
            cout << 2 << endl;
            cout << "1 " << n << endl;
            cout << "1 " << n << endl;
        }
    }
}
