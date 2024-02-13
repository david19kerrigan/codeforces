#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string alph = "abcdefghijklmnopqrstuvwxyz";
    int t;
    cin >> t;
    while(t--){
        int n, k;
        string sol;
        cin >> n >> k;
        for(int _ = 0; _ < n; ++_){
            for(int i = 0; i < k; ++i){
                sol += (alph.at(i));
            }
        }
        cout << sol << endl;
    }
}
