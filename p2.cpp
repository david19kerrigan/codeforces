#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        vector<ll> arr(n);
        ll g = 0;
        ll sum = 0;
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
            if(i > 0) g = gcd(arr[i] - arr[i-1], g);
            sum += arr[i];
        }
        sort(arr.begin(), arr.end());
        ll max = arr[arr.size()-1];
        ll start = max;
        int index = arr.size()-1;
        while(start > 0){
            start -= g;
            while(arr[index] > start) index--;
            if(start != arr[index]){
                break;
            }
        }
        if(start < 0) start = arr[arr.size()-1];
        cout << (max * (n+1) - (sum + start)) / g << endl;
    }
}
