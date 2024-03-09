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
        int c1 = 0; int c0 = 0;
        fori(0,n){
            if(str[i] == '1') c1++; 
            if(str[i] == '0') c0++;
        }
        if(c1 != c0){ 
            cout << -1 << endl;
            continue;
        }
        vector<int> ans;
        deque<char> q;
        int offset = 0;
        fori(0,n) q.push_back(str[i]);
        while(!q.empty()){
            if(q.front() == q.back() && q.front() == '1'){
                q.push_front('1');
                q.push_front('0');
                ans.push_back(offset);
                n += 2;
            }
            if(q.front() == q.back() && q.front() == '0'){
                q.push_back('0');
                q.push_back('1');
                ans.push_back(n-offset);
                n += 2;
            }
            while(!q.empty() && q.front() != q.back()){
                q.pop_back();
                q.pop_front();
                ++offset;
            }
        }
        cout << ans.size() << endl;
        fori(0, ans.size()) cout << ans[i] << " ";
        cout << endl;
    }
}
