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
        string str; cin >> str;
        ll n; cin >> n;
        --n;
        int len = str.size();
        vector<char> stack;
        bool b = n < len;
        str+="!";
        for(auto c: str){
            while(!b && !stack.empty() && stack.back() > c){
                n -= len;
                --len;
                stack.pop_back();
                if(n < len) b = true;
            }
            stack.push_back(c);
        }
        //cout << str << endl;
        fori(0,stack.size()) cout << stack[i] << " ";
        cout << stack[n] << endl;
    }
}
