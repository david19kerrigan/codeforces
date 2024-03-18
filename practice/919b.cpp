#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,x,k;
        cin >> n >> k >> x;
        int arr[n];
        int sum = 0;
        for(int i = 0; i < n; ++i){ 
            cin >> arr[i]; 
            sum += arr[i];
        }
        //cout << sum << " s ";
        sort(arr, arr+n);
        int cand = 0;
        for(int i = n-1; i >= n-x; --i){
            cand += 2*arr[i];
            //cout << cand << " ";
        }
        //cout << endl;
        int maxCand = cand;
        for(int i = n-1; i >= n-k; --i){
            cand -= arr[i];
            if(i-x >= 0) cand += 2*arr[i-x];
            maxCand = min(cand, maxCand);
            //cout << cand << " ";
        }
        //cout << endl;
        cout << sum - maxCand << endl;
        //cout << endl;
    }
}
