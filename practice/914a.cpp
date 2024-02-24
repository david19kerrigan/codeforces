#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;
        set<pair<int,int>> one = {pair{xk+a,yk+b}, pair{xk+a,yk-b}, pair{xk-a, yk+b}, pair{xk-a, yk-b}, 
                                  pair{xk+b, yk+a}, pair{xk+b, yk-a}, pair{xk-b, yk+a}, pair{xk-b, yk-a}};
        set<pair<int,int>> two = {pair{xq+a,yq+b}, pair{xq+a,yq-b}, pair{xq-a, yq+b}, pair{xq-a, yq-b}, 
                                  pair{xq+b, yq+a}, pair{xq+b, yq-a}, pair{xq-b, yq+a}, pair{xq-b, yq-a}};
        vector<pair<int,int>> common;
        set_intersection(one.begin(), one.end(), two.begin(), two.end(), back_inserter(common));
        cout << common.size() << endl;
    }
}
