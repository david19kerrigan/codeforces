#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define print_arr(arr) rep(i, arr.size()) { cout << arr[i] << " "; } cout << endl;
#define print_map(map) for(auto cur: map) cout << cur.first << ": " << cur.second << endl;
#define print_set(set) for(auto cur: set) { cout << cur << " "; } cout << endl;

#define int ll

int base(int number, int bs){
    if(number == 0) return 0;
    string result;
    while(number > 0){
        result = to_string(number % bs) + result;
        number /= bs;
    }
    return stoi(result);
}

bool isP(int num){
    string snum = to_string(num);
    string snum2 = snum;
    reverse(all(snum2));
    return snum == snum2;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int a, n;
    cin >> a >> n;
    ll ans = 0;
    int len = 1;
    vector<ll> pow = {1};
    while(true){
        if(pow.size() < len) pow.push_back(pow.back() * 10);
        if(pow.back() >= n) break;
        vector<int> dig((len+1)/2, 0);
        dig[0] = 1;
        while(true){
            int num = 0;
            rep(i, len){
                int ind;
                if(i < dig.size()) ind = i;
                else ind = len - 1 - i;
                num += dig[ind] * pow[i];
            }
            if(isP(base(num, a))){
                ans += num;
            }
            bool found = false;
            for(int i = dig.size() - 1; i >= 0; --i){
                if(dig[i] == 9){
                    dig[i] = 0;
                }
                else{
                    ++dig[i];
                    found = true;
                    break;
                }
            }
            if(!found) break;
        }
        ++len;
    }
    cout << ans << endl;
}
