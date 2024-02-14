#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int low = 0;
        int high = INT_MAX;
        vector<int> not_num;
        while(n--){
            int a, x;
            cin >> a >> x;
            if(a == 1 && x > low) low = x;
            if(a == 2 && x < high) high = x;
            if(a== 3) not_num.push_back(x);
        }
        int ans = high - low + 1;
        for(int i: not_num){
            if(low <= i && i <= high) ans--;
        }
        if(ans < 0) ans = 0;
        cout << ans << endl;
    }
}
