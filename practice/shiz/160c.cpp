#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    map<int, int> m;
    while(t--){
        int t, v;
        cin >> t >> v;
        if(t==1){
            m[v]++;
        } else if(t==2){
            int add = 0;
            bool b = false;
            for(int i = 0; i < 30; ++i){
                int rem = (v % (2 << i)) / (1 << i);
                if(rem > add + m[i]){
                    cout << "NO" << endl;
                    b = true;
                    break;
                } 
                v -= rem;
                add = (add + m[i] - rem) / 2;
            }
            if(!b && add >= (v >> 30)) cout << "YES" << endl;
        }
    }
}
