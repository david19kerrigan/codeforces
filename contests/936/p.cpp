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
        vector<ll> arr(n);
        fori(0,n) cin >> arr[i];
        sort(bend(arr));
        //fori(0,n) cout << arr[i];
        //cout << endl;
        int med = n/2;
        if(med == (double)n/2) med--;
        int newMed = med; 
        while(newMed < n && arr[newMed] == arr[med]) newMed++;
        cout << newMed-med << endl;
    }
}
