#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ci cin >>
#define co cout <<
#define fori for(int i = 0; i < n; ++i)
#define forl for(ll i = 0; i < n; ++i)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; ci t;
    while(t--){
        int k,n;
        ci n; ci k;
        vector<ll> arr(n);
        bool sorted = true;
        fori{
            ci arr[i];
            if(i > 0 && arr[i] < arr[i-1]) sorted = false;
        }
        if(k > 1 || sorted) co "YES" << endl;
        else co "NO" << endl;
    }
}
