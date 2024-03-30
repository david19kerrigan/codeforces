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
        int n,k;
        cin >> n >> k;
        string s; cin >> s;
        if(k%2==0){
            sort(bend(s)); 
            cout << s;
        } else{
            string s1 = "", s2 = "", sol = "";
            fori(0,n){
                if(i%2==0) s1+=s[i];
                else s2+=s[i];
            }
            sort(bend(s1)); sort(bend(s2));
            //cout << s1 << " " << s2 << endl;
            int a = 0, b = 0;
            while(a<s1.length() && b<s2.length()){
                sol = sol + s1[a++] + s2[b++];
            }
            if(a < s1.length()) sol += s1[a];
            if(b < s2.length()) sol += s2[b];
            cout << sol;
        }
        cout << endl;
    }
}
