#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        bool z = false;
        for(int i = 0; i < n; ++i){
            if(str[i] == '0'){
                z = true;
            }
        }
        if(z) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
