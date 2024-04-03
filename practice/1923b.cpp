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
        vector<int> a(n),x(n);
        vector<pair<int,int>> mon(n);
        fori(0,n) cin >> a[i];
        fori(0,n) cin >> x[i];
        fori(0,n) mon[i] = pair(abs(x[i]),a[i]);
        sort(bend(mon));
        int pos = 0, i = 0;
        bool can = true;
        //fori(0,n) cout << mon[i].first << " " <<mon[i].second << " ";
        while(i<mon.size()){
            //cout << i << " ";
            int bul = k;
            if(pos>=mon[i].first && mon[i].second>0){ 
                can = false;
                break;
            }
            while(bul && i<mon.size()){
                mon[i].second -= bul;
                bul = 0;
                if(mon[i].second<=0){
                    bul = abs(mon[i].second);
                    i++;
                }
            }
            pos++;
        }
        cout << (can?"YES":"NO") << endl;
    }
}
