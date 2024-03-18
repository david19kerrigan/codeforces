#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> stack;
        vector<ll> arr;
        arr.push_back(0);
        fori(0, n){
            int cur; cin >> cur;
            arr.push_back(cur);
        }
        arr.push_back(0);
        ll ans = -1;
        fori(0,n+2){
            ll cur = arr[i];
            if(!stack.empty() && stack[0] <= cur){
                while(stack[stack.size()-1] > cur){
                    //cout << stack[stack.size()-1] << " ";
                    ans += min(abs(stack[stack.size()-1] - stack[stack.size()-2]),abs(stack[stack.size()-1] - cur));
                    stack.pop_back();
                }
            }
            stack.push_back(cur);
        }
        cout << ans << endl;
    }
}
