#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int al,bl,kl;
        cin >> al >> bl >> kl;
        int a[al]; int b[bl]; int k[kl+1];
        for(int i = 0; i < kl+1; i++){
            k[i] = 0;
        }
        int only_a = 0, only_b = 0, both = 0;
        for(int i = 0, n; i < al; i++){
            cin >> n;
            if(n <= kl){
                k[n] |= 1;
            }
        }
        for(int i = 0, n; i < bl; i++){
            cin >> n;
            if(n <= kl){
                k[n] |= 2;
            }
        }
        for(int i = 1; i <= kl; i++){
            if(k[i] == 1){
                only_a += 1;
            } else if(k[i] == 2){
                only_b += 1;
            } else if(k[i] == 3){
                both += 1;
            }
        }
        if(only_a > kl/2 || only_b > kl/2 || (both + only_a + only_b) < kl){
            cout << "NO\n";
        } else{
            cout << "YES\n";
        }
    }
}
