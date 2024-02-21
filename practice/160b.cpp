#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int zero = 0;
        int one = 0;
        for(int i = 0; i < s.length(); ++i){
            if(s[i] == '0') zero++;
            else if(s[i] == '1') one++;
        }        
        bool p = false;
        for(int i = 0; i < s.length(); ++i){
            if(s[i] == '0') one--;
            else if(s[i] == '1') zero--;
            if(zero < 0 || one < 0){
                cout << s.length() - i << endl;
                p = true;
                break;
            }
        }
        if(!p) cout << 0 << endl;
    }
}
