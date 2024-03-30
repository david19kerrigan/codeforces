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
        string s; cin >> s;
        string b = "YES";
        int bal = 0; int mup = 0; int msp = 0;
        fori(0,s.length()){
            char c = s[i];
            if(c=='+') bal++;
            else if(c=='-'){
                bal--;
                msp = min(bal,msp);
                if(bal<mup) mup=0;
            } else if(c=='1'){
                msp = max(bal,msp);
                if(msp >= mup && mup != 0){
                    b = "NO"; break;
                }
            } else if(c=='0'){
                if(bal<2){
                    b = "NO"; break;
                }
                if(mup==0 || bal < mup) mup = bal;
                if(msp >= mup && mup != 0){
                    b = "NO"; break;
                }
            }
        }
        cout << b << endl;
    }
}
