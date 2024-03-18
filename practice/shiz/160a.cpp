#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int a = 0;
        int b = -1;
        for(int i = 1; i < s.length(); ++i){
            if(s[i] != '0'){
                b = i;
                break;
            }
        }
        if(b == -1) cout << -1 << endl;
        else{
            int na = stoi(s.substr(a, b));
            int nb = stoi(s.substr(b, s.length()));
            if(nb <= na || b == -1) cout << -1 << endl;
            else cout << na << " " << nb << endl;
        }
    }
}
