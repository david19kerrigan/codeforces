#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define bend(a) a.begin(), a.end()
#define back(a,i) a[a.size()-i]

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int realN; cin >> realN;
        string str; cin >> str;
        int pos = 0;
        int n = realN;
        while(pos < realN){
            int opp = str[n-pos-1]; 
            if(opp == str[pos]){ 
                n += 2;
            }
            pos++;
        }
        string prefix = str.substr(0, n-realN);
        fori(0, prefix.length()) cout << prefix[i] << " ";
        cout << endl;
    }
}
