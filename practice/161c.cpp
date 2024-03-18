#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n;
        int graph[n];
        for(int i = 0, a; i < n; ++i){
            cin >> a;
            graph[i] = a;
        }
        int l[n], r[n];
        char c[n];
        c[0] = 'r'; c[n-1] = 'l';
        for(int i = 1; i < n-1; ++i){
            if(abs(graph[i-1] - graph[i]) > abs(graph[i+1] - graph[i])) c[i] = 'r';
            else c[i] = 'l';
        }
        int sum = 0;
        for(int i = 0; i < n; ++i){
            r[i] = sum;
            if(c[i] == 'r') sum++;
            else if(i < n-1) sum += graph[i+1]-graph[i];
        }
        sum = 0;
        for(int i = n-1; i >= 0; --i){
            l[i] = sum;
            if(c[i] == 'l') sum++;
            else if(i>0) sum += graph[i]-graph[i-1];
        }
        cin >> m;
        while(m--){
            int a,b;
            cin >> a >> b;
            a--; b--;
            if(b > a) cout << r[b] - r[a] << endl;
            else cout << l[b] - l[a] << endl;
        }
    }
}
