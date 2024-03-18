#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n, p, l, t;
        cin >> n >> p >> l >> t;
        ll tasks = floor((n-1)/7) + 1;
        ll max_day = 2*t + l;
        ll single_day = t+l;
        ll max_double_days = floor(tasks/2);
        ll max_product = max_double_days * max_day;
        ll days = 0;
        if(p > max_product){
            days += max_double_days;
            p -= max_product;
            if(tasks%2 == 1){
                p -= single_day;
                days += 1;
            }
            if(p > 0){
                days += ceil((double)p/l);
            }
            cout << (int)(n - days) << endl;
        } else{
            cout << (int)(n - ceil((double)p/max_day)) << endl;
        }
    }
}
