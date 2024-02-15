#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int thresh = n + n - 2;
        if(k <= thresh * 2){
            if(k % 2 == 1) k++;
            cout << k / 2 << endl;
        } else{
            cout << thresh + (k - thresh * 2) << endl;
        }
    }
}
