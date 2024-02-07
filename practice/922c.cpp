#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int get_digits(ll number){
    if(number == 0){
        return 0;
    } else {
        return log2(number);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        ll a; ll b; ll r;
        ll x = 0;
        bool first_bit = 1;
        cin >> a >> b >> r;
        if(a > b){
            swap(a,b);
        }
        int digits = max(get_digits(a), get_digits(b));
        for(int i = digits; i >= 0; i--){
            bool ia = (a >> i) & 1;
            bool ib = (b >> i) & 1;
            if(ia != ib){
                if(first_bit){
                    first_bit = 0;
                }else{
                    if(!ia){
                        ll new_x = x | (1ll << i); // set 1
                        if(new_x <= r){
                            x = new_x;
                        }
                    }
                }
            }
        }
        cout << abs((a^x) - (b^x)) << "\n";
    }
}
