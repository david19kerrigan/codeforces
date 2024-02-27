#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ci cin >>
#define co cout <<
#define fori for(int i = 0; i < n; ++i)

ll int arr[300010];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    ci t;
    while(t--){
        int n;
        ci n;
        if(n == 1){
            co 1 << endl;
            continue;
        }
        ll g = 0;
        ll sum = 0;
        fori{
            ci arr[i];
            if(i > 0) g = gcd(arr[i] - arr[i-1], g);
            sum += arr[i];
        }
        sort(arr, arr+n);
        ll max = arr[n-1];
        ll start = max;
        int index = n-1;
        while(start > 0){
            start -= g;
            while(arr[index] > start) index--;
            if(start != arr[index]){
                break;
            }
        }
        if(start < 0) start = arr[n-1];
        co (max * (n+1) - (sum + start)) / g << endl;
    }
}
