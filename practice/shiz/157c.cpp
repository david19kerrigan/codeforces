#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(s,n) for(int i = s; i < n; ++i)
#define forj(s,n) for(int j = s; j < n; ++j)
#define bend(a) a.begin(), a.end()
#define last(a) a[a.size()-1]

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    map<pair<int,int>,int> sums;
    vector<string> nums(n);
    forj(0,n){
        string str; cin >> str;
        nums[j] = str;
        int sum = 0;
        fori(0,str.length()) sum += str[i]-'0';
        sums[pair(str.length(), sum)]++;
    }
    ll ans = 0;
    fori(0,n){
        string str = nums[i];
        int Tsum = 0;
        for(int k = 0; k < str.length(); ++k) Tsum += str[k]-'0';
        int sum = Tsum;
        int j = str.length()-1;
        int len = str.length();
        while(len > 0){
            if(j != str.length()-1){
                ans += sums[pair(len, sum)];
            }
            else{ 
                ans += sums[pair(len, sum)];
            }
            sum -= 2*(str[j]-'0');
            j--;
            len -= 2;
        }
        j = 0;
        len = str.length();
        sum = Tsum;
        while(len > 0){
            if(j != 0){
                ans += sums[pair(len, sum)];
            }
            else{ 
                //ans += sums[pair(len, sum)];
            }
            sum -= 2*(str[j]-'0');
            j++;
            len -= 2;
        }
    }
    cout << ans << endl;
}
